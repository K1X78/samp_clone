/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a3fce
 * Name: __output
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __cdecl __output(FILE *param_1,byte *param_2,wchar_t *param_3)

{
  byte bVar1;
  short *psVar2;
  byte *pbVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  uint uVar8;
  byte bVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 local_258;
  undefined4 local_254;
  size_t local_24c;
  int local_248;
  undefined4 local_244;
  int local_240;
  int local_23c;
  wchar_t *local_238;
  int local_234;
  int local_230;
  int local_22c;
  undefined1 local_228;
  char local_227;
  int local_224;
  size_t local_220;
  wchar_t *local_21c;
  int local_218;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  local_220 = 0;
  local_224 = 0;
  local_238 = (wchar_t *)0x0;
  bVar9 = *param_2;
  local_248 = 0;
  pbVar3 = param_2;
  pwVar11 = param_3;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar3 + 1, local_224 < 0)) {
      return local_224;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)(char)(&DAT_004c07c0)[(char)bVar9] & 0xf;
    }
    local_248 = (int)(char)(&DAT_004c07e0)[uVar5 * 8 + local_248] >> 4;
    param_3 = pwVar11;
    switch(local_248) {
    case 0:
switchD_004a4053_caseD_0:
      local_234 = 0;
      if ((PTR_DAT_004ec850[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        write_char(param_1);
        param_2 = pbVar3 + 2;
      }
      write_char(param_1);
      break;
    case 1:
      local_218 = -1;
      local_244 = 0;
      local_23c = 0;
      local_230 = 0;
      local_22c = 0;
      local_214 = 0;
      local_234 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_214 = local_214 | 2;
      }
      else if (bVar9 == 0x23) {
        local_214 = local_214 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_214 = local_214 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_214 = local_214 | 4;
      }
      else if (bVar9 == 0x30) {
        local_214 = local_214 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_230 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_230 < 0) {
          local_214 = local_214 | 4;
          local_230 = -local_230;
        }
      }
      else {
        local_230 = (char)bVar9 + -0x30 + local_230 * 10;
      }
      break;
    case 4:
      local_218 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_218 = *(int *)pwVar11;
        param_3 = pwVar11 + 2;
        if (local_218 < 0) {
          local_218 = -1;
        }
      }
      else {
        local_218 = (char)bVar9 + -0x30 + local_218 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar3[2] == 0x34)) {
          param_2 = pbVar3 + 3;
          local_214 = local_214 | 0x8000;
        }
        else if ((bVar1 == 0x33) && (pbVar3[2] == 0x32)) {
          param_2 = pbVar3 + 3;
          local_214 = local_214 & 0xffff7fff;
        }
        else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                 ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
          local_248 = 0;
          goto switchD_004a4053_caseD_0;
        }
      }
      else if (bVar9 == 0x68) {
        local_214 = local_214 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_214 = local_214 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_214 = local_214 | 0x800;
      }
      break;
    case 7:
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 != 0x58) {
              if (bVar9 == 0x43) {
                if ((local_214 & 0x830) == 0) {
                  local_214 = local_214 | 0x800;
                }
                goto LAB_004a42f3;
              }
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_004a4276;
                }
                goto LAB_004a466b;
              }
              local_244 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_004a42c7;
            }
LAB_004a4511:
            local_240 = 7;
