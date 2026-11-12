/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101004c3
 * Name: __heap_term
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl __heap_term(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_102ad68c == 3) {
    iVar1 = 0;
    if (0 < DAT_102ad670) {
      puVar2 = (undefined4 *)((int)DAT_102ad674 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_102ad688,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_102ad670);
    }
    HeapFree(DAT_102ad688,0,DAT_102ad674);
  }
  HeapDestroy(DAT_102ad688);
  return;
}


/* END FUNCTION 0x101004c3 */
