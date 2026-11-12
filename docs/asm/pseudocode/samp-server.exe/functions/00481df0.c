/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481df0
 * Name: FUN_00481df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

long __cdecl FUN_00481df0(int *param_1,uint *param_2)

{
  byte bVar1;
  char *_Str;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int local_14;
  int local_10;
  int local_c;
  byte *local_8;
  
  if ((DAT_004fc408 <= param_2[1] - 1) ||
     (local_10 = *(int *)(DAT_004fc404 + (param_2[1] - 1) * 4), local_10 == 0)) {
    if (DAT_004fc464 == 0) {
      return 0;
    }
    FUN_00491fa0("[Error] db_get_field_assoc_int(): invalid result handle %u");
    return 0;
  }
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  FUN_004031d0(param_2,&local_14);
  if (0 < local_14) {
    iVar7 = -(local_14 + 4U & 0xfffffffc);
    pbVar2 = &stack0xffffffdc;
    local_8 = &stack0xffffffdc;
    if (&stack0x00000000 != (undefined1 *)0x24) {
      *(int *)(&stack0xffffffd8 + iVar7) = local_14 + 1;
      *(undefined4 *)(&stack0xffffffd4 + iVar7) = 0;
      *(uint **)(&stack0xffffffd0 + iVar7) = param_2;
      *(undefined1 **)(&stack0xffffffcc + iVar7) = &stack0xffffffdc;
      *(undefined4 *)(&stack0xffffffc8 + iVar7) = 0x481e8d;
      FUN_00403350(*(int *)(&stack0xffffffcc + iVar7),*(uint **)(&stack0xffffffd0 + iVar7),
                   *(int *)(&stack0xffffffd4 + iVar7),*(uint *)(&stack0xffffffd8 + iVar7));
      goto LAB_00481e97;
    }
  }
  pbVar2 = (byte *)0x0;
  local_8 = (byte *)0x0;
LAB_00481e97:
  local_c = *(int *)(local_10 + 4);
  iVar7 = 0;
  if (local_c < 1) {
    return 0;
  }
  puVar5 = *(undefined4 **)(local_10 + 8);
  do {
    pbVar6 = (byte *)*puVar5;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00481edb:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00481ee0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00481edb;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00481ee0:
    if (iVar3 == 0) {
      if (iVar7 < 0) {
        return 0;
      }
      if (local_c <= iVar7) {
        return 0;
      }
      _Str = (char *)(*(undefined4 **)(local_10 + 8))
                     [(*(int *)(local_10 + 0x10) + 1) * local_c + iVar7];
      if (_Str == (char *)0x0) {
        return 0;
      }
      lVar4 = _atol(_Str);
      return lVar4;
    }
    iVar7 = iVar7 + 1;
    puVar5 = puVar5 + 1;
    pbVar2 = local_8;
    if (local_c <= iVar7) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x00481df0 */
