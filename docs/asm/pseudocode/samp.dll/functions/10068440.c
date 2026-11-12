/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10068440
 * Name: FUN_10068440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10068440(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  FILE *_File;
  int iVar3;
  float local_114;
  char local_110 [268];
  
  iVar1 = FUN_10001010();
  uVar2 = FUN_100c51a0();
  _sprintf(local_110,"%s\\savedpositions.txt",uVar2);
  _File = (FILE *)FUN_100f9cc9(local_110,&DAT_10118170);
  if (_File == (FILE *)0x0) {
    FUN_10067b60();
    return;
  }
  iVar3 = FUN_100aba90();
  if (iVar3 != 0) {
    iVar3 = FUN_100abc20();
    uVar2 = FUN_100b3800(iVar3);
    FUN_100b1f10(&DAT_1011bdd0,uVar2,&local_114);
    iVar1 = *(int *)(iVar3 + 0x14);
    _fprintf(_File,"AddStaticVehicle(%u,%.4f,%.4f,%.4f,%.4f,%u,%u); // %s\n",
             (int)*(short *)(iVar3 + 0x22),(double)*(float *)(iVar1 + 0x30),
             (double)*(float *)(iVar1 + 0x34),(double)*(float *)(iVar1 + 0x38),(double)local_114,
             (uint)*(byte *)(iVar3 + 0x434),(uint)*(byte *)(iVar3 + 0x435),param_1);
    _fclose(_File);
    FUN_10067ae0(DAT_102aca10,"-> InCar position saved");
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x2a4);
  FUN_100b1f10(&DAT_1011bdf8,*(undefined4 *)(iVar1 + 0x44),&local_114);
  iVar1 = *(int *)(iVar3 + 0x14);
  FUN_1009ee70((double)*(float *)(iVar1 + 0x30),(double)*(float *)(iVar1 + 0x34),
               (double)*(float *)(iVar1 + 0x38),(double)local_114,param_1);
  _fprintf(_File,"AddPlayerClass(%u,%.4f,%.4f,%.4f,%.4f,0,0,0,0,0,0); // %s\n");
  _fclose(_File);
  FUN_10067ae0(DAT_102aca10,"-> OnFoot position saved");
  return;
}


/* END FUNCTION 0x10068440 */
