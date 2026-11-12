/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463c60
 * Name: FUN_00463c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00463c60(void *this,byte *param_1,uint param_2,byte *param_3,size_t *param_4)

{
  byte bVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined3 uVar4;
  void *pvVar3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_4;
  
  iVar7 = 0;
  local_4 = 0;
  local_c = 0xd971;
  local_a = 0xce6d;
  local_8 = 0x58bf;
  if ((param_1 != (byte *)0x0) && (7 < (int)param_2)) {
    in_EAX = param_2 & 0x80000007;
    if ((int)in_EAX < 0) {
      in_EAX = (in_EAX - 1 | 0xfffffff8) + 1;
    }
    if (in_EAX == 0) {
      if (0 < (int)param_2) {
        do {
          FUN_004639c0(this,(uint *)(param_1 + iVar7),(uint *)(param_1 + iVar7 + 4));
          iVar7 = iVar7 + 8;
        } while (iVar7 < (int)param_2);
      }
      bVar1 = *param_3;
      uVar8 = (uint)(param_3[1] & 0xf);
      *param_4 = (param_2 - uVar8) - 2;
      uVar2 = FUN_0044e170(&local_c,(int)(param_1 + 1),(param_2 - uVar8) + -1 + uVar8);
      uVar4 = (undefined3)((uint)uVar2 >> 8);
      in_EAX = CONCAT31(uVar4,(byte)local_4);
      if ((byte)((byte)local_4 << 4 ^ (byte)local_4) == bVar1) {
        if (param_1 == param_3) {
          pvVar3 = _memmove(param_3,param_1 + uVar8 + 2,*param_4);
          return CONCAT31((int3)((uint)pvVar3 >> 8),1);
        }
        uVar6 = *param_4;
        pbVar9 = param_1 + uVar8 + 2;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)param_3 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          param_3 = param_3 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_3 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          param_3 = param_3 + 1;
        }
        return CONCAT31(uVar4,1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x00463c60 */
