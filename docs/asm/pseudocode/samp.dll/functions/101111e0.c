/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101111e0
 * Name: FUN_101111e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


FARPROC FUN_101111e0(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  undefined1 local_664 [512];
  HMODULE local_464;
  undefined1 local_460 [28];
  undefined1 local_444 [544];
  undefined4 local_224;
  FARPROC local_220;
  undefined4 local_214;
  FARPROC local_c;
  undefined4 *local_8;
  
  local_464 = LoadLibraryA(param_1);
  if (local_464 == (HMODULE)0x0) {
    local_c = (FARPROC)0x0;
  }
  else {
    local_c = GetProcAddress(local_464,param_2);
    if (local_c == (FARPROC)0x0) {
      local_8 = (undefined4 *)FUN_10110fb0();
      if ((((local_8 == (undefined4 *)0x0) || (local_8[6] == 0)) || (local_8[7] == 0)) ||
         (local_8[8] == 0)) {
        local_c = (FARPROC)0x0;
      }
      else {
        (*(code *)local_8[6])(*local_8,0,param_1,0,local_464,0);
        _memset(local_460,0,0x23c);
        iVar1 = (*(code *)local_8[7])(*local_8,local_464,local_460);
        if (iVar1 == 0) {
          local_c = (FARPROC)0x0;
        }
        else {
          FUN_10103c90(local_664,local_444);
          FUN_10103ca0(local_664,&DAT_10156970);
          FUN_10103ca0(local_664,param_2);
          _memset(&local_224,0,0x218);
          local_224 = 0x18;
          local_214 = 0x80;
          iVar1 = (*(code *)local_8[8])(*local_8,local_664,&local_224);
          local_c = local_220;
          if (iVar1 == 0) {
            local_c = (FARPROC)0x0;
          }
        }
      }
    }
  }
  return local_c;
}


/* END FUNCTION 0x101111e0 */
