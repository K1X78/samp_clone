/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481f40
 * Name: FUN_00481f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

float __cdecl FUN_00481f40(int *param_1,uint *param_2)

{
  byte bVar1;
  char *_String;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  float local_8;
  
  local_8 = 0.0;
  if ((DAT_004fc408 <= param_2[1] - 1) ||
     (local_14 = *(int *)(DAT_004fc404 + (param_2[1] - 1) * 4), local_14 == 0)) {
    if (DAT_004fc464 != 0) {
      FUN_00491fa0("[Error] db_get_field_assoc_float(): invalid result handle %u");
    }
    return 0.0;
  }
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  FUN_004031d0(param_2,&local_18);
  if (0 < local_18) {
    iVar6 = -(local_18 + 4U & 0xfffffffc);
    pbVar2 = &stack0xffffffd8;
    local_c = &stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
      *(int *)(&stack0xffffffd4 + iVar6) = local_18 + 1;
      *(undefined4 *)(&stack0xffffffd0 + iVar6) = 0;
      *(uint **)(&stack0xffffffcc + iVar6) = param_2;
      *(undefined1 **)(&stack0xffffffc8 + iVar6) = &stack0xffffffd8;
      *(undefined4 *)(&stack0xffffffc4 + iVar6) = 0x481fe4;
      FUN_00403350(*(int *)(&stack0xffffffc8 + iVar6),*(uint **)(&stack0xffffffcc + iVar6),
                   *(int *)(&stack0xffffffd0 + iVar6),*(uint *)(&stack0xffffffd4 + iVar6));
      goto LAB_00481fee;
    }
  }
  pbVar2 = (byte *)0x0;
  local_c = (byte *)0x0;
LAB_00481fee:
  local_10 = *(int *)(local_14 + 4);
  iVar6 = 0;
  if (local_10 < 1) {
    return local_8;
  }
  puVar4 = *(undefined4 **)(local_14 + 8);
  do {
    pbVar5 = (byte *)*puVar4;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00482038:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0048203d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00482038;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0048203d:
    if (iVar3 == 0) {
      if (iVar6 < 0) {
        return local_8;
      }
      if (local_10 <= iVar6) {
        return local_8;
      }
      _String = (char *)(*(undefined4 **)(local_14 + 8))
                        [(*(int *)(local_14 + 0x10) + 1) * local_10 + iVar6];
      if (_String == (char *)0x0) {
        return local_8;
      }
      dVar8 = _atof(_String);
      return (float)dVar8;
    }
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
    pbVar2 = local_c;
    if (local_10 <= iVar6) {
      return local_8;
    }
  } while( true );
}


/* END FUNCTION 0x00481f40 */
