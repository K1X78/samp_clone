/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ec60
 * Name: FUN_0049ec60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_0049ec60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = param_1 + 0x7724;
  iVar3 = 2000;
  puVar4 = param_1;
  do {
    puVar5 = puVar4;
    for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined1 *)puVar5 = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    puVar4 = (undefined4 *)((int)puVar4 + 0x3d);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x7ef4] = 0;
  return param_1;
}


/* END FUNCTION 0x0049ec60 */
