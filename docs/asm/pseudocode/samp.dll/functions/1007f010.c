/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f010
 * Name: FUN_1007f010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1007f010(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *param_2 = 0;
  FUN_1007e000(0);
  piVar2 = (int *)FUN_1007d360();
  piVar3 = (int *)FUN_10082120();
  iVar5 = 0;
  if (0 < piVar3[1]) {
    do {
      puVar1 = *(undefined4 **)(*piVar3 + iVar5 * 4);
      iVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,*puVar1);
      if (iVar4 == param_1) {
        *param_2 = *puVar1;
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[1]);
  }
  return 0x80004005;
}


/* END FUNCTION 0x1007f010 */
