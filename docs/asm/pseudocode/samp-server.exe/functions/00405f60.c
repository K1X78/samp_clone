/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405f60
 * Name: FUN_00405f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00405f60(uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint *in_EAX;
  uint uVar2;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_c;
  
  if (*in_EAX < 0x1000000) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_2 != 0) {
      param_1 = (uint *)((int)param_1 + (param_2 & 0xfffffffc));
      uVar2 = param_2 & 3;
      uVar3 = (int)(~(0xffffffffU >> (char)uVar2 * '\b') & *param_1) >>
              (('\x04' - (char)uVar2) * '\b' & 0x1fU);
    }
    iVar8 = param_3 + uVar2;
    for (; (int)uVar2 < iVar8; uVar2 = uVar2 + 1) {
      uVar3 = uVar3 << 8 | *in_EAX & 0xff;
      in_EAX = in_EAX + 1;
      if (((byte)uVar2 & 3) == 3) {
        *param_1 = uVar3;
        param_1 = param_1 + 1;
        uVar3 = 0;
      }
    }
    if ((uVar2 & 3) != 0) {
      *param_1 = uVar3 << (('\x04' - (char)(uVar2 & 3)) * '\b' & 0x1fU);
      return 0;
    }
    *param_1 = 0;
  }
  else if ((param_2 & 3) == 0) {
    _memmove((void *)((int)param_1 + param_2),in_EAX,param_3 + 3 & 0xfffffffc);
    uVar2 = param_3 & 0xfffffffc;
    if (param_3 == uVar2) {
      uVar3 = 4;
    }
    else {
      uVar3 = (uVar2 - param_3) + 4;
    }
    if (0 < (int)uVar3) {
      puVar9 = (undefined4 *)((int)((int)param_1 + param_2) + uVar2);
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      return 0;
    }
  }
  else {
    puVar7 = (uint *)((int)param_1 + (param_2 & 0xfffffffc));
    cVar1 = (char)(param_2 & 3);
    sVar4 = cVar1 * '\b';
    uVar5 = 0xffffffff >> sVar4;
    uVar3 = ~uVar5;
    uVar2 = *puVar7 & uVar3;
    if (0 < (int)param_3) {
      local_c = (param_3 - 1 >> 2) + 1;
      puVar6 = puVar7;
      do {
        puVar7 = puVar6 + 1;
        *puVar6 = (int)*in_EAX >> sVar4 & uVar5 | uVar2;
        uVar2 = *in_EAX << (('\x04' - cVar1) * '\b' & 0x1fU) & uVar3;
        local_c = local_c + -1;
        puVar6 = puVar7;
        in_EAX = in_EAX + 1;
      } while (local_c != 0);
    }
    if ((char)puVar7[-1] != '\0') {
      *puVar7 = uVar2 & 0xffffff00;
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x00405f60 */
