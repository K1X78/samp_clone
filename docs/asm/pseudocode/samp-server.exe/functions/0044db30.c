/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044db30
 * Name: FUN_0044db30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_0044db30(void *this,byte *param_1,int param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = param_2 >> 3;
  if (param_3 == 0) {
    param_3 = 0xff;
    param_2._0_1_ = 0xf0;
  }
  else {
    param_3 = 0;
    param_2._0_1_ = 0;
  }
  while( true ) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      if ((*(int *)((int)this + 8) + 1 <= *(int *)this) &&
         (uVar3 = FUN_0044d840(this,&param_3), (char)uVar3 != '\0')) {
        pbVar6 = param_1 + iVar5;
        if (param_3 == 0) {
          uVar3 = FUN_0044da70(this,pbVar6,8,'\x01');
          if ((char)uVar3 != '\0') {
            return true;
          }
        }
        else {
          uVar3 = FUN_0044da70(this,pbVar6,4,'\x01');
          if ((char)uVar3 != '\0') {
            *pbVar6 = *pbVar6 | (byte)param_2;
            return true;
          }
        }
      }
      return false;
    }
    uVar2 = *(uint *)((int)this + 8);
    if (*(int *)this < (int)(uVar2 + 1)) {
      return false;
    }
    uVar4 = uVar2 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    bVar1 = *(byte *)(((int)uVar2 >> 3) + *(int *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2 + 1;
    if ((bVar1 & (byte)(0x80 >> ((byte)uVar4 & 0x1f))) == 0) break;
    param_1[iVar5] = param_3;
  }
  uVar3 = FUN_0044da70(this,param_1,iVar5 * 8 + 8,'\x01');
  return (char)uVar3 != '\0';
}


/* END FUNCTION 0x0044db30 */
