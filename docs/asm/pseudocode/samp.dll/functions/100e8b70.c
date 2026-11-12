/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e8b70
 * Name: FUN_100e8b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100e8bda) */
/* WARNING: Removing unreachable block (ram,0x100e8bcc) */
/* WARNING: Removing unreachable block (ram,0x100e8bef) */

int FUN_100e8b70(int param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar7 = 0;
  lVar8 = FUN_100d6960(*(undefined4 *)(param_1 + 100));
  lVar9 = FUN_100d6980(*(undefined4 *)(param_1 + 100));
  iVar5 = (int)((ulonglong)lVar9 >> 0x20);
  uVar6 = 0xffffffff;
  uVar3 = 0xfffffffe;
  if (*(int **)(param_2 + 0x3a8) != (int *)0x0) {
    iVar2 = **(int **)(param_2 + 0x3a8);
    plVar1 = (longlong *)(iVar2 + 0x70);
    uVar3 = *(undefined4 *)plVar1;
    uVar6 = *(undefined4 *)(iVar2 + 0x74);
    if ((0 < lVar8) && (lVar8 < *plVar1)) {
      iVar7 = 1;
    }
  }
  if (((lVar9 < 1) || (*(int *)(param_2 + 0x34) < iVar5)) ||
     ((*(int *)(param_2 + 0x34) <= iVar5 && (*(uint *)(param_2 + 0x30) <= (uint)lVar9)))) {
    if (iVar7 == 0) {
      pcVar4 = "FALSE";
    }
    else {
      pcVar4 = "TRUE";
    }
  }
  else {
    iVar7 = 1;
    pcVar4 = "TRUE";
  }
  FUN_100d8ae0(param_1,"Conn: %ld (%p) Receive pipe weight: (%I64d/%zu), penalized: %s\n",
               *(undefined4 *)(param_2 + 0x4c),param_2,uVar3,uVar6,*(undefined4 *)(param_2 + 0x30),
               *(undefined4 *)(param_2 + 0x34),pcVar4);
  return iVar7;
}


/* END FUNCTION 0x100e8b70 */
