/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ee80
 * Name: FUN_1001ee80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001ee80(int *param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  int local_10;
  
  DVar3 = GetTickCount();
  uVar7 = 0;
  local_10 = 0;
  if (-1 < *param_1) {
    uVar6 = 0;
    do {
      if ((((ushort)uVar7 < 2000) && (param_1[uVar6 + 0xc1d] == 1)) &&
         (iVar1 = param_1[uVar6 + 0x44d], param_1[uVar6 + 0x2f45] != 0)) {
        if ((param_1[uVar6 + 0x3715] == 0) || ((int)(DVar3 - param_1[uVar6 + 0x3ee5]) < 0x3a99)) {
          iVar4 = FUN_100b6f30();
          FUN_100b6cd0(iVar4 == 0);
          fVar8 = (float10)FUN_100b6de0();
          if ((float10)0.0 == fVar8) {
            FUN_1001ecf0(uVar7);
            if (param_1[uVar6 + 0x3715] == 0) {
              param_1[uVar6 + 0x3715] = 1;
              DVar5 = GetTickCount();
              param_1[uVar6 + 0x3ee5] = DVar5;
            }
          }
          else {
            fVar8 = (float10)FUN_1009ef00();
            iVar4 = FUN_100b6ed0();
            if (((iVar4 == 4) || (200.0 <= (float)fVar8)) || (iVar4 = FUN_100b6ef0(), iVar4 == 0)) {
              iVar4 = FUN_100b6fa0();
              if ((iVar4 == 0) &&
                 ((((iVar4 = FUN_100b78b0(), iVar4 == 0 || (iVar4 = FUN_100b7830(), iVar4 == 0)) &&
                   (local_10 < 3)) &&
                  ((100 < (int)(DVar3 - param_1[uVar6 + 0x2775]) &&
                   (cVar2 = FUN_10006c10(uVar7,iVar1), cVar2 != '\0')))))) {
                DVar5 = GetTickCount();
                param_1[uVar6 + 0x2775] = DVar5;
                local_10 = local_10 + 1;
              }
              if (*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x2b) == '\0') {
                iVar4 = FUN_100b7d50();
                if (iVar4 == -1) {
                  iVar4 = FUN_100b6c20();
                  if (iVar4 == 0) {
                    uVar9 = 0;
                  }
                  else {
LAB_1001f060:
                    uVar9 = 1;
                  }
LAB_1001f062:
                  FUN_100b85a0(uVar9);
                }
                else {
                  iVar4 = FUN_100b7d50();
                  if (iVar4 == 0) {
                    uVar9 = 0;
                    goto LAB_1001f062;
                  }
                  iVar4 = FUN_100b7d50();
                  if (iVar4 == 1) goto LAB_1001f060;
                }
                iVar4 = FUN_100b7d70();
                if (iVar4 == 0) {
                  uVar9 = 0;
                  goto LAB_1001f085;
                }
                iVar4 = FUN_100b7d70();
                if (iVar4 == 1) goto LAB_1001f081;
              }
              else {
                iVar4 = FUN_100b7d50();
                FUN_100b85a0(0 < iVar4);
                iVar4 = FUN_100b7d70();
                if (iVar4 < 1) {
                  uVar9 = 0;
                }
                else {
LAB_1001f081:
                  uVar9 = 1;
                }
LAB_1001f085:
                FUN_100b7990(uVar9);
              }
              iVar1 = *(int *)(iVar1 + 0x4c);
              if (iVar1 != param_1[uVar6 + 0x13ed]) {
                param_1[uVar6 + 0x13ed] = iVar1;
              }
              FUN_100b6e70();
              FUN_100b7220();
            }
            else {
              FUN_1001ecf0(uVar7);
            }
          }
        }
        else {
          FUN_1001e540(uVar7);
        }
      }
      uVar7 = uVar7 + 1;
      uVar6 = uVar7 & 0xffff;
    } while ((int)uVar6 <= *param_1);
  }
  return;
}


/* END FUNCTION 0x1001ee80 */
