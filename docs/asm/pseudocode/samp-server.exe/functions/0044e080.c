/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e080
 * Name: FUN_0044e080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e080(void *this,byte *param_1,int param_2,char param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = param_2 >> 3;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    if (param_1[iVar1] != (byte)((param_3 != '\0') - 1U)) {
      FUN_0044de70(this);
      FUN_0044df40(this,param_1,iVar1 * 8 + 8,'\x01');
      return;
    }
    FUN_0044de90(this);
  }
  pbVar2 = param_1 + iVar1;
  if (param_3 == '\0') {
    if ((*pbVar2 & 0xf0) == 0xf0) goto LAB_0044e109;
  }
  else if ((*pbVar2 & 0xf0) == 0) {
LAB_0044e109:
    FUN_0044de90(this);
    FUN_0044df40(this,pbVar2,4,'\x01');
    return;
  }
  FUN_0044de70(this);
  FUN_0044df40(this,pbVar2,8,'\x01');
  return;
}


/* END FUNCTION 0x0044e080 */
