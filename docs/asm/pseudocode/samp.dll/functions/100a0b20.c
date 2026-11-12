/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0b20
 * Name: FUN_100a0b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a0b20(char *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 < 0xc9) {
    FUN_100b1f10(&DAT_1011e81c);
    pcVar1 = DAT_1018e1cc;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    _strncpy(DAT_1018e1cc,param_1,0x200);
    (*(code *)0x69f2b0)(DAT_1018e1cc,param_2,param_3);
  }
  return;
}


/* END FUNCTION 0x100a0b20 */
