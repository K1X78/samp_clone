/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403930
 * Name: FUN_00403930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00403930(short param_1,short param_2)

{
  short sVar1;
  HANDLE pvVar2;
  SHORT SStack00000006;
  BOOL bAbsolute;
  SMALL_RECT *lpConsoleWindow;
  SMALL_RECT local_8;
  
  sVar1 = param_1;
  SStack00000006 = param_2;
  pvVar2 = GetStdHandle(0xfffffff5);
  SetConsoleScreenBufferSize(pvVar2,_param_1);
  lpConsoleWindow = &local_8;
  local_8.Right = sVar1 + -1;
  bAbsolute = 1;
  local_8.Bottom = param_2 + -1;
  local_8.Left = 0;
  local_8.Top = 0;
  pvVar2 = GetStdHandle(0xfffffff5);
  SetConsoleWindowInfo(pvVar2,bAbsolute,lpConsoleWindow);
  return;
}


/* END FUNCTION 0x00403930 */
