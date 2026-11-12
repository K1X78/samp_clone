/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d1a0
 * Name: FUN_1007d1a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d1a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_4 [4];
  
  FUN_1007cbc0();
  piVar1 = (int *)FUN_10078360();
  piVar4 = (int *)0x0;
  iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,0,0,0,local_4);
  FUN_1007cbc0();
  puVar3 = (undefined4 *)FUN_100784a0();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  if (-1 < iVar2) {
    (**(code **)(*piVar4 + 0x30))(piVar4,puVar3);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  return;
}


/* END FUNCTION 0x1007d1a0 */
