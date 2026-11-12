/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1cf0
 * Name: FUN_100f1cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100f1cf0(int param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte *in_EAX;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
  *param_2 = 0;
  uVar5 = (int)param_3 - (int)in_EAX;
  uVar6 = 1;
  switch(param_1) {
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
    break;
  default:
    goto switchD_100f1d20_caseD_d;
  case 0x1c:
    uVar6 = 4;
    break;
  case 0x1e:
    uVar6 = 2;
  }
  if (((uVar5 % uVar6 == 0) && (uVar5 / uVar6 < 0x40000000)) &&
     (pbVar2 = (byte *)(*(code *)PTR__malloc_101554b8)((uVar5 / uVar6) * 4 + 1),
     pbVar2 != (byte *)0x0)) {
    if (param_1 == 0xc) {
      if (uVar5 != 0) {
        pbVar7 = pbVar2;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)in_EAX;
          in_EAX = in_EAX + 4;
          pbVar7 = pbVar7 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar7 = *in_EAX;
          in_EAX = in_EAX + 1;
          pbVar7 = pbVar7 + 1;
        }
      }
    }
    else {
      uVar5 = 0;
      if (in_EAX < param_3) {
        do {
          uVar3 = 0;
          if (uVar6 == 2) {
LAB_100f1dbc:
            uVar3 = uVar3 << 8 | (uint)*in_EAX;
            in_EAX = in_EAX + 1;
          }
          else if (uVar6 == 4) {
            uVar3 = (uint)CONCAT11(*in_EAX,in_EAX[1]);
            in_EAX = in_EAX + 2;
            goto LAB_100f1dbc;
          }
          bVar1 = *in_EAX;
          uVar3 = uVar3 << 8 | (uint)bVar1;
          in_EAX = in_EAX + 1;
          iVar4 = 1;
          if (0x7f < uVar3) {
            if (0x7ff < uVar3) {
              if (0xffff < uVar3) {
                if (0x1fffff < uVar3) {
                  (*(code *)PTR__free_101554bc)(pbVar2);
                  return 0xffffffff;
                }
                pbVar2[uVar5 + 3] = bVar1 & 0x3f | 0x80;
                uVar3 = (uVar3 | 0x400000) >> 6;
                iVar4 = 2;
              }
              bVar1 = (byte)uVar3;
              uVar3 = (uVar3 | 0x20000) >> 6;
              pbVar2[uVar5 + 2] = bVar1 & 0x3f | 0x80;
              iVar4 = iVar4 + 1;
            }
            bVar1 = (byte)uVar3;
            uVar3 = (uVar3 | 0x3000) >> 6;
            pbVar2[uVar5 + 1] = bVar1 & 0x3f | 0x80;
            iVar4 = iVar4 + 1;
          }
          pbVar2[uVar5] = (byte)uVar3;
          uVar5 = uVar5 + iVar4;
          if (param_3 <= in_EAX) {
            pbVar2[uVar5] = 0;
            *param_2 = pbVar2;
            return uVar5;
          }
        } while( true );
      }
    }
    pbVar2[uVar5] = 0;
    *param_2 = pbVar2;
    return uVar5;
  }
switchD_100f1d20_caseD_d:
  return 0xffffffff;
}


/* END FUNCTION 0x100f1cf0 */
