/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403760
 * Name: FUN_00403760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00403760(void)

{
  HANDLE hConsoleOutput;
  DWORD nLength;
  DWORD local_1c;
  _CONSOLE_SCREEN_BUFFER_INFO local_18;
  
  hConsoleOutput = GetStdHandle(0xfffffff5);
  _fflush((FILE *)&DAT_004ebe38);
  GetConsoleScreenBufferInfo(hConsoleOutput,&local_18);
  nLength = (int)local_18.dwSize.X - (int)local_18.dwCursorPosition.X;
  FillConsoleOutputCharacterA(hConsoleOutput,' ',nLength,local_18.dwCursorPosition,&local_1c);
  FillConsoleOutputAttribute
            (hConsoleOutput,local_18.wAttributes,nLength,local_18.dwCursorPosition,&local_1c);
  return;
}


/* END FUNCTION 0x00403760 */
