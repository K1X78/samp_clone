/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e5f0
 * Name: FUN_1001e5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001e5f0(int param_1,ushort param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_2 < 2000) && (uVar2 = (uint)param_2, *(int *)(param_1 + 0x3074 + uVar2 * 4) != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x1134 + uVar2 * 4), iVar1 != 0)) &&
     (*(int *)(param_1 + 0xbd14 + uVar2 * 4) != 0)) {
    if (param_3 != '\0') {
      *(undefined1 *)(iVar1 + 100) = 1;
      *(undefined4 *)(iVar1 + 0x65) = 0;
    }
    FUN_100b7380(param_4);
  }
  return;
}


/* END FUNCTION 0x1001e5f0 */
