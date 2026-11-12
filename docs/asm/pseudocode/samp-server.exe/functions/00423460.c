/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423460
 * Name: FUN_00423460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_00423460(void)

{
  int in_EAX;
  int iVar1;
  int local_8;
  uint local_4;
  
  iVar1 = 0;
  if (*(char *)(in_EAX + 0xb) == '\0') {
    iVar1 = FUN_00414010(&local_4);
    if (iVar1 == 0) {
      if (local_4 == 0) {
        iVar1 = FUN_00407c40();
        local_8 = 0;
      }
      else {
        iVar1 = FUN_00407c50();
      }
      if (iVar1 == 0) {
        if (local_8 == 0) {
          if (*(char *)(in_EAX + 5) == '\x05') {
            *(undefined1 *)(in_EAX + 5) = 0;
          }
        }
        else {
          FUN_00413a30();
          iVar1 = FUN_00419550((undefined4 *)0x0);
          if (iVar1 == 0) {
            iVar1 = FUN_00423410();
            return iVar1;
          }
        }
      }
    }
  }
  return iVar1;
}


/* END FUNCTION 0x00423460 */
