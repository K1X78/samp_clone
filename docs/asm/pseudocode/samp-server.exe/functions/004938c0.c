/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004938c0
 * Name: FUN_004938c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004938c0(float param_1)

{
  undefined4 uVar1;
  char local_120 [32];
  char local_100 [256];
  
  _DAT_0051c188 = _DAT_0051c188 - param_1;
  if (_DAT_0051c188 < 0.0 != (_DAT_0051c188 == 0.0)) {
    _DAT_0051c188 = 300.0;
    uVar1 = FUN_00490c80(DAT_004fc43c,"port");
    _sprintf(local_120,"%d",uVar1);
    FUN_00490ba0(DAT_004fc43c,"bind");
    _sprintf(local_100,"%s",local_120);
    ShellExecuteA((HWND)0x0,"open","announce.exe",local_100,(LPCSTR)0x0,0);
  }
  return;
}


/* END FUNCTION 0x004938c0 */
