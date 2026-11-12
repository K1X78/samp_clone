/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000dbd0
 * Name: FUN_1000dbd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000dbd0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *_Format;
  undefined4 uVar5;
  undefined4 uVar6;
  char local_108 [264];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)((int)param_1 + 0x222);
  }
  if (*(uint *)((int)param_2 + 0x15) < (uint)param_1[1]) {
    puVar3 = *(undefined1 **)(*param_1 + *(uint *)((int)param_2 + 0x15) * 4);
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  if ((FILE *)*param_2 != (FILE *)0x0) {
    _fclose((FILE *)*param_2);
    *param_2 = 0;
  }
  if (*(int *)((int)param_2 + 5) == *(int *)((int)param_2 + 9)) {
    iVar1 = *(int *)((int)param_2 + 0x11);
    if (*(int *)((int)param_2 + 0xd) == iVar1) {
      if (*(char *)(param_2 + 1) == '\x01') {
        cVar2 = FUN_1000da80((LPCSTR)((int)param_2 + 0x19),iVar1);
        if (cVar2 == '\0') {
          DeleteFileA((LPCSTR)((int)param_2 + 0x19));
          puVar3[6] = 1;
          if (DAT_102ac9e8 != 0) {
            FUN_1006a720(*(undefined1 *)(param_2 + 1),*(undefined4 *)((int)param_2 + 0x11),3,
                         *(undefined4 *)((int)param_2 + 5),0,0x66,0);
          }
          *(undefined4 *)((int)param_1 + 0x213) = 2;
          return;
        }
LAB_1000dd98:
        if (*(char *)(param_2 + 1) == '\x01') {
          uVar6 = *(undefined4 *)((int)param_2 + 0x11);
          _Format = "%s/0x%X.dff";
LAB_1000ddc7:
          __snprintf(local_108,0x104,_Format,(int)param_1 + 9,uVar6);
        }
        else if (*(char *)(param_2 + 1) == '\x02') {
          uVar6 = *(undefined4 *)((int)param_2 + 0x11);
          _Format = "%s/0x%X.txd";
          goto LAB_1000ddc7;
        }
        MoveFileA((LPCSTR)((int)param_2 + 0x19),local_108);
        if (*(char *)(param_2 + 1) == '\x01') {
          *puVar3 = 1;
        }
        else if (*(char *)(param_2 + 1) == '\x02') {
          puVar3[1] = 1;
        }
        if (DAT_102ac9e8 == 0) goto LAB_1000dd7d;
        uVar6 = *(undefined4 *)((int)param_2 + 5);
        uVar5 = 0xffffffff;
        uVar4 = 4;
      }
      else {
        if (*(char *)(param_2 + 1) != '\x02') {
          DeleteFileA((LPCSTR)((int)param_2 + 0x19));
          puVar3[6] = 1;
          if (DAT_102ac9e8 != 0) {
            FUN_1006a720(*(undefined1 *)(param_2 + 1),*(undefined4 *)((int)param_2 + 0x11),3,
                         *(undefined4 *)((int)param_2 + 5),0,0x68,0);
          }
          *(undefined4 *)((int)param_1 + 0x213) = 2;
          return;
        }
        cVar2 = FUN_1000bfd0((LPCSTR)((int)param_2 + 0x19),iVar1);
        if (cVar2 != '\0') goto LAB_1000dd98;
        DeleteFileA((LPCSTR)((int)param_2 + 0x19));
        puVar3[6] = 1;
        if (DAT_102ac9e8 == 0) goto LAB_1000dd7d;
        uVar6 = *(undefined4 *)((int)param_2 + 5);
        uVar5 = 0x67;
        uVar4 = 3;
      }
      FUN_1006a720(*(undefined1 *)(param_2 + 1),*(undefined4 *)((int)param_2 + 0x11),uVar4,uVar6,0,
                   uVar5,0);
LAB_1000dd7d:
      *(undefined4 *)((int)param_1 + 0x213) = 2;
      return;
    }
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"[error] file 0x%X bad checksum (0x%X). Deleting..",iVar1,
                   *(int *)((int)param_2 + 0xd));
    }
    DeleteFileA((LPCSTR)((int)param_2 + 0x19));
    puVar3[6] = 1;
    if (DAT_102ac9e8 == 0) goto LAB_1000dcb3;
    uVar6 = 0x65;
  }
  else {
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"[error] file 0x%X bad length got:%u expected:%u. Deleting..",
                   *(undefined4 *)((int)param_2 + 0x11),*(int *)((int)param_2 + 5),
                   *(int *)((int)param_2 + 9));
    }
    DeleteFileA((LPCSTR)((int)param_2 + 0x19));
    puVar3[6] = 1;
    if (DAT_102ac9e8 == 0) goto LAB_1000dcb3;
    uVar6 = 100;
  }
  FUN_1006a720(*(undefined1 *)(param_2 + 1),*(undefined4 *)((int)param_2 + 0x11),3,
               *(undefined4 *)((int)param_2 + 5),0,uVar6,0);
LAB_1000dcb3:
  *(undefined4 *)((int)param_1 + 0x213) = 2;
  return;
}


/* END FUNCTION 0x1000dbd0 */
