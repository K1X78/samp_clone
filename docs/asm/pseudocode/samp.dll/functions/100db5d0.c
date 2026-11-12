/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db5d0
 * Name: FUN_100db5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100db5d0(int param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 local_8;
  
  uVar1 = *(uint *)(param_1 + 0x1f8);
  bVar3 = 0 < (int)uVar1;
  if ((param_3 != 0) && (0 < *(int *)(param_1 + 0x1fc))) {
    bVar3 = bVar3 | 2;
  }
  if (bVar3 != 1) {
    if (bVar3 == 2) {
      uVar6 = *(uint *)(param_1 + 0x1fc);
      goto LAB_100db62e;
    }
    if (bVar3 != 3) {
      uVar6 = -(uint)(param_3 != 0) & 300000;
      if (param_3 == 0) {
        return 0;
      }
      goto LAB_100db62e;
    }
    uVar6 = *(uint *)(param_1 + 0x1fc);
    if ((int)*(uint *)(param_1 + 0x1fc) <= (int)uVar1) goto LAB_100db62e;
  }
  uVar6 = uVar1;
LAB_100db62e:
  if (param_2 == (undefined8 *)0x0) {
    local_8 = FUN_100d8500();
    param_2 = &local_8;
  }
  if (param_3 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x79c);
    uVar5 = *(undefined4 *)(param_1 + 0x798);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x794);
    uVar5 = *(undefined4 *)(param_1 + 0x790);
  }
  iVar2 = FUN_100d8520(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),uVar5,uVar4);
  if (uVar6 - iVar2 == 0) {
    return -1;
  }
  return uVar6 - iVar2;
}


/* END FUNCTION 0x100db5d0 */
