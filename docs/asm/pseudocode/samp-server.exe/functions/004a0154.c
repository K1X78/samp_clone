/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a0154
 * Name: __fseek_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __fseek_lk(FILE *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (((param_1->_flag & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    piVar4 = FUN_004a5f9b();
    *piVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = __ftell_lk((uint *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    __flush(param_1);
    uVar1 = param_1->_flag;
    if ((char)uVar1 < '\0') {
      param_1->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    lVar3 = __lseek(param_1->_file,param_2,param_3);
    iVar2 = (lVar3 != -1) - 1;
  }
  return iVar2;
}


/* END FUNCTION 0x004a0154 */
