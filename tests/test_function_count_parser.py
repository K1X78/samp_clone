import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from official_function_count import mask_msvc_assembly
from tree_sitter import Language, Parser
import tree_sitter_cpp


class MsvcAssemblyParserTest(unittest.TestCase):
    def test_naked_function_keeps_real_body_and_offsets(self):
        data = (b'// Official: FUN_10001000 @ 0x10001000 (samp.dll)\r\n'
                b'__declspec(naked) void hook() {\r\n'
                b'  __asm { mov eax, dword ptr [ecx+4]\r\n'
                b'    test eax,eax\r\n  again: jne again }\r\n}\r\n'
                b'int next() { return 2; }\r\n')
        masked = mask_msvc_assembly(data)
        self.assertEqual(len(data), len(masked))
        self.assertEqual([i for i,b in enumerate(data) if b in (10,13)],
                         [i for i,b in enumerate(masked) if b in (10,13)])
        self.assertIn(b'void hook() {', masked)
        self.assertIn(b'int next() { return 2; }', masked)
        self.assertNotIn(b'dword ptr', masked)
        parser = Parser(Language(tree_sitter_cpp.language()))
        tree = parser.parse(masked)
        self.assertFalse(tree.root_node.has_error)
        functions = [n for n in tree.root_node.children if n.type == 'function_definition']
        self.assertEqual(len(functions), 2)
        self.assertEqual(functions[0].start_point.row, 1)

    def test_comments_strings_and_raw_literals_are_not_assembly(self):
        data = (b'// __asm { comment }\n/* _asm { comment } */\n'
                b'const char* a = "__asm { string }";\n'
                b'const char* b = R"tag(__asm { raw })tag";\n'
                b'char c = \'}\';\n')
        self.assertEqual(mask_msvc_assembly(data), data)

    def test_comments_and_nested_braces_inside_assembly(self):
        data = b'void f(){ __asm /* start */ { /* } */ { nop } mov eax, "}" } return; }'
        masked = mask_msvc_assembly(data)
        self.assertEqual(len(data), len(masked))
        self.assertTrue(masked.endswith(b' return; }'))
        self.assertNotIn(b'nop', masked)

    def test_unterminated_and_single_line_asm_remain_diagnostic(self):
        for data in (b'void f(){ __asm { mov eax,1', b'void f(){ __asm int 3\n }'):
            self.assertEqual(mask_msvc_assembly(data), data)

    def test_assembly_does_not_hide_cpp_syntax_errors(self):
        data = b'void f(){ __asm { nop } int = ; }'
        parser = Parser(Language(tree_sitter_cpp.language()))
        self.assertTrue(parser.parse(mask_msvc_assembly(data)).root_node.has_error)


if __name__ == '__main__':
    unittest.main()
