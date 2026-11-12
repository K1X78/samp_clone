/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac6e0
 * Name: FUN_100ac6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100ac6e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = *(int *)(param_1 + 0x2a4);
  if (iVar2 != 0) {
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)((uint)*(byte *)(iVar2 + 0x718) * 0x1c + 0x5a0 + iVar2);
    }
    iVar2 = FUN_100a1200(*puVar1,1);
    local_8 = iVar2 + 0x24;
  }
  return local_8;
}


/* END FUNCTION 0x100ac6e0 */
