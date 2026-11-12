/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465cb0
 * Name: FUN_00465cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00465cb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x25d84);
  iVar1 = 1000;
  do {
    puVar2[-1000] = 0;
    *puVar2 = 0;
    puVar2[-2000] = 0;
    uVar3 = thunk_FUN_0044e910();
    puVar2[-0x86c4] = (int)uVar3;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x30d4c) = 0;
  *(undefined4 *)(param_1 + 0x30d50) = 0;
  uVar3 = thunk_FUN_0044e910();
  *(int *)(param_1 + 5000) = (int)uVar3;
  *(undefined4 *)(param_1 + 0x138c) = 0;
  *(undefined4 *)(param_1 + 0x1390) = 0;
  *(undefined4 *)(param_1 + 0x30d54) = 0;
  return param_1;
}


/* END FUNCTION 0x00465cb0 */
