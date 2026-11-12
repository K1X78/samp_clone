/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10010410
 * Name: FUN_10010410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10010410(undefined4 *param_1)

{
  char *pcVar1;
  char local_121 [269];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011308b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_121,8,1);
  if (local_121[0] == '\x01') {
    pcVar1 = "CONNECTION REJECTED: Incorrect Version.";
  }
  else {
    if (local_121[0] == '\x02') {
      FUN_10067ae0(DAT_102aca10,"CONNECTION REJECTED: Unacceptable NickName");
      FUN_10067ae0(DAT_102aca10,"Please choose another nick between and 3-20 characters");
      FUN_10067ae0(DAT_102aca10,"Please use only a-z, A-Z, 0-9");
      FUN_10067ae0(DAT_102aca10,"Use /quit to exit or press ESC and select Quit Game");
      goto LAB_100104ef;
    }
    if (local_121[0] == '\x03') {
      pcVar1 = "CONNECTION REJECTED: Bad mod version.";
    }
    else {
      if (local_121[0] != '\x04') goto LAB_100104ef;
      pcVar1 = "CONNECTION REJECTED: Unable to allocate a player slot.";
    }
  }
  FUN_10067ae0(DAT_102aca10,pcVar1);
LAB_100104ef:
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 8))(500,0);
  pvStack_c = (void *)0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x10010410 */
