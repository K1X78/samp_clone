/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077f00
 * Name: FUN_10077f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10077f00(HWND param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  WINDOWPLACEMENT local_2c;
  
  iVar1 = FUN_10077cc0();
  if (iVar1 != 0) {
    uVar2 = (*DAT_1017ee3c)(param_1,param_2);
    return uVar2;
  }
  if ((param_2 & 3) != 0) {
    return 0x12340042;
  }
  BVar3 = IsIconic(param_1);
  if (BVar3 == 0) {
    iVar1 = GetWindowRect(param_1,&local_2c.rcNormalPosition);
  }
  else {
    iVar1 = GetWindowPlacement(param_1,&local_2c);
  }
  if (iVar1 != 0) {
    uVar2 = FUN_10077ea0(&local_2c.rcNormalPosition,param_2);
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x10077f00 */
