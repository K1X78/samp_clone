/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004aa206
 * Name: __input
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x004aaf44) */

int __cdecl __input(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_ECX;
  FILE *extraout_ECX_00;
  FILE *extraout_ECX_01;
  FILE *pFVar9;
  FILE *extraout_ECX_02;
  FILE *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  uint extraout_ECX_05;
  byte bVar10;
  byte bVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  wchar_t *pwVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 *local_1e0;
  uint local_1d8;
  wchar_t local_1d0 [2];
  int local_1cc;
  byte local_1c8;
  undefined1 local_1c7;
  uint local_1c4;
  undefined1 *local_1c0;
  int local_1bc;
  FILE *local_1b8;
  wchar_t *local_1b4;
  undefined8 local_1b0;
  byte local_1a5;
  int local_1a4;
  int local_1a0;
  byte local_19c;
  char local_19b;
  char local_19a;
  char local_199;
  uint local_198;
  char local_192;
  char local_191;
  int local_190;
  char local_189;
  int local_188;
  char local_181;
  char local_180;
  char local_17f [351];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c4b60;
  uStack_c = 0x4aa215;
  local_20 = DAT_004ec7b4;
  local_1c0 = (undefined1 *)0x0;
  local_1b4 = (wchar_t *)0x0;
  local_198 = 0;
  local_199 = '\0';
  local_188 = 0;
  local_1bc = 0;
LAB_004aa249:
  while (*param_2 != 0) {
    uVar4 = (uint)*param_2;
    iVar5 = _isspace(uVar4);
    if (iVar5 == 0) {
      if (*param_2 != 0x25) {
        local_188 = local_188 + 1;
        uVar4 = __inc(uVar4,param_1);
        local_198 = uVar4;
        if (*param_2 != uVar4) goto LAB_004aaf02;
        pbVar17 = param_2 + 1;
        if ((PTR_DAT_004ec850[(uVar4 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar6 = __inc(PTR_DAT_004ec850,param_1);
          if (param_2[1] != uVar6) {
            if (uVar6 != 0xffffffff) {
              __ungetc_lk(uVar6,param_1);
            }
            goto LAB_004aaf02;
          }
          local_188 = local_188 + -1;
          pbVar17 = param_2 + 2;
        }
        goto LAB_004aaf1c;
      }
      iVar5 = 0;
      local_1a4 = 0;
      local_19c = 0;
      local_1a0 = 0;
      local_1b8 = (FILE *)0x0;
      local_190 = 0;
      local_1a5 = 0;
      local_19b = '\0';
      local_192 = '\0';
      local_181 = '\0';
      local_19a = '\0';
      local_189 = '\0';
      local_191 = '\x01';
      local_1cc = 0;
      pbVar17 = param_2;
      do {
        pbVar13 = pbVar17 + 1;
        uVar6 = (uint)*pbVar13;
        uVar4 = uVar6;
        iVar7 = _isdigit(uVar6);
        param_2 = pbVar13;
        if (iVar7 == 0) {
          if (uVar6 < 0x4f) {
            if (uVar6 != 0x4e) {
              if (uVar6 == 0x2a) {
                local_192 = local_192 + '\x01';
              }
              else if (uVar6 != 0x46) {
                if (uVar6 == 0x49) {
                  bVar11 = pbVar17[2];
                  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar11);
                  if ((bVar11 == 0x36) && (pbVar17[3] == 0x34)) {
                    local_1cc = local_1cc + 1;
                    local_1b0 = 0;
                    param_2 = pbVar17 + 3;
                  }
                  else if (((bVar11 != 0x33) || (param_2 = pbVar17 + 3, *param_2 != 0x32)) &&
                          ((((param_2 = pbVar13, bVar11 != 100 && (bVar11 != 0x69)) &&
                            (bVar11 != 0x6f)) && ((bVar11 != 0x78 && (bVar11 != 0x58))))))
                  goto LAB_004aa3d0;
                }
                else if (uVar6 == 0x4c) {
                  local_191 = local_191 + '\x01';
                }
                else {
LAB_004aa3d0:
                  local_181 = local_181 + '\x01';
                  param_2 = pbVar13;
                }
              }
            }
          }
          else if (uVar6 == 0x68) {
            local_191 = local_191 + -1;
            local_189 = local_189 + -1;
          }
          else {
            if (uVar6 == 0x6c) {
              local_191 = local_191 + '\x01';
            }
            else if (uVar6 != 0x77) goto LAB_004aa3d0;
            local_189 = local_189 + '\x01';
          }
        }
        else {
          local_1b8 = (FILE *)((int)&local_1b8->_ptr + 1);
          iVar5 = (uVar6 - 0x30) + iVar5 * 10;
        }
        pbVar17 = param_2;
      } while (local_181 == '\0');
      if (local_192 == '\0') {
        local_1e0 = param_3;
        local_1b4 = (wchar_t *)*param_3;
        param_3 = param_3 + 1;
      }
      pwVar12 = local_1b4;
      local_181 = '\0';
      if ((local_189 == '\0') && ((*param_2 == 0x53 || (local_189 = -1, *param_2 == 0x43)))) {
        local_189 = '\x01';
      }
      uVar6 = *param_2 | 0x20;
      local_1c4 = uVar6;
      uVar8 = local_198;
      local_190 = iVar5;
      if (uVar6 != 0x6e) {
        if ((uVar6 == 99) || (uVar6 == 0x7b)) {
          local_188 = local_188 + 1;
          uVar8 = __inc(uVar4,param_1);
        }
        else {
          do {
            local_188 = local_188 + 1;
            uVar8 = __inc(uVar4,param_1);
            uVar4 = uVar8;
            iVar5 = _isspace(uVar8);
          } while (iVar5 != 0);
        }
      }
      local_198 = uVar8;
      pFVar9 = local_1b8;
      uVar4 = local_198;
      if ((local_1b8 == (FILE *)0x0) || (local_190 != 0)) {
        if (uVar6 < 0x70) {
          if (uVar6 == 0x6f) {
LAB_004aab9a:
            if (local_198 == 0x2d) {
              local_19b = '\x01';
            }
            else if (local_198 != 0x2b) goto LAB_004aabdd;
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = __inc(local_1b8,param_1);
            }
            goto LAB_004aabdd;
          }
          if (uVar6 == 99) {
            if (local_1b8 == (FILE *)0x0) {
              local_1b8 = (FILE *)0x1;
              local_190 = local_190 + 1;
            }
LAB_004aa760:
            if ('\0' < local_189) {
              local_19a = '\x01';
            }
            goto LAB_004aa92a;
          }
          if (uVar6 == 100) goto LAB_004aab9a;
          if (uVar6 < 0x65) {
LAB_004aa79f:
            if (*param_2 != local_198) goto LAB_004aaf02;
            local_199 = local_199 + -1;
            if (local_192 == '\0') {
              param_3 = local_1e0;
            }
            goto LAB_004aae9a;
          }
          if (0x67 < uVar6) {
            if (uVar6 == 0x69) {
              uVar6 = 100;
              goto LAB_004aa527;
            }
            if (uVar6 != 0x6e) goto LAB_004aa79f;
            iVar5 = local_188;
            if (local_192 != '\0') goto LAB_004aae9a;
            goto LAB_004aae6e;
          }
          pcVar14 = &local_180;
          if (local_198 == 0x2d) {
            local_180 = '-';
            pcVar14 = local_17f;
LAB_004aa566:
            local_190 = local_190 + -1;
            local_188 = local_188 + 1;
            local_198 = __inc(local_1b8,param_1);
          }
          else if (local_198 == 0x2b) goto LAB_004aa566;
          if ((local_1b8 == (FILE *)0x0) || (0x15d < local_190)) {
            local_190 = 0x15d;
          }
          while( true ) {
            uVar4 = local_198;
            uVar6 = local_198;
            iVar5 = _isdigit(local_198);
            if ((iVar5 == 0) ||
               (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18)) break;
            local_1a0 = local_1a0 + 1;
            *pcVar14 = (char)uVar4;
            pcVar14 = pcVar14 + 1;
            local_188 = local_188 + 1;
            local_198 = __inc(uVar6,param_1);
          }
          if ((DAT_004eca74 == (char)uVar4) &&
             (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18)) {
            local_188 = local_188 + 1;
            uVar4 = __inc(uVar6,param_1);
            *pcVar14 = DAT_004eca74;
            while( true ) {
              pcVar14 = pcVar14 + 1;
              uVar6 = uVar4;
              local_198 = uVar4;
              iVar5 = _isdigit(uVar4);
              if ((iVar5 == 0) ||
                 (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18))
              break;
              local_1a0 = local_1a0 + 1;
              *pcVar14 = (char)uVar4;
              local_188 = local_188 + 1;
              uVar4 = __inc(uVar6,param_1);
            }
          }
          pcVar15 = pcVar14;
          if ((local_1a0 != 0) &&
             (((uVar4 == 0x65 || (uVar4 == 0x45)) &&
              (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18)))) {
            *pcVar14 = 'e';
            pcVar15 = pcVar14 + 1;
            local_188 = local_188 + 1;
            local_198 = __inc(uVar6,param_1);
            if (local_198 == 0x2d) {
              *pcVar15 = '-';
              pcVar15 = pcVar14 + 2;
LAB_004aa6a0:
              bVar18 = local_190 != 0;
              uVar6 = extraout_ECX;
              local_190 = local_190 + -1;
              if (bVar18) goto LAB_004aa6d1;
              local_190 = 0;
            }
            else if (local_198 == 0x2b) goto LAB_004aa6a0;
            while ((uVar4 = local_198, uVar6 = local_198, iVar5 = _isdigit(local_198), iVar5 != 0 &&
                   (iVar5 = local_190 + -1, bVar18 = local_190 != 0, local_190 = iVar5, bVar18))) {
              local_1a0 = local_1a0 + 1;
              *pcVar15 = (char)uVar4;
              pcVar15 = pcVar15 + 1;
LAB_004aa6d1:
              local_188 = local_188 + 1;
              local_198 = __inc(uVar6,param_1);
            }
          }
          local_188 = local_188 + -1;
          if (uVar4 != 0xffffffff) {
            __ungetc_lk(uVar4,param_1);
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              *pcVar15 = '\0';
              (*(code *)PTR_FUN_004ec650)(local_191 + -1,local_1b4,&local_180);
            }
            goto LAB_004aae9a;
          }
        }
        else {
          if (uVar6 == 0x70) {
            local_191 = '\x01';
            goto LAB_004aab9a;
          }
          if (uVar6 == 0x73) goto LAB_004aa760;
          if (uVar6 == 0x75) goto LAB_004aab9a;
          if (uVar6 != 0x78) {
            if (uVar6 == 0x7b) {
              if ('\0' < local_189) {
                local_19a = '\x01';
              }
              pbVar13 = param_2 + 1;
              pbVar17 = pbVar13;
              if (*pbVar13 == 0x5e) {
                pbVar17 = param_2 + 2;
                local_1a5 = 0xff;
              }
              if (local_1c0 == (undefined1 *)0x0) {
                local_1c = &stack0xfffffe14;
                local_1c0 = &stack0xfffffe14;
                local_8 = (undefined *)0xffffffff;
              }
              puVar3 = local_1c0;
              _memset(local_1c0,0,0x20);
              pFVar9 = extraout_ECX_00;
              bVar11 = local_19c;
              if ((local_1c4 == 0x7b) && (*pbVar17 == 0x5d)) {
                puVar3[0xb] = 0x20;
                pbVar17 = pbVar17 + 1;
                bVar11 = 0x5d;
              }
LAB_004aa904:
              do {
                bVar10 = *pbVar17;
                if (bVar10 == 0x5d) goto code_r0x004aa912;
                if ((bVar10 == 0x2d) && (bVar11 != 0)) {
                  bVar2 = pbVar17[1];
                  pFVar9 = (FILE *)CONCAT31((int3)((uint)pFVar9 >> 8),bVar2);
                  if (bVar2 != 0x5d) {
                    bVar10 = bVar2;
                    if (bVar11 < bVar2) {
                      bVar10 = bVar11;
                      bVar11 = bVar2;
                    }
                    if (bVar10 <= bVar11) {
                      uVar4 = (uint)bVar10;
                      local_1d8 = (uint)(byte)((bVar11 - bVar10) + 1);
                      do {
                        pFVar9 = (FILE *)(uVar4 & 7);
                        puVar3[uVar4 >> 3] = puVar3[uVar4 >> 3] | '\x01' << (sbyte)pFVar9;
                        uVar4 = uVar4 + 1;
                        local_1d8 = local_1d8 - 1;
                      } while (local_1d8 != 0);
                    }
                    pbVar17 = pbVar17 + 2;
                    bVar11 = 0;
                    goto LAB_004aa904;
                  }
                }
                local_19c = bVar10;
                pFVar9 = (FILE *)(bVar10 & 7);
                puVar3[bVar10 >> 3] = puVar3[bVar10 >> 3] | '\x01' << (sbyte)pFVar9;
                pbVar17 = pbVar17 + 1;
                bVar11 = local_19c;
              } while( true );
            }
            goto LAB_004aa79f;
          }
LAB_004aa527:
          if (local_198 == 0x2d) {
            local_19b = '\x01';
LAB_004aaa4d:
            local_190 = local_190 + -1;
            if ((local_190 == 0) && (local_1b8 != (FILE *)0x0)) {
              local_181 = '\x01';
            }
            else {
              local_188 = local_188 + 1;
              local_198 = __inc(local_1b8,param_1);
              pFVar9 = extraout_ECX_03;
            }
          }
          else if (local_198 == 0x2b) goto LAB_004aaa4d;
          if (local_198 == 0x30) {
            local_188 = local_188 + 1;
            local_198 = __inc(pFVar9,param_1);
            if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
              local_188 = local_188 + 1;
              local_198 = __inc(extraout_ECX_04,param_1);
              if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -2, local_190 < 1)) {
                local_181 = local_181 + '\x01';
              }
              uVar6 = 0x78;
            }
            else {
              local_1a0 = 1;
              if (uVar6 == 0x78) {
                local_188 = local_188 + -1;
                if (local_198 != 0xffffffff) {
                  __ungetc_lk(local_198,param_1);
                }
                local_198 = 0x30;
              }
              else {
                if ((local_1b8 != (FILE *)0x0) && (local_190 = local_190 + -1, local_190 == 0)) {
                  local_181 = local_181 + '\x01';
                }
                uVar6 = 0x6f;
              }
            }
          }
LAB_004aabdd:
          uVar4 = local_198;
          if (local_1cc == 0) {
            while (local_181 == '\0') {
              uVar8 = uVar4;
              if ((uVar6 == 0x78) || (uVar6 == 0x70)) {
                iVar5 = _isxdigit(uVar4);
                if (iVar5 != 0) {
                  local_1a4 = local_1a4 << 4;
                  uVar8 = uVar4;
                  iVar5 = _isdigit(uVar4);
                  if (iVar5 == 0) {
                    uVar4 = (uVar4 & 0xffffffdf) - 7;
                  }
                  goto LAB_004aadba;
                }
LAB_004aadb4:
                local_181 = local_181 + '\x01';
              }
              else {
                iVar5 = _isdigit(uVar4);
                if (iVar5 == 0) goto LAB_004aadb4;
                if (uVar6 == 0x6f) {
                  if (0x37 < (int)uVar4) goto LAB_004aadb4;
                  local_1a4 = local_1a4 << 3;
                }
                else {
                  local_1a4 = local_1a4 * 10;
                }
              }
LAB_004aadba:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                local_1a4 = local_1a4 + -0x30 + uVar4;
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  uVar4 = __inc(uVar8,param_1);
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (uVar4 != 0xffffffff) {
                  __ungetc_lk(uVar4,param_1);
                }
              }
            }
            local_198 = uVar4;
            if (local_19b != '\0') {
              local_1a4 = -local_1a4;
            }
          }
          else {
            while (local_181 == '\0') {
              uVar8 = uVar4;
              if ((uVar6 == 0x78) || (uVar6 == 0x70)) {
                iVar5 = _isxdigit(uVar4);
                if (iVar5 != 0) {
                  local_1b0 = CONCAT44(local_1b0._4_4_ << 4 | (uint)local_1b0 >> 0x1c,
                                       (uint)local_1b0 << 4);
                  uVar8 = uVar4;
                  iVar5 = _isdigit(uVar4);
                  if (iVar5 == 0) {
                    uVar4 = (uVar4 & 0xffffffdf) - 7;
                  }
                  goto LAB_004aaca5;
                }
LAB_004aac9f:
                local_181 = local_181 + '\x01';
              }
              else {
                iVar5 = _isdigit(uVar4);
                if (iVar5 == 0) goto LAB_004aac9f;
                if (uVar6 == 0x6f) {
                  if (0x37 < (int)uVar4) goto LAB_004aac9f;
                  uVar8 = local_1b0._4_4_ << 3 | (uint)local_1b0 >> 0x1d;
                  local_1b0 = CONCAT44(uVar8,(uint)local_1b0 << 3);
                }
                else {
                  local_1b0 = __allmul((uint)local_1b0,local_1b0._4_4_,10,0);
                  uVar8 = extraout_ECX_05;
                }
              }
LAB_004aaca5:
              if (local_181 == '\0') {
                local_1a0 = local_1a0 + 1;
                uVar1 = uVar4 - 0x30;
                local_1b0 = CONCAT44(local_1b0._4_4_ + ((int)uVar1 >> 0x1f) +
                                     (uint)CARRY4((uint)local_1b0,uVar1),(uint)local_1b0 + uVar1);
                if ((local_1b8 == (FILE *)0x0) || (local_190 = local_190 + -1, local_190 != 0)) {
                  local_188 = local_188 + 1;
                  uVar4 = __inc(uVar8,param_1);
                }
                else {
                  local_181 = '\x01';
                }
              }
              else {
                local_188 = local_188 + -1;
                if (uVar4 != 0xffffffff) {
                  __ungetc_lk(uVar4,param_1);
                }
              }
            }
            local_198 = uVar4;
            if (local_19b != '\0') {
              local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20);
              local_1b0 = CONCAT44(-(local_1b0._4_4_ + (uint)((uint)local_1b0 != 0)),
                                   -(uint)local_1b0);
            }
          }
          if (uVar6 == 0x46) {
            local_1a0 = 0;
          }
          if (local_1a0 != 0) {
            if (local_192 == '\0') {
              local_1bc = local_1bc + 1;
              iVar5 = local_1a4;
              pwVar12 = local_1b4;
LAB_004aae6e:
              if (local_1cc == 0) {
                if (local_191 == '\0') {
                  *pwVar12 = (wchar_t)iVar5;
                }
                else {
                  *(int *)pwVar12 = iVar5;
                }
              }
              else {
                *(uint *)pwVar12 = (uint)local_1b0;
                *(int *)(pwVar12 + 2) = local_1b0._4_4_;
              }
            }
            goto LAB_004aae9a;
          }
        }
      }
      else {
LAB_004aaf02:
        if (uVar4 != 0xffffffff) {
          __ungetc_lk(local_198,param_1);
        }
      }
      break;
    }
    local_188 = local_188 + -1;
    do {
      local_188 = local_188 + 1;
      uVar6 = __inc(uVar4,param_1);
      uVar4 = uVar6;
      iVar5 = _isspace(uVar6);
    } while (iVar5 != 0);
    if (uVar6 != 0xffffffff) {
      __ungetc_lk(uVar6,param_1);
    }
    do {
      param_2 = param_2 + 1;
      iVar5 = _isspace((uint)*param_2);
    } while (iVar5 != 0);
  }
  goto LAB_004aaf3b;
