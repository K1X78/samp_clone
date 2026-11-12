/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a32b8
 * Name: _puts
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _puts(char *_Str)

{
  int _Flag;
  size_t sVar1;
  uint uVar2;
  int local_24;
  
  local_24 = -1;
  __lock_file2(1,&DAT_004ebe38);
  _Flag = __stbuf((FILE *)&DAT_004ebe38);
  sVar1 = _strlen(_Str);
  uVar2 = __fwrite_lk(_Str,1,sVar1,(FILE *)&DAT_004ebe38);
  if (uVar2 == sVar1) {
    _DAT_004ebe3c = _DAT_004ebe3c + -1;
    if (_DAT_004ebe3c < 0) {
      __flsbuf(10,(FILE *)&DAT_004ebe38);
    }
    else {
      *DAT_004ebe38 = 10;
      DAT_004ebe38 = DAT_004ebe38 + 1;
    }
    local_24 = 0;
  }
  __ftbuf(_Flag,(FILE *)&DAT_004ebe38);
  FUN_004a334e();
  return local_24;
}


/* END FUNCTION 0x004a32b8 */
