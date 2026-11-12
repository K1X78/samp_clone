/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cc090
 * Name: FUN_100cc090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cc090(int param_1,int *param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char *_Str;
  char *in_EAX;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *_Str_00;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  cVar3 = *in_EAX;
  iVar10 = 0;
  local_10 = 0;
  local_c = 0;
  while (cVar3 != '\0') {
    local_14 = in_EAX + 1;
    if (*in_EAX == '%') {
      if (*local_14 == '%') {
        local_14 = in_EAX + 2;
      }
      else {
        uVar8 = 0;
        iVar11 = local_10 + 1;
        local_10 = iVar11;
        local_4 = FUN_100cbf90(&local_14);
        if (local_4 == 0) {
          local_4 = iVar11;
        }
        if (iVar10 < local_4) {
          local_c = local_4;
        }
        iVar11 = 0;
        local_8 = 0;
        iVar4 = FUN_100cbfe0();
        iVar10 = local_c;
        while (local_c = iVar10, iVar4 != 0) {
          iVar10 = _strncmp(local_14,"I32",3);
          if (iVar10 == 0) {
            uVar8 = uVar8 | 0x20;
            _Str_00 = local_14 + 3;
          }
          else {
            iVar10 = _strncmp(local_14,"I64",3);
            _Str = local_14;
            if (iVar10 == 0) {
              uVar8 = uVar8 | 0x40;
              _Str_00 = local_14 + 3;
            }
            else {
              _Str_00 = local_14 + 1;
              switch(*local_14) {
              case ' ':
                uVar8 = uVar8 | 1;
                break;
              case '#':
                uVar8 = uVar8 | 8;
                break;
              case '*':
                uVar8 = uVar8 | 0x4000;
                local_10 = local_10 + 1;
                local_14 = _Str_00;
                iVar11 = FUN_100cbf90(&local_14);
                if (iVar11 == 0) {
                  iVar11 = local_10;
                }
                _Str_00 = local_14;
                if (local_c < iVar11) {
                  local_c = iVar11;
                }
                break;
              case '+':
                uVar8 = uVar8 | 2;
                break;
              case '-':
                uVar8 = uVar8 & 0xfffffeff | 4;
                break;
              case '.':
                if (*_Str_00 == '*') {
                  uVar8 = uVar8 | 0x10000;
                  local_14 = local_14 + 2;
                  local_10 = local_10 + 1;
                  local_8 = FUN_100cbf90(&local_14);
                  if (local_8 == 0) {
                    local_8 = local_10;
                  }
                  _Str_00 = local_14;
                  if (local_c < local_8) {
                    local_c = local_8;
                  }
                }
                else {
                  uVar8 = uVar8 | 0x8000;
                  local_14 = _Str_00;
                  local_8 = _strtol(_Str_00,&local_14,10);
                  _Str_00 = local_14;
                }
                break;
              case '0':
                if ((uVar8 & 4) == 0) {
                  uVar8 = uVar8 | 0x100;
                }
              case '1':
              case '2':
              case '3':
              case '4':
              case '5':
              case '6':
              case '7':
              case '8':
              case '9':
                uVar8 = uVar8 | 0x2000;
                local_14 = _Str_00;
                iVar11 = _strtol(_Str,&local_14,10);
                _Str_00 = local_14;
                break;
              case 'L':
                uVar8 = uVar8 | 0x80;
                break;
              case 'h':
                uVar8 = uVar8 | 0x10;
                break;
              case 'l':
                if ((uVar8 & 0x20) == 0) goto switchD_100cc187_caseD_7a;
              case 'I':
              case 'O':
              case 'q':
                uVar8 = uVar8 | 0x40;
                break;
              case 'z':
switchD_100cc187_caseD_7a:
                uVar8 = uVar8 | 0x20;
              }
            }
          }
          local_14 = _Str_00;
          iVar4 = FUN_100cbfe0();
          iVar10 = local_c;
        }
        iVar4 = local_4 + -1;
        if ((iVar4 < 0) || (0x7f < iVar4)) {
          return 1;
        }
        switch(*local_14) {
        case 'E':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 7;
          uVar8 = uVar8 | 0x41000;
          break;
        default:
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 0;
          break;
        case 'G':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 7;
          uVar8 = uVar8 | 0x81000;
          break;
        case 'S':
          uVar8 = uVar8 | 8;
        case 's':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 1;
          break;
        case 'X':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          uVar8 = uVar8 | 0x1a00;
          break;
        case 'c':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          uVar8 = uVar8 | 0x20000;
          break;
        case 'd':
        case 'i':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          break;
        case 'e':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 7;
          uVar8 = uVar8 | 0x40000;
          break;
        case 'f':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 7;
          break;
        case 'g':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 7;
          uVar8 = uVar8 | 0x80000;
          break;
        case 'n':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 4;
          break;
        case 'o':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          uVar8 = uVar8 | 0x400;
          break;
        case 'p':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 2;
          break;
        case 'u':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          uVar8 = uVar8 | 0x200;
          break;
        case 'x':
          puVar5 = (undefined4 *)(param_1 + iVar4 * 0x18);
          *puVar5 = 3;
          uVar8 = uVar8 | 0xa00;
        }
        puVar5[1] = uVar8;
        puVar5[2] = iVar11;
        puVar5[3] = local_8;
        if ((uVar8 & 0x4000) != 0) {
          puVar5[2] = iVar11 + -1;
          puVar2 = (undefined4 *)(param_1 + (iVar11 + -1) * 0x18);
          *puVar2 = 9;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        if ((uVar8 & 0x10000) != 0) {
          puVar5[3] = local_8 + -1;
          puVar5 = (undefined4 *)(param_1 + (local_8 + -1) * 0x18);
          *puVar5 = 9;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
        }
        *param_2 = (int)(local_14 + 1);
        param_2 = param_2 + 1;
      }
    }
    in_EAX = local_14;
    cVar3 = *local_14;
  }
  if (0 < iVar10) {
    iVar10 = param_3 + -8;
    puVar9 = (uint *)(param_3 + -4);
    puVar7 = (uint *)(param_1 + 4);
    local_4 = local_c;
    do {
      iVar11 = iVar10;
      if ((*puVar7 & 0x4000) != 0) {
        uVar8 = puVar9[1];
        uVar6 = puVar7[1];
        puVar9 = puVar9 + 1;
        *(uint *)(param_1 + 0x10 + uVar6 * 0x18) = uVar8;
        iVar11 = iVar10 + 4;
        *(int *)(param_1 + 0x14 + uVar6 * 0x18) = (int)uVar8 >> 0x1f;
      }
      if ((*puVar7 & 0x10000) != 0) {
        uVar8 = puVar9[1];
        uVar6 = puVar7[2];
        puVar9 = puVar9 + 1;
        *(uint *)(param_1 + 0x10 + uVar6 * 0x18) = uVar8;
        iVar11 = iVar11 + 4;
        *(int *)(param_1 + 0x14 + uVar6 * 0x18) = (int)uVar8 >> 0x1f;
      }
      iVar10 = iVar11;
      switch(puVar7[-1]) {
      case 0:
      case 2:
      case 4:
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        iVar10 = iVar11 + 4;
        puVar7[3] = *puVar1;
        break;
      case 1:
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        iVar10 = iVar11 + 4;
        puVar7[3] = *puVar1;
        break;
      case 3:
        uVar8 = *puVar7;
        if ((((uVar8 & 0x40) == 0) || ((uVar8 & 0x200) == 0)) && ((uVar8 & 0x40) == 0)) {
          if (((uVar8 & 0x20) == 0) || ((uVar8 & 0x200) == 0)) {
            puVar9 = puVar9 + 1;
            iVar10 = iVar11 + 4;
            if ((uVar8 & 0x20) == 0) {
              uVar6 = *puVar9;
              if ((uVar8 & 0x200) != 0) {
                puVar7[3] = uVar6;
                puVar7[4] = 0;
                break;
              }
            }
            else {
              uVar6 = *puVar9;
            }
            puVar7[3] = uVar6;
            puVar7[4] = (int)uVar6 >> 0x1f;
          }
          else {
            puVar1 = puVar9 + 1;
            puVar9 = puVar9 + 1;
            iVar10 = iVar11 + 4;
            puVar7[3] = *puVar1;
            puVar7[4] = 0;
          }
        }
        else {
          puVar9 = puVar9 + 2;
          iVar10 = iVar11 + 8;
          puVar7[3] = *(uint *)(iVar11 + 8);
          puVar7[4] = *(uint *)(iVar11 + 0xc);
        }
        break;
      case 7:
        puVar9 = puVar9 + 2;
        iVar10 = iVar11 + 8;
        *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(iVar11 + 8);
        break;
      case 9:
        puVar7[-1] = 3;
      }
      puVar7 = puVar7 + 6;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return 0;
}


/* END FUNCTION 0x100cc090 */
