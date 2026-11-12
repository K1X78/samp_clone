/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8960
 * Name: FUN_100c8960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c8960(void)

{
  int iVar1;
  undefined4 uVar2;
  WSADATA local_190;
  
  iVar1 = WSAStartup(0x202,&local_190);
  if (iVar1 == 0) {
    if (((char)local_190.wVersion == '\x02') && ((char)(local_190.wVersion >> 8) == '\x02')) {
      uVar2 = FUN_100cd420();
      return uVar2;
    }
    WSACleanup();
  }
  return 2;
}


/* END FUNCTION 0x100c8960 */
