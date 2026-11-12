/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004037d0
 * Name: FUN_004037d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004037d0(COORD param_1,int param_2)

{
  short sVar1;
  HANDLE hConsoleOutput;
  _CONSOLE_SCREEN_BUFFER_INFO local_18;
  
  hConsoleOutput = GetStdHandle(0xfffffff5);
  GetConsoleScreenBufferInfo(hConsoleOutput,&local_18);
  if ((((0 < (int)param_1) && ((int)param_1 <= (int)local_18.dwSize.X)) && (0 < param_2)) &&
     (param_2 <= local_18.dwSize.Y)) {
    _fflush((FILE *)&DAT_004ebe38);
    sVar1 = param_1.X;
    param_1.Y = (short)param_2 + -1;
    param_1.X = sVar1 + -1;
    SetConsoleCursorPosition(hConsoleOutput,param_1);
  }
  return;
}


/* END FUNCTION 0x004037d0 */
