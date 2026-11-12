/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009be80
 * Name: FUN_1009be80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009be80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if ((iVar2 != 0) && (**(int **)(param_1 + 0x48) != 0x863c40)) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


/* END FUNCTION 0x1009be80 */
