/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100685c0
 * Name: FUN_100685c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100685c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  undefined4 uVar4;
  float local_114;
  char local_110 [268];
  
  iVar1 = FUN_10001010();
  iVar2 = FUN_100aba90();
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x2a4);
    FUN_100b1f10(&DAT_1011bdf8,*(undefined4 *)(iVar1 + 0x44),&local_114);
    FUN_100c51a0();
    _sprintf(local_110,"%s\\rawpositions.txt");
    pFVar3 = (FILE *)FUN_100f9cc9();
    if (pFVar3 != (FILE *)0x0) {
      iVar1 = *(int *)(iVar2 + 0x14);
      _fprintf(pFVar3,"%.4f,%.4f,%.4f,%.4f ; %s\n",(double)*(float *)(iVar1 + 0x30),
               (double)*(float *)(iVar1 + 0x34),(double)*(float *)(iVar1 + 0x38),(double)local_114,
               param_1);
      _fclose(pFVar3);
      FUN_10067b60(DAT_102aca10,"-> OnFoot pos saved");
      return;
    }
  }
  else {
    pFVar3 = (FILE *)FUN_100f9cc9();
    if (pFVar3 != (FILE *)0x0) {
      iVar2 = FUN_100abc20();
      uVar4 = FUN_100b3800(iVar2);
      FUN_100b1f10(&DAT_1011bdd0,uVar4,&local_114);
      iVar1 = *(int *)(iVar2 + 0x14);
      _fprintf(pFVar3,"%u,%.4f,%.4f,%.4f,%.4f,%u,%u ; %s\n",(int)*(short *)(iVar2 + 0x22),
               (double)*(float *)(iVar1 + 0x30),(double)*(float *)(iVar1 + 0x34),
               (double)*(float *)(iVar1 + 0x38),(double)local_114,(uint)*(byte *)(iVar2 + 0x434),
               (uint)*(byte *)(iVar2 + 0x435),param_1);
      _fclose(pFVar3);
      FUN_10067b60(DAT_102aca10,"-> InCar pos saved");
      return;
    }
  }
  FUN_10067b60();
  return;
}


/* END FUNCTION 0x100685c0 */
