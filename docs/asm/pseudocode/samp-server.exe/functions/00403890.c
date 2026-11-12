/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403890
 * Name: FUN_00403890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00403890(int param_1,int param_2,int param_3)

{
  HANDLE hConsoleOutput;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  _CONSOLE_SCREEN_BUFFER_INFO local_18;
  
  hConsoleOutput = GetStdHandle(0xfffffff5);
  _fflush((FILE *)&DAT_004ebe38);
  GetConsoleScreenBufferInfo(hConsoleOutput,&local_18);
  uVar1 = local_18.wAttributes >> 3 & 1;
  uVar2 = local_18.wAttributes >> 4 & 0xf;
  uVar3 = local_18.wAttributes & 7;
  uVar4 = (uVar1 << 7 | uVar2) << 8 | uVar3;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = *(uint *)(&DAT_004ca060 + param_1 * 4);
  }
  if ((-1 < param_2) && (param_2 < 8)) {
    uVar2 = *(uint *)(&DAT_004ca060 + param_2 * 4);
  }
  if (-1 < param_3) {
    uVar1 = (uint)(param_3 != 0);
  }
  SetConsoleTextAttribute(hConsoleOutput,(ushort)((uVar2 * 2 | uVar1) << 3) | (ushort)uVar3);
  return uVar4;
}


/* END FUNCTION 0x00403890 */
