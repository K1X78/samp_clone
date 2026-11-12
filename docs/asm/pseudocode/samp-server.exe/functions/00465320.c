/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465320
 * Name: FUN_00465320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00465320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0xf46280);
  iVar2 = 2000;
  do {
    puVar3[-2000] = 0;
    *puVar3 = 0;
    puVar3[-0x1e9420] = 0;
    puVar1 = puVar3 + -0x3d18a0;
    iVar4 = 1000;
    do {
      *puVar1 = 0;
      puVar1[0x1e8c50] = 0;
      puVar1 = puVar1 + 2000;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x00465320 */
