/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418ff0
 * Name: FUN_00418ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0041901e) */

int __cdecl FUN_00418ff0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  longlong lVar7;
  uint local_c;
  int local_8 [2];
  
  lVar7 = FUN_0040b200();
  lVar2 = CONCAT44(param_3,param_2);
  param_3 = (int)((ulonglong)lVar7 >> 0x20);
  *(longlong *)(in_EAX + 0x48) = lVar7;
  if (lVar2 < (longlong)(lVar7 + (ulonglong)*(uint *)(in_EAX + 0x78))) {
    return 0x65;
  }
  if (((param_1 != 0) || ((int)lVar7 != *(int *)(in_EAX + 0x50))) ||
     (param_3 != *(int *)(in_EAX + 0x54))) {
    iVar3 = FUN_00407ad0();
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = 2;
    bVar6 = true;
    piVar4 = local_8;
    piVar5 = &DAT_004b2fcc;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return 0x65;
    }
  }
  iVar3 = FUN_0040b060();
  if (((iVar3 == 0) && (iVar3 = FUN_0040b060(), iVar3 == 0)) && (iVar3 = FUN_0040b060(), iVar3 == 0)
     ) {
    if (*(int *)(in_EAX + 0x48) == 0 && *(int *)(in_EAX + 0x4c) == 0) {
      iVar3 = FUN_0040b060();
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_0040b060();
      if (iVar3 != 0) {
        return iVar3;
      }
      if (param_2 < 0x200) {
        return 0x65;
      }
      if (local_c < 0x20) {
        return 0x65;
      }
      if (0x8000 < param_2) {
        return 0x65;
      }
      if (0x10000 < local_c) {
        return 0x65;
      }
      if ((param_2 & param_2 - 1) != 0) {
        return 0x65;
      }
      if ((local_c & local_c - 1) != 0) {
        return 0x65;
      }
      iVar3 = FUN_00413f50((undefined2 *)&param_2,-1);
      *(uint *)(in_EAX + 0x78) = local_c;
    }
    uVar1 = *(uint *)(in_EAX + 0x48);
    *(uint *)(in_EAX + 0x48) = uVar1 + *(uint *)(in_EAX + 0x78);
    *(uint *)(in_EAX + 0x4c) =
         *(int *)(in_EAX + 0x4c) + (uint)CARRY4(uVar1,*(uint *)(in_EAX + 0x78));
  }
  return iVar3;
}


/* END FUNCTION 0x00418ff0 */
