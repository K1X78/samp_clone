/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b09f7
 * Name: __getch_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __getch_lk(void)

{
  uint uVar1;
  byte *pbVar2;
  BOOL BVar3;
  _INPUT_RECORD local_20;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_004ed034 != 0xffffffff) {
    uVar1 = DAT_004ed034 & 0xff;
    DAT_004ed034 = 0xffffffff;
    return uVar1;
  }
  if (DAT_004ed038 == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  if (DAT_004ed038 == (HANDLE)0xfffffffe) {
    ___initconin();
  }
  GetConsoleMode(DAT_004ed038,&local_c);
  SetConsoleMode(DAT_004ed038,0);
  do {
    do {
      BVar3 = ReadConsoleInputA(DAT_004ed038,&local_20,1,&local_8);
      if ((BVar3 == 0) || (local_8 == 0)) {
        uVar1 = 0xffffffff;
        goto LAB_004b0a98;
      }
    } while ((local_20.EventType != 1) || (local_20.Event.KeyEvent.bKeyDown == 0));
    uVar1 = (uint)(byte)local_20.Event.MouseEvent.dwControlKeyState._2_1_;
    if (uVar1 != 0) goto LAB_004b0a98;
    pbVar2 = (byte *)__getextendedkeycode((int)&local_20.Event);
  } while (pbVar2 == (byte *)0x0);
  uVar1 = (uint)*pbVar2;
  DAT_004ed034 = (uint)pbVar2[1];
LAB_004b0a98:
  SetConsoleMode(DAT_004ed038,local_c);
  return uVar1;
}


/* END FUNCTION 0x004b09f7 */
