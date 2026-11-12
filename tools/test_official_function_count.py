"""Regression checks for inventory boundaries and parser review enforcement."""
import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import official_function_count as counter


class CounterTest(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        (self.root / 'tools').mkdir()
        (self.root / 'src').mkdir()
        self.source = self.root / 'src/example.cpp'
        self.source.write_text('int example() { return 0; }\n')
        self.diagnostic = {'source': 'src/example.cpp', 'line': 1, 'text': 'example'}
        self.review = {'diagnostic': self.diagnostic, 'disposition': 'Reviewed syntax boundary',
                       'source_sha256': hashlib.sha256(self.source.read_bytes()).hexdigest()}
        self.write_reviews([self.review])
        self.scope = patch.object(counter, 'ROOT', self.root)
        self.scope.start()
        self.addCleanup(self.scope.stop)

    def write_reviews(self, rows):
        (self.root / 'tools/parser_diagnostics.json').write_text(json.dumps(rows))

    def test_reviewed_diagnostic_passes(self):
        self.assertEqual(counter.parser_review_errors([self.diagnostic]), [])

    def test_new_diagnostic_fails(self):
        changed = {**self.diagnostic, 'text': 'new syntax'}
        self.assertTrue(any('unreviewed' in error for error in
                            counter.parser_review_errors([self.diagnostic, changed])))

    def test_removed_diagnostic_requires_review_update(self):
        self.assertTrue(any('stale' in error for error in counter.parser_review_errors([])))

    def test_changed_source_invalidates_review(self):
        self.source.write_text('int example() { return 1; }\n')
        self.assertTrue(any('renewal' in error for error in
                            counter.parser_review_errors([self.diagnostic])))

    def test_empty_disposition_fails(self):
        self.write_reviews([{**self.review, 'disposition': ''}])
        self.assertTrue(counter.parser_review_errors([self.diagnostic]))

    def test_lambdas_and_declarations_are_not_function_bodies(self):
        self.source.write_text('''
int declared();
auto callback = [] { return 1; };
int WINAPI owner() { auto nested = [] { return 2; }; return nested(); }
''')
        functions, diagnostics = counter.source_functions()
        self.assertEqual(diagnostics, [])
        self.assertEqual(len(functions), 1)
        self.assertEqual(functions[0]['declarator'], 'owner()')

    def test_vtable_hook_store_accepts_only_disassembled_targets(self):
        listing = """
.globl FUN_10001000
.type FUN_10001000, @function
FUN_10001000:
    /* 0x10001000 size=0x30 sha1=fixture */
    ret /* 0x10001000: c3 */
    pushal /* 0x10001010: 60 */
    ret /* 0x10001018: c3 */
    mov dword ptr [edi], 0x10001010 /* 0x10001020: c7 07 10 10 00 10 */
    mov dword ptr [edi], 0x10009999 /* 0x10001026: c7 07 99 99 00 10 */
    mov eax, 0x10001018 /* 0x1000102c: b8 18 10 00 10 */
"""
        labels, total = counter.labels_from_disassembly(listing)
        self.assertEqual(total, 1)  # The denominator remains labeled entries.
        self.assertEqual(labels['FUN_10001010'], {0x10001010})
        self.assertNotIn('FUN_10009999', labels)
        self.assertNotIn('FUN_10001018', labels)

    def test_reference_metadata_preserves_denominator_and_callback_aliases(self):
        for binary, address in [('samp.dll', '0x10001000'), ('samp-server.exe', '0x00401000')]:
            directory = self.root / 'docs/asm/pseudocode' / binary
            directory.mkdir(parents=True)
            name = f'FUN_{int(address, 16):08x}'
            data = {'schema': 1, 'binary': binary,
                    'regions': [{'address': address, 'assembly_name': name}],
                    'mapping_labels': {name: [address], 'FUN_10001010': ['0x10001010']}}
            (directory / 'reference.json').write_text(json.dumps(data))
        labels, total = counter.official_labels()
        self.assertEqual(total, 2)  # Callback aliases do not inflate the total.
        self.assertEqual(labels['samp.dll']['FUN_10001010'], {0x10001010})
        self.assertFalse(list(self.root.rglob('*.s')))

    def test_reference_metadata_rejects_a_missing_official_label(self):
        directory = self.root / 'docs/asm/pseudocode/samp.dll'
        directory.mkdir(parents=True)
        (directory / 'reference.json').write_text(json.dumps({
            'schema': 1, 'binary': 'samp.dll',
            'regions': [{'address': '0x10001000', 'assembly_name': 'FUN_10001000'}],
            'mapping_labels': {}}))
        with self.assertRaisesRegex(ValueError, 'Official region missing'):
            counter.official_labels()



if __name__ == '__main__':
    unittest.main()
