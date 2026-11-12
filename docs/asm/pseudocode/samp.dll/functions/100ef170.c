/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef170
 * Name: FUN_100ef170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ef170(undefined4 param_1,char *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte local_80 [128];
  
  pbVar3 = local_80;
  if (((param_3 & 0xfffffffe) < 0x100) && ((param_3 & 1) != 0)) {
    param_3 = param_3 - 1;
    iVar2 = FUN_100ef110(param_1,pbVar3,param_3 >> 1);
    if (iVar2 == 0) {
      for (; param_3 != 0; param_3 = param_3 - 2) {
        bVar1 = *pbVar3;
        *param_2 = "0123456789abcdef"[bVar1 >> 4];
        param_2[1] = "0123456789abcdef"[bVar1 & 0xf];
        param_2 = param_2 + 2;
        pbVar3 = pbVar3 + 1;
      }
      *param_2 = '\0';
      return 0;
    }
  }
  else {
    iVar2 = 0x2b;
  }
  return iVar2;
}


/* END FUNCTION 0x100ef170 */
