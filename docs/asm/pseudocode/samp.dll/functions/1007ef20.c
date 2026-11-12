/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007ef20
 * Name: FUN_1007ef20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007ef20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  code *local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  char local_4;
  
  fVar5 = (float10)FUN_1007d460();
  FUN_1007cbc0();
  piVar1 = (int *)FUN_1007b2c0();
  if ((piVar1 != (int *)0x0) && (iVar4 = 0, 0 < piVar1[1])) {
    iVar3 = 0;
    do {
      puVar2 = (undefined4 *)(*piVar1 + iVar3);
      local_14 = (code *)*puVar2;
      local_10 = puVar2[1];
      local_c = (float)puVar2[2];
      local_4 = *(char *)(puVar2 + 4);
      if (local_4 != '\0') {
        local_8 = (float)puVar2[3] - (float)fVar5;
        if (local_8 < 0.0) {
          (*local_14)(iVar4,local_10);
          local_8 = local_c;
        }
        FUN_1007baf0(iVar4,&local_14);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x11;
    } while (iVar4 < piVar1[1]);
  }
  return;
}


/* END FUNCTION 0x1007ef20 */
