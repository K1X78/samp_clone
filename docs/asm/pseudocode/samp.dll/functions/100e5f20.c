/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5f20
 * Name: FUN_100e5f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e5f20(int *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int local_10;
  int local_8 [2];
  
  piVar4 = param_1;
  iVar2 = *param_1;
  iVar5 = 1;
  local_10 = 1;
  if (param_2 == 0) {
    if ((param_1[0xa6] == 0) || (param_1[0xb1] != 0)) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 2;
  }
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      local_8[0] = *(int *)(iVar2 + 0x238);
      if (*(int *)(iVar2 + 0x3b0) != 0) {
        local_8[1] = *(undefined4 *)(iVar2 + 0x23c);
        local_10 = 2;
      }
      goto LAB_100e5fb3;
    }
    if (iVar5 != 2) goto LAB_100e5fb3;
    if (*(int *)(iVar2 + 0x3b0) != 0) {
      local_8[0] = *(int *)(iVar2 + 0x23c);
      goto LAB_100e5fb3;
    }
  }
  local_8[0] = *(int *)(iVar2 + 0x238);
LAB_100e5fb3:
  param_1 = (int *)0x0;
  if (local_10 != 0) {
    do {
      for (puVar3 = (undefined4 *)local_8[(int)param_1]; puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        pcVar6 = _strchr((char *)*puVar3,0x3a);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = _strchr((char *)*puVar3,0x3b);
          if (pcVar6 != (char *)0x0) {
            bVar1 = pcVar6[1];
            while (pcVar6 = pcVar6 + 1, bVar1 != 0) {
              iVar5 = _isspace((uint)bVar1);
              if (iVar5 == 0) {
                if (*pcVar6 != '\0') goto LAB_100e6172;
                break;
              }
              bVar1 = pcVar6[1];
            }
            if (pcVar6[-1] == ';') {
              pcVar6[-1] = ':';
              iVar5 = FUN_100e5da0(param_3,&DAT_1012727c,*puVar3);
              pcVar6[-1] = ';';
LAB_100e616b:
              if (iVar5 != 0) {
                return iVar5;
              }
            }
          }
        }
        else {
          bVar1 = pcVar6[1];
          while (bVar1 != 0) {
            iVar5 = _isspace((uint)bVar1);
            if (iVar5 == 0) {
              if (((((pcVar6[1] != '\0') &&
                    ((piVar4[0xd3] == 0 ||
                     (iVar5 = thunk_FUN_100de8c0("Host:",*puVar3,5), iVar5 == 0)))) &&
                   ((*(int *)(iVar2 + 1000) != 3 ||
                    (iVar5 = thunk_FUN_100de8c0("Content-Type:",*puVar3,0xd), iVar5 == 0)))) &&
                  ((((*(int *)(iVar2 + 1000) != 4 ||
                     (iVar5 = thunk_FUN_100de8c0("Content-Type:",*puVar3,0xd), iVar5 == 0)) &&
                    ((piVar4[0xb2] == 0 ||
                     (iVar5 = thunk_FUN_100de8c0("Content-Length:",*puVar3,0xf), iVar5 == 0)))) &&
                   ((piVar4[0xd6] == 0 ||
                    (iVar5 = thunk_FUN_100de8c0("Connection:",*puVar3,0xb), iVar5 == 0)))))) &&
                 ((piVar4[0x60] != 0x14 ||
                  (iVar5 = thunk_FUN_100de8c0("Transfer-Encoding:",*puVar3,0x12), iVar5 == 0)))) {
                iVar5 = FUN_100e5da0(param_3,&DAT_1012727c,*puVar3);
                goto LAB_100e616b;
              }
              break;
            }
            bVar1 = pcVar6[2];
            pcVar6 = pcVar6 + 1;
          }
        }
LAB_100e6172:
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < local_10);
  }
  return 0;
}


/* END FUNCTION 0x100e5f20 */
