/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010b9d0
 * Name: _ProcessCodePage
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall _ProcessCodePage(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_10155bc4;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (iVar1 = _strcmp(param_1,"ACP"), iVar1 == 0)) {
    uVar2 = 0x1004;
  }
  else {
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 != 0) goto LAB_1010ba34;
    uVar2 = 0xb;
  }
  iVar1 = (*DAT_102ad250)(DAT_102ad238,uVar2,local_10,8);
  if (iVar1 == 0) {
    return;
  }
  param_1 = local_10;
LAB_1010ba34:
  _atol(param_1);
  return;
}


/* END FUNCTION 0x1010b9d0 */