LAB_004a4514:
            local_220 = 0x10;
            if ((local_214 & 0x80) != 0) {
              local_227 = (char)local_240 + 'Q';
              local_228 = 0x30;
              local_22c = 2;
            }
            goto LAB_004a4344;
          }
          if (bVar9 == 0x5a) {
            param_3 = pwVar11 + 2;
            psVar2 = *(short **)pwVar11;
            pwVar11 = (wchar_t *)PTR_s__null__004ec32c;
            pwVar4 = (wchar_t *)PTR_s__null__004ec32c;
            if ((psVar2 == (short *)0x0) ||
               (local_21c = *(wchar_t **)(psVar2 + 2), pwVar4 = (wchar_t *)PTR_s__null__004ec32c,
               local_21c == (wchar_t *)0x0)) goto LAB_004a4485;
            local_220 = (size_t)*psVar2;
            if ((local_214 & 0x800) == 0) {
              local_234 = 0;
            }
            else {
              local_220 = (int)local_220 / 2;
              local_234 = 1;
            }
          }
          else if (bVar9 == 99) {
LAB_004a42f3:
            if ((local_214 & 0x810) == 0) {
              local_210[0]._0_1_ = (char)*pwVar11;
              local_220 = 1;
            }
            else {
              local_220 = _wctomb((char *)local_210,*pwVar11);
              if ((int)local_220 < 0) {
                local_23c = 1;
              }
            }
            param_3 = pwVar11 + 2;
            local_21c = local_210;
          }
          else if (bVar9 == 100) goto LAB_004a4339;
        }
        else {
LAB_004a42c7:
          local_214 = local_214 | 0x40;
          pwVar10 = local_210;
          pwVar4 = local_210;
          if (local_218 < 0) {
            local_218 = 6;
          }
          else if (local_218 == 0) {
            if (bVar9 == 0x67) {
              local_218 = 1;
            }
          }
          else {
            if (0x200 < local_218) {
              local_218 = 0x200;
            }
            if ((0xa3 < local_218) &&
               (local_21c = local_210, local_238 = _malloc(local_218 + 0x15d), pwVar10 = local_238,
               pwVar4 = local_238, local_238 == (wchar_t *)0x0)) {
              local_218 = 0xa3;
              pwVar10 = local_210;
              pwVar4 = local_21c;
            }
          }
          local_21c = pwVar4;
          local_258 = *(undefined4 *)pwVar11;
          param_3 = pwVar11 + 4;
          local_254 = *(undefined4 *)(pwVar11 + 2);
          (*(code *)PTR_FUN_004ec648)(&local_258,pwVar10,(int)(char)bVar9,local_218,local_244);
          uVar5 = local_214 & 0x80;
          if ((uVar5 != 0) && (local_218 == 0)) {
            (*(code *)PTR_FUN_004ec654)(pwVar10);
          }
          if ((bVar9 == 0x67) && (uVar5 == 0)) {
            (*(code *)PTR_FUN_004ec64c)(pwVar10);
          }
          pwVar11 = pwVar10;
          pwVar4 = local_21c;
          if ((char)*pwVar10 == '-') {
            local_214 = local_214 | 0x100;
            pwVar11 = (wchar_t *)((int)pwVar10 + 1);
            pwVar4 = (wchar_t *)((int)pwVar10 + 1);
          }
LAB_004a4485:
          local_21c = pwVar4;
          local_220 = _strlen((char *)pwVar11);
        }
