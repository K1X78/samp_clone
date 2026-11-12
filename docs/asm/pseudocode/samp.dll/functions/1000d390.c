/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d390
 * Name: FUN_1000d390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000d390(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112cab;
  local_c = ExceptionList;
  if ((((*(int *)((int)param_1 + 0x213) == 2) && ((char)param_1[0x88] == '\0')) &&
      (*(char *)((int)param_1 + 0x21f) != '\0')) &&
     ((ExceptionList = &local_c, (char)param_1[0x4d1] == '\0' ||
      (ExceptionList = &local_c, iVar3 = FUN_1000bde0(), iVar3 != 0)))) {
    uVar4 = 0;
    if (param_1[1] != 0) {
      bVar5 = param_1[1] != 0;
      do {
        if ((((bVar5) && (pcVar1 = *(char **)(*param_1 + uVar4 * 4), pcVar1 != (char *)0x0)) &&
            (pcVar1[6] != '\x01')) &&
           ((pcVar1[7] == '\x01' ||
            ((pcVar1[7] == '\x02' &&
             ((*(int *)(pcVar1 + 8) == *(int *)((int)param_1 + 0x217) ||
              (*(int *)(pcVar1 + 8) == -1)))))))) {
          if (*pcVar1 == '\0') {
            cVar2 = FUN_1000bb10(*(undefined4 *)(pcVar1 + 0x46));
            if (cVar2 == '\0') {
              cVar2 = FUN_1000c6e0(*(undefined4 *)(pcVar1 + 0x46));
              if (cVar2 == '\0') {
                FUN_1000d270(uVar4,1,*(undefined4 *)(pcVar1 + 0x46),*(undefined4 *)(pcVar1 + 0x4e));
                pcVar1[4] = '\x01';
                ExceptionList = local_c;
                return;
              }
            }
            else {
              *pcVar1 = '\x01';
            }
          }
          if (pcVar1[1] == '\0') {
            cVar2 = FUN_1000bba0(*(undefined4 *)(pcVar1 + 0x4a));
            if (cVar2 == '\0') {
              cVar2 = FUN_1000c720(*(undefined4 *)(pcVar1 + 0x4a));
              if (cVar2 == '\0') {
                FUN_1000d270(uVar4,2,*(undefined4 *)(pcVar1 + 0x4a),*(undefined4 *)(pcVar1 + 0x52));
                pcVar1[5] = '\x01';
                ExceptionList = local_c;
                return;
              }
            }
            else {
              pcVar1[1] = '\x01';
            }
          }
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < (uint)param_1[1];
      } while (uVar4 != param_1[1]);
    }
    if ((*(char *)((int)param_1 + 0x21f) != '\0') && (iVar3 = FUN_1000c9b0(), iVar3 < 1)) {
      *(undefined1 *)(param_1 + 0x88) = 1;
      FUN_1001f1f0();
      local_4 = 0;
      FUN_1001f9f0();
      if (DAT_102aca24 != 0) {
        (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117d64,local_120,1,9,0,0);
      }
      local_4 = 0xffffffff;
      FUN_1001f390();
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000d390 */
