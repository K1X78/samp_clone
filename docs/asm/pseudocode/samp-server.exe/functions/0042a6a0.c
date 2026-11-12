/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a6a0
 * Name: FUN_0042a6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall
FUN_0042a6a0(uint *param_1,uint param_2,char *param_3,undefined4 param_4,undefined4 *param_5)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  uint *extraout_ECX;
  uint uVar4;
  
  uVar4 = (uint)(in_EAX != 0);
  if ((param_1[3] & 0x20000) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((param_3 == (char *)0x0) &&
     (bVar1 = FUN_00411870((int)param_1), param_1 = extraout_ECX, CONCAT31(extraout_var,bVar1) != 0)
     ) {
    param_3 = ":memory:";
  }
  if (((param_2 & 0x100) != 0) && ((param_3 == (char *)0x0 || (*param_3 == '\0')))) {
    param_2 = param_2 & 0xfffffeff | 0x200;
  }
  iVar2 = FUN_00427620(param_3,param_1,param_5,uVar4,param_2);
  if ((iVar2 == 0) && (iVar3 = FUN_00414af0(0), iVar3 == 0)) {
    FUN_0040cb50(param_4);
  }
  return iVar2;
}


/* END FUNCTION 0x0042a6a0 */
