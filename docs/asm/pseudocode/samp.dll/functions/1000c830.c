/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c830
 * Name: FUN_1000c830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000c830(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_1000c7e0(param_2,param_3);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (uVar1 < (uint)param_1[1]) {
    param_3 = *(int *)(*param_1 + uVar1 * 4);
  }
  else {
    param_3 = 0;
  }
  puVar5 = param_4;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  cVar4 = (char)param_2;
  *(uint *)((int)param_4 + 0x15) = uVar1;
  *(char *)(param_4 + 1) = cVar4;
  *(undefined4 *)((int)param_4 + 5) = 0;
  *(undefined4 *)((int)param_4 + 0xd) = 0;
  if (cVar4 == '\x01') {
    *(undefined4 *)((int)param_4 + 0x11) = *(undefined4 *)(param_3 + 0x46);
    uVar2 = *(undefined4 *)(param_3 + 0x4e);
  }
  else {
    if (cVar4 != '\x02') goto LAB_1000c8b5;
    *(undefined4 *)((int)param_4 + 0x11) = *(undefined4 *)(param_3 + 0x4a);
    uVar2 = *(undefined4 *)(param_3 + 0x52);
  }
  *(undefined4 *)((int)param_4 + 9) = uVar2;
LAB_1000c8b5:
  __snprintf((char *)((int)param_4 + 0x19),0x104,"%s/%05d_%X.temp",(int)param_1 + 9,uVar1,
             *(undefined4 *)((int)param_4 + 0x11));
  return 1;
}


/* END FUNCTION 0x1000c830 */
