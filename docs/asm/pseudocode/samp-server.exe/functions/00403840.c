/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403840
 * Name: FUN_00403840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00403840(int *param_1,int *param_2)

{
  HANDLE hConsoleOutput;
  _CONSOLE_SCREEN_BUFFER_INFO *lpConsoleScreenBufferInfo;
  _CONSOLE_SCREEN_BUFFER_INFO local_18;
  
  _fflush((FILE *)&DAT_004ebe38);
  lpConsoleScreenBufferInfo = &local_18;
  hConsoleOutput = GetStdHandle(0xfffffff5);
  GetConsoleScreenBufferInfo(hConsoleOutput,lpConsoleScreenBufferInfo);
  if (param_1 != (int *)0x0) {
    *param_1 = local_18.dwCursorPosition.X + 1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_18.dwCursorPosition.Y + 1;
  }
  return;
}


/* END FUNCTION 0x00403840 */
