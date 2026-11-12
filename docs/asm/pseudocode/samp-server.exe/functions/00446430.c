/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00446430
 * Name: FUN_00446430
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00446430(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_8;
  int local_4;
  
  iVar1 = param_1[0x80];
  iVar5 = -1;
  if ((iVar1 == 0) || ((char)param_1[0x85] != '\0')) goto LAB_004465ce;
  if ((*(byte *)(iVar1 + 0x22) & 4) != 0) {
    FUN_00418b00((undefined **)"table \"%s\" has more than one primary key");
    FUN_0040e580();
    return;
  }
  *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 4;
  if (param_2 == (int *)0x0) {
    iVar5 = *(int *)(iVar1 + 0xc) + -1;
    *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x15 + iVar5 * 0x18) = 1;
LAB_00446520:
    if ((((-1 < iVar5) && (iVar5 < *(int *)(iVar1 + 0xc))) &&
        (pbVar2 = *(byte **)(*(int *)(iVar1 + 0x10) + 0xc + iVar5 * 0x18), pbVar2 != (byte *)0x0))
       && ((iVar3 = FUN_00408450(pbVar2,(byte *)"INTEGER"), iVar3 == 0 && (param_5 == 0)))) {
      *(undefined1 *)(iVar1 + 0x23) = (undefined1)param_3;
      *(int *)(iVar1 + 8) = iVar5;
      *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | (char)param_4 << 3;
      FUN_0040e580();
      return;
    }
  }
  else {
    local_4 = 0;
    if (0 < *param_2) {
      local_8 = 0;
      do {
        iVar5 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          pbVar2 = *(byte **)(param_2[3] + 4 + local_8);
          puVar6 = *(undefined4 **)(iVar1 + 0x10);
          do {
            iVar3 = FUN_00408450(pbVar2,(byte *)*puVar6);
            if (iVar3 == 0) break;
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 6;
          } while (iVar5 < *(int *)(iVar1 + 0xc));
        }
        if (iVar5 < *(int *)(iVar1 + 0xc)) {
          *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0x15 + iVar5 * 0x18) = 1;
        }
        local_4 = local_4 + 1;
        local_8 = local_8 + 0x14;
      } while (local_4 < *param_2);
    }
    if (*param_2 < 2) goto LAB_00446520;
  }
  if (param_4 != 0) {
    FUN_00418b00((undefined **)"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
    FUN_0040e580();
    return;
  }
  piVar4 = FUN_00445a10(param_1,0,0,(short *)0x0,param_2,param_3,0,0,(char)param_5,0);
  if (piVar4 != (int *)0x0) {
    *(undefined1 *)((int)piVar4 + 0x19) = 2;
  }
LAB_004465ce:
  FUN_0040e580();
  return;
}


/* END FUNCTION 0x00446430 */
