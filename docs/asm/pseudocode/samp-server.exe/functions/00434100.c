/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434100
 * Name: FUN_00434100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00434100(int param_1,char *param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *this;
  char *pcVar4;
  int *piVar5;
  char cVar6;
  int *local_4;
  
  piVar5 = (int *)0x0;
  local_4 = (int *)0x0;
  if (param_2 == (char *)0x0) {
    *param_5 = 0;
    return 0;
  }
  cVar6 = *param_2;
  if (cVar6 == -0x7c) {
    cVar6 = param_2[0x23];
  }
  if (((cVar6 == '^') || (cVar6 == -0x7e)) || (cVar6 == -0x7f)) {
    local_4 = (int *)FUN_00419760();
    if (local_4 == (int *)0x0) {
LAB_00434262:
      *(undefined1 *)(param_1 + 0x1e) = 1;
      FUN_00408130(param_1);
      FUN_0040d430();
      *param_5 = 0;
      return 7;
    }
    if ((param_2[3] & 4U) == 0) {
      pcVar4 = FUN_00412a70();
      if (pcVar4 == (char *)0x0) goto LAB_00434262;
      FUN_0042e5e0((void *)0xffffffff,(int)local_4,pcVar4);
      if (cVar6 == -0x7e) {
        *(undefined1 *)((int)local_4 + 0x1e) = 2;
      }
    }
    else {
      FUN_0040d360(*(int *)(param_2 + 4),*(int *)(param_2 + 4) >> 0x1f);
    }
    FUN_004300e0(local_4);
    if ((char)param_3 != '\x01') {
      FUN_0041fbf0(param_3 & 0xff);
    }
  }
  else if (cVar6 == -100) {
    iVar1 = FUN_00434100(param_1,*(char **)(param_2 + 8),param_3,param_4,&local_4);
    if (iVar1 == 0) {
      iVar1 = *local_4;
      *local_4 = -iVar1;
      local_4[1] = -(local_4[1] + (uint)(iVar1 != 0));
      *(double *)(local_4 + 2) = *(double *)(local_4 + 2) * -1.0;
    }
  }
  else {
    if (cVar6 != -0x7d) goto LAB_004342ef;
    local_4 = (int *)FUN_00419760();
    if (local_4 == (int *)0x0) goto LAB_00434262;
    uVar2 = FUN_00408380((char *)(*(int *)(param_2 + 4) + 2));
    cVar6 = '\0';
    pvVar3 = (void *)((int)(uVar2 - 1) / 2);
    this = FUN_00412e20(param_1,uVar2 - 1);
    FUN_0042e460(this,pvVar3,cVar6);
  }
  piVar5 = local_4;
  if (local_4 != (int *)0x0) {
    FUN_0040e150((int)local_4);
    piVar5 = local_4;
  }
LAB_004342ef:
  *param_5 = piVar5;
  return 0;
}


/* END FUNCTION 0x00434100 */