LAB_004a466b:
        uVar5 = local_214;
        if (local_23c == 0) {
          if ((local_214 & 0x40) != 0) {
            if ((local_214 & 0x100) == 0) {
              if ((local_214 & 1) == 0) {
                if ((local_214 & 2) == 0) goto LAB_004a46a3;
                local_228 = 0x20;
              }
              else {
                local_228 = 0x2b;
              }
            }
            else {
              local_228 = 0x2d;
            }
            local_22c = 1;
          }
LAB_004a46a3:
          iVar7 = (local_230 - local_22c) - local_220;
          if ((local_214 & 0xc) == 0) {
            write_multi_char(0x20,iVar7,param_1);
          }
          write_string(local_22c);
          if (((uVar5 & 8) != 0) && ((uVar5 & 4) == 0)) {
            write_multi_char(0x30,iVar7,param_1);
          }
          if ((local_234 == 0) || ((int)local_220 < 1)) {
            write_string(local_220);
          }
          else {
            local_24c = local_220;
            pwVar11 = local_21c;
            do {
              local_24c = local_24c - 1;
              iVar6 = _wctomb((char *)((int)&local_11 + 1),*pwVar11);
              pwVar11 = pwVar11 + 1;
              if (iVar6 < 1) break;
              write_string(iVar6);
            } while (local_24c != 0);
          }
          if ((local_214 & 4) != 0) {
            write_multi_char(0x20,iVar7,param_1);
          }
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_004a4339:
          local_214 = local_214 | 0x40;
LAB_004a433d:
          local_220 = 10;
LAB_004a4344:
          if ((local_214 & 0x8000) == 0) {
            param_3 = pwVar11 + 2;
            if ((local_214 & 0x20) == 0) {
              uVar5 = *(uint *)pwVar11;
              if ((local_214 & 0x40) == 0) {
                uVar8 = 0;
                goto LAB_004a45b5;
              }
            }
            else if ((local_214 & 0x40) == 0) {
              uVar5 = (uint)(ushort)*pwVar11;
            }
            else {
              uVar5 = (uint)*pwVar11;
            }
            uVar8 = (int)uVar5 >> 0x1f;
          }
          else {
            uVar5 = *(uint *)pwVar11;
            uVar8 = *(uint *)(pwVar11 + 2);
            param_3 = pwVar11 + 4;
          }
LAB_004a45b5:
          if ((((local_214 & 0x40) != 0) && ((int)uVar8 < 1)) && ((int)uVar8 < 0)) {
            bVar12 = uVar5 != 0;
            uVar5 = -uVar5;
            uVar8 = -(uVar8 + bVar12);
            local_214 = local_214 | 0x100;
          }
          uVar13 = CONCAT44(uVar8,uVar5);
          if ((local_214 & 0x8000) == 0) {
            uVar8 = 0;
          }
          if (local_218 < 0) {
            local_218 = 1;
          }
          else {
            local_214 = local_214 & 0xfffffff7;
            if (0x200 < local_218) {
              local_218 = 0x200;
            }
          }
          if (uVar5 == 0 && uVar8 == 0) {
            local_22c = 0;
          }
          pwVar11 = &local_11;
          while( true ) {
            uVar5 = (uint)uVar13;
            iVar7 = local_218 + -1;
            if ((local_218 < 1) && (uVar5 == 0 && uVar8 == 0)) break;
            local_218 = iVar7;
            uVar13 = __aulldvrm(uVar5,uVar8,local_220,(int)local_220 >> 0x1f);
            uVar8 = (uint)((ulonglong)uVar13 >> 0x20);
            iVar7 = extraout_ECX + 0x30;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_240;
            }
            *(char *)pwVar11 = (char)iVar7;
            pwVar11 = (wchar_t *)((int)pwVar11 + -1);
            local_24c = uVar5;
          }
          local_220 = (int)&local_11 + -(int)pwVar11;
          local_21c = (wchar_t *)((int)pwVar11 + 1);
          local_218 = iVar7;
          if (((local_214 & 0x200) != 0) && ((*(char *)local_21c != '0' || (local_220 == 0)))) {
            *(char *)pwVar11 = '0';
            local_220 = (int)&local_11 + -(int)pwVar11 + 1;
            local_21c = pwVar11;
          }
          goto LAB_004a466b;
        }
        if (bVar9 != 0x6e) {
          if (bVar9 == 0x6f) {
            local_220 = 8;
            if ((local_214 & 0x80) != 0) {
              local_214 = local_214 | 0x200;
            }
            goto LAB_004a4344;
          }
          if (bVar9 == 0x70) {
            local_218 = 8;
            goto LAB_004a4511;
          }
          if (bVar9 == 0x73) {
LAB_004a4276:
            iVar7 = local_218;
            if (local_218 == -1) {
              iVar7 = 0x7fffffff;
            }
            param_3 = pwVar11 + 2;
            local_21c = *(wchar_t **)pwVar11;
            if ((local_214 & 0x810) == 0) {
              pwVar11 = local_21c;
              if (local_21c == (wchar_t *)0x0) {
                pwVar11 = (wchar_t *)PTR_s__null__004ec32c;
                local_21c = (wchar_t *)PTR_s__null__004ec32c;
              }
              for (; (iVar7 != 0 && (iVar7 = iVar7 + -1, (char)*pwVar11 != '\0'));
                  pwVar11 = (wchar_t *)((int)pwVar11 + 1)) {
              }
              local_220 = (int)pwVar11 - (int)local_21c;
            }
            else {
              if (local_21c == (wchar_t *)0x0) {
                local_21c = (wchar_t *)PTR_DAT_004ec330;
              }
              local_234 = 1;
              for (pwVar11 = local_21c; (iVar7 != 0 && (iVar7 = iVar7 + -1, *pwVar11 != L'\0'));
                  pwVar11 = pwVar11 + 1) {
              }
              local_220 = (int)pwVar11 - (int)local_21c >> 1;
            }
            goto LAB_004a466b;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_004a466b;
            local_240 = 0x27;
            goto LAB_004a4514;
          }
          goto LAB_004a433d;
        }
        param_3 = pwVar11 + 2;
        if ((local_214 & 0x20) == 0) {
          **(int **)pwVar11 = local_224;
        }
        else {
          *(undefined2 *)*(int **)pwVar11 = (undefined2)local_224;
        }
        local_23c = 1;
      }
      if (local_238 != (wchar_t *)0x0) {
        _free(local_238);
        local_238 = (wchar_t *)0x0;
      }
    }
    bVar9 = *param_2;
    pbVar3 = param_2;
    pwVar11 = param_3;
  } while( true );
}


/* END FUNCTION 0x004a3fce */
