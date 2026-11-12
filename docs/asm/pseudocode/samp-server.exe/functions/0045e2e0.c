/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045e2e0
 * Name: FUN_0045e2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0045e2e0(void *this,int *param_1)

{
  byte bVar1;
  int *this_00;
  uint3 extraout_var;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  ushort local_14 [2];
  uint local_10;
  uint local_c;
  int local_8;
  void *local_4;
  
  local_4 = this;
  FUN_0045d830(this);
  this_00 = param_1;
  FUN_0044db30(param_1,(byte *)local_14,0x10,1);
  iVar3 = (uint)extraout_var << 8;
  uVar6 = 0;
  if (local_14[0] != 0) {
    cVar5 = (char)param_1;
    do {
      uVar2 = this_00[2];
      iVar3 = uVar2 + 1;
      if (iVar3 <= *this_00) {
        uVar4 = uVar2 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        bVar1 = *(byte *)(((int)uVar2 >> 3) + this_00[3]);
        this_00[2] = iVar3;
        local_8 = iVar3;
        if ((bVar1 & (byte)(0x80 >> ((byte)uVar4 & 0x1f))) == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = '\x01';
        }
      }
      uVar2 = FUN_0044da70(this_00,(byte *)&local_10,0x10,'\x01');
      if ((char)uVar2 == '\0') goto LAB_0045e38b;
      if (cVar5 == '\0') {
        uVar2 = FUN_0044da70(this_00,(byte *)&local_c,0x10,'\x01');
        if ((char)uVar2 == '\0') {
LAB_0045e38b:
          return uVar2 & 0xffffff00;
        }
        uVar2 = local_10;
        if ((ushort)local_c < (ushort)local_10) goto LAB_0045e38b;
      }
      else {
        local_c = local_10;
      }
      param_1 = (int *)CONCAT22((short)local_c,(short)local_10);
      iVar3 = FUN_0045d820(local_4,&param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_14[0]);
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


/* END FUNCTION 0x0045e2e0 */
