/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004036e0
 * Name: FUN_004036e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004036e0(void)

{
  HANDLE hConsoleOutput;
  DWORD local_1c;
  _CONSOLE_SCREEN_BUFFER_INFO local_18;
  
  hConsoleOutput = GetStdHandle(0xfffffff5);
  _fflush((FILE *)&DAT_004ebe38);
  GetConsoleScreenBufferInfo(hConsoleOutput,&local_18);
  FillConsoleOutputCharacterA
            (hConsoleOutput,' ',(int)local_18.dwSize.Y * (int)local_18.dwSize.X,(COORD)0x0,&local_1c
            );
  FillConsoleOutputAttribute
            (hConsoleOutput,local_18.wAttributes,(int)local_18.dwSize.Y * (int)local_18.dwSize.X,
             (COORD)0x0,&local_1c);
  SetConsoleCursorPosition(hConsoleOutput,(COORD)0x0);
  return;
}


/* END FUNCTION 0x004036e0 */