code_r0x004aa912:
  pwVar12 = local_1b4;
  uVar6 = local_1c4;
  param_2 = pbVar13;
  if (local_1c4 == 0x7b) {
    param_2 = pbVar17;
  }
LAB_004aa92a:
  local_188 = local_188 + -1;
  pwVar16 = pwVar12;
  if (local_198 != 0xffffffff) {
    pFVar9 = param_1;
    __ungetc_lk(local_198,param_1);
  }
  while( true ) {
    if ((local_1b8 != (FILE *)0x0) &&
       (iVar5 = local_190 + -1, bVar18 = local_190 == 0, local_190 = iVar5, bVar18))
    goto LAB_004aab4b;
    local_188 = local_188 + 1;
    local_198 = __inc(pFVar9,param_1);
    if ((local_198 == 0xffffffff) ||
       ((bVar11 = (byte)local_198, pFVar9 = extraout_ECX_01, uVar6 != 99 &&
        (((uVar6 != 0x73 ||
          (((8 < (int)local_198 && ((int)local_198 < 0xe)) || (local_198 == 0x20)))) &&
         ((uVar6 != 0x7b ||
          (pFVar9 = (FILE *)(int)(char)(local_1c0[(int)local_198 >> 3] ^ local_1a5),
          uVar6 = local_1c4, ((uint)pFVar9 & 1 << (bVar11 & 7)) == 0)))))))) break;
    if (local_192 == '\0') {
      if (local_19a == '\0') {
        *(byte *)pwVar12 = bVar11;
        pwVar12 = (wchar_t *)((int)pwVar12 + 1);
        local_1b4 = pwVar12;
      }
      else {
        local_1c8 = bVar11;
        if ((PTR_DAT_004ec850[(local_198 & 0xff) * 2 + 1] & 0x80) != 0) {
          local_188 = local_188 + 1;
          uVar4 = __inc(PTR_DAT_004ec850,param_1);
          local_1c7 = (undefined1)uVar4;
        }
        _mbtowc(local_1d0,(char *)&local_1c8,DAT_004eca70);
        *pwVar12 = local_1d0[0];
        pwVar12 = pwVar12 + 1;
        pFVar9 = extraout_ECX_02;
        local_1b4 = pwVar12;
      }
    }
    else {
      pwVar16 = (wchar_t *)((int)pwVar16 + 1);
    }
  }
  local_188 = local_188 + -1;
  if (local_198 != 0xffffffff) {
    __ungetc_lk(local_198,param_1);
  }
LAB_004aab4b:
  if (pwVar16 == pwVar12) {
LAB_004aaf3b:
    if ((local_198 == 0xffffffff) && ((local_1bc == 0 && (local_199 == '\0')))) {
      local_1bc = -1;
    }
    return local_1bc;
  }
  if ((local_192 == '\0') && (local_1bc = local_1bc + 1, local_1c4 != 99)) {
    if (local_19a == '\0') {
      *(byte *)local_1b4 = 0;
    }
    else {
      *local_1b4 = L'\0';
    }
  }
LAB_004aae9a:
  local_199 = local_199 + '\x01';
  pbVar17 = param_2 + 1;
LAB_004aaf1c:
  param_2 = pbVar17;
  if ((local_198 == 0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e)))) goto LAB_004aaf3b;
  goto LAB_004aa249;
}


/* END FUNCTION 0x004aa206 */
