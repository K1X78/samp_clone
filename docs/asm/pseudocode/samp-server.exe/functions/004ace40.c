/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ace40
 * Name: setSBUpLow
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void setSBUpLow(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  undefined4 *puVar9;
  _locale_t _BError;
  ushort local_51c [256];
  undefined1 local_31c [256];
  undefined1 local_21c [256];
  undefined4 local_11c [64];
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  BVar2 = GetCPInfo((UINT)DAT_0051c7e4,&local_1c);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      *(char *)((int)local_11c + uVar3) = (char)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_11c[0]._0_1_ = 0x20;
    if (local_1c.LeadByte[0] != 0) {
      pBVar8 = local_1c.LeadByte + 1;
      do {
        uVar3 = (uint)local_1c.LeadByte[0];
        if (uVar3 <= *pBVar8) {
          uVar6 = (*pBVar8 - uVar3) + 1;
          puVar9 = (undefined4 *)((int)local_11c + uVar3);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_1c.LeadByte[0] = pBVar8[1];
        pBVar8 = pBVar8 + 2;
      } while (local_1c.LeadByte[0] != 0);
    }
    BVar2 = 1;
    ___crtGetStringTypeA
              ((_locale_t)0x1,(DWORD)local_11c,(LPCSTR)0x100,(int)local_51c,DAT_0051c7e4,
               (int)DAT_0051c6d0,0);
    _BError = DAT_0051c6d0;
    ___crtLCMapStringA(DAT_0051c6d0,(LPCWSTR)0x100,(DWORD)local_11c,(LPCSTR)0x100,(int)local_21c,
                       (LPSTR)0x100,(int)DAT_0051c7e4,0,BVar2);
    ___crtLCMapStringA(DAT_0051c6d0,(LPCWSTR)0x200,(DWORD)local_11c,(LPCSTR)0x100,(int)local_31c,
                       (LPSTR)0x100,(int)DAT_0051c7e4,0,(BOOL)_BError);
    uVar3 = 0;
    do {
      if ((local_51c[uVar3] & 1) == 0) {
        if ((local_51c[uVar3] & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_0051c6e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar4 = local_31c[uVar3];
          goto LAB_004acf52;
        }
        (&DAT_0051c800)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_0051c6e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar4 = local_21c[uVar3];
LAB_004acf52:
        (&DAT_0051c800)[uVar3] = uVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_0051c6e0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar5 = (char)uVar3 + -0x20;
          goto LAB_004acf95;
        }
        (&DAT_0051c800)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_0051c6e0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar5 = (char)uVar3 + ' ';
LAB_004acf95:
        (&DAT_0051c800)[uVar3] = cVar5;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


/* END FUNCTION 0x004ace40 */
