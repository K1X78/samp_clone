/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043fff0
 * Name: FUN_0043fff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0043fff0(int *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int local_8;
  
  iVar6 = param_1[4];
  iVar1 = in_EAX[0x11];
  iVar3 = *in_EAX;
  in_EAX[0x11] = iVar1 + 2;
  iVar2 = FUN_0040fc30(iVar3);
  iVar3 = FUN_0041ab60(0x1b,*param_1,0,*(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar3 + 8)));
  if (iVar3 == 0) {
    FUN_00416230(iVar2,*(int *)(iVar6 + 0x18),'\x01',*(int *)(iVar6 + 4));
    pvVar4 = (void *)FUN_0041c720();
    if (pvVar4 != (void *)0x0) {
      if (param_2 < 0) {
        local_8 = param_1[5];
        FUN_00414e70(local_8,0x60);
      }
      else {
        local_8 = param_2;
      }
      piVar5 = FUN_00430960(in_EAX,param_1);
      FUN_004197c0(local_8,iVar1 + 1,0x27,(char *)piVar5,-0x10);
      if (-1 < param_2) {
        FUN_0040d660(extraout_ECX,1);
      }
      FUN_004215c0(iVar1,iVar2,0x26);
      FUN_00414e70(iVar1,0x41);
      iVar6 = FUN_0040ec00();
      pcVar7 = (char *)FUN_00438460((int)in_EAX,(int)param_1,iVar1,iVar6,1);
      if ((char)param_1[6] != '\0') {
        iVar3 = -0xe;
        iVar6 = FUN_0040d5c0();
        FUN_004197c0(iVar6 + 2,iVar1 + 1,0x33,pcVar7,iVar3);
        FUN_00420ee0("indexed columns are not unique",-2);
      }
      FUN_00414e70(iVar1 + 1,0x46);
      FUN_0040d660(extraout_ECX_00,0x10);
      FUN_0040ec20(extraout_ECX_01,(int)in_EAX);
      FUN_00414e70(iVar1,0x43);
      FUN_0040d680(pvVar4);
      FUN_00414e50(0x2b);
      FUN_00414e50(0x2b);
    }
  }
  return;
}


/* END FUNCTION 0x0043fff0 */
