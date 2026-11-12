/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b570
 * Name: FUN_1006b570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1006b570(void)

{
  if (*(int *)(DAT_102ac9e0 + 0x28) == 0) {
    FUN_1006fa50(1,0,"SA-MP Keys:",
                 "{BB9999}F1\t{BBBBBB}Display this help dialog\n{BB9999}Tab\t{BBBBBB}Display the scoreboard\n{BB9999}F4\t{BBBBBB}Allows you to change class next time you respawn\n{BB9999}F5\t{BBBBBB}Show bandwidth statistics\n{BB9999}F7\t{BBBBBB}Toggle the chat box\n{BB9999}F8\t{BBBBBB}Take a screenshot\n{BB9999}F9\t{BBBBBB}Toggle the deathwindow\n{BB9999}T/F6\t{BBBBBB}Allows you to enter a chat message\n{BB9999}G\t{BBBBBB}Enter vehicle as passenger\n"
                 ,&DAT_1011c63c,&DAT_10117a39,0);
  }
  return;
}


/* END FUNCTION 0x1006b570 */
