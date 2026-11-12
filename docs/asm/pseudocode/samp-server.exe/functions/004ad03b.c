/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad03b
 * Name: __setmbcp_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl __setmbcp_lk(UINT param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  BOOL BVar6;
  BYTE *pBVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  uint local_20;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_004ec7b4;
  if (param_1 != 0) {
    iVar9 = 0;
    uVar5 = 0;
    do {
      if (*(UINT *)((int)&DAT_004eca88 + uVar5) == param_1) {
        puVar12 = &DAT_0051c6e0;
        for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_20 = 0;
        *(undefined1 *)puVar12 = 0;
        pbVar10 = (byte *)(iVar9 * 0x30 + 0x4eca98);
        do {
          bVar4 = *pbVar10;
          pbVar11 = pbVar10;
          while ((bVar4 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
            uVar5 = (uint)bVar4;
            if (uVar5 <= bVar3) {
              bVar4 = (&DAT_004eca80)[local_20];
              do {
                pbVar2 = (byte *)((int)&DAT_0051c6e0 + uVar5 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar5 = uVar5 + 1;
              } while (uVar5 <= bVar3);
            }
            pbVar11 = pbVar11 + 2;
            bVar4 = *pbVar11;
          }
          local_20 = local_20 + 1;
          pbVar10 = pbVar10 + 8;
        } while (local_20 < 4);
        DAT_0051c7e4 = param_1;
        DAT_0051c6d8 = 1;
        DAT_0051c6d0 = _CPtoLCID();
        DAT_0051c7f0 = *(undefined4 *)(&DAT_004eca8c + extraout_ECX);
        DAT_0051c7f4 = *(undefined4 *)(&DAT_004eca90 + extraout_ECX);
        DAT_0051c7f8 = *(undefined4 *)(&DAT_004eca94 + extraout_ECX);
        goto LAB_004ad1b2;
      }
      uVar5 = uVar5 + 0x30;
      iVar9 = iVar9 + 1;
    } while (uVar5 < 0xf0);
    BVar6 = GetCPInfo(param_1,&local_1c);
    if (BVar6 == 1) {
      puVar12 = &DAT_0051c6e0;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
      DAT_0051c7e4 = param_1;
      DAT_0051c6d0 = 0;
      if (local_1c.MaxCharSize < 2) {
        DAT_0051c6d8 = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar7 = local_1c.LeadByte + 1;
          do {
            bVar4 = *pBVar7;
            if (bVar4 == 0) break;
            for (uVar5 = (uint)pBVar7[-1]; uVar5 <= bVar4; uVar5 = uVar5 + 1) {
              pbVar10 = (byte *)((int)&DAT_0051c6e0 + uVar5 + 1);
              *pbVar10 = *pbVar10 | 4;
            }
            pBVar1 = pBVar7 + 1;
            pBVar7 = pBVar7 + 2;
          } while (*pBVar1 != 0);
        }
        uVar5 = 1;
        do {
          pbVar10 = (byte *)((int)&DAT_0051c6e0 + uVar5 + 1);
          *pbVar10 = *pbVar10 | 8;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xff);
        DAT_0051c6d0 = _CPtoLCID();
        DAT_0051c6d8 = extraout_ECX_00;
      }
      DAT_0051c7f0 = 0;
      DAT_0051c7f4 = 0;
      DAT_0051c7f8 = 0;
      goto LAB_004ad1b2;
    }
    if (DAT_0051c684 == 0) {
      return 0xffffffff;
    }
  }
  setSBCS();
LAB_004ad1b2:
  setSBUpLow();
  return 0;
}


/* END FUNCTION 0x004ad03b */
