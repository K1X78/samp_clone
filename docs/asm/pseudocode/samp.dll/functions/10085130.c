/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085130
 * Name: FUN_10085130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10085130(int param_1)

{
  LONG *pLVar1;
  LPRECT lprc;
  
  FUN_100848a0();
  pLVar1 = (LONG *)(param_1 + 0x3d);
  lprc = (LPRECT)(param_1 + 0x68);
  lprc->left = *pLVar1;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x49);
  InflateRect(lprc,-*(int *)(param_1 + 0x60),-*(int *)(param_1 + 0x60));
  *(LONG *)(param_1 + 0x78) = lprc->left;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x74);
  SetRect((LPRECT)(param_1 + 0x88),*pLVar1,*(int *)(param_1 + 0x41),lprc->left,
          *(int *)(param_1 + 0x6c));
  SetRect((LPRECT)(param_1 + 0x98),lprc->left,*(int *)(param_1 + 0x41),*(int *)(param_1 + 0x70),
          *(int *)(param_1 + 0x6c));
  SetRect((LPRECT)(param_1 + 0xa8),*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x41),
          *(int *)(param_1 + 0x45),*(int *)(param_1 + 0x6c));
  SetRect((LPRECT)(param_1 + 0xb8),*pLVar1,*(int *)(param_1 + 0x6c),lprc->left,
          *(int *)(param_1 + 0x74));
  SetRect((LPRECT)(param_1 + 200),*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x6c),
          *(int *)(param_1 + 0x45),*(int *)(param_1 + 0x74));
  SetRect((LPRECT)(param_1 + 0xd8),*pLVar1,*(int *)(param_1 + 0x74),lprc->left,
          *(int *)(param_1 + 0x49));
  SetRect((LPRECT)(param_1 + 0xe8),lprc->left,*(int *)(param_1 + 0x74),*(int *)(param_1 + 0x70),
          *(int *)(param_1 + 0x49));
  SetRect((LPRECT)(param_1 + 0xf8),*(int *)(param_1 + 0x70),*(int *)(param_1 + 0x74),
          *(int *)(param_1 + 0x45),*(int *)(param_1 + 0x49));
  InflateRect(lprc,-*(int *)(param_1 + 100),-*(int *)(param_1 + 100));
  return;
}


/* END FUNCTION 0x10085130 */
