/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004036a0
 * Name: FUN_004036a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004036a0(int param_1,int param_2)

{
  HANDLE hConsoleHandle;
  DWORD dwMode;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      return 0;
    }
    hConsoleHandle = GetStdHandle(0xfffffff5);
    dwMode = 1;
    if (param_2 != 0) {
      dwMode = 3;
    }
    SetConsoleMode(hConsoleHandle,dwMode);
  }
  return 1;
}


/* END FUNCTION 0x004036a0 */
