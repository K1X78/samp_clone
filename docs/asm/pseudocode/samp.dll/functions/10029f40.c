/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10029f40
 * Name: FUN_10029f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10029f40(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_6 [6];
  
  iVar2 = FUN_1002e2b0();
  uVar6 = param_2;
  FUN_10055d30(local_6);
  cVar1 = FUN_100331a0(uVar6);
  do {
    if (cVar1 != '\0') {
      return "Connection to server lost.";
    }
    iVar3 = FUN_10055c60();
    if (iVar3 != 0) {
      if (param_3 != '\0') {
        _printf("%s",*(undefined4 *)(iVar3 + 0x10));
      }
      pcVar4 = _strstr(*(char **)(iVar3 + 0x10),"250");
      if ((pcVar4 != (char *)0x0) ||
         (pcVar4 = _strstr(*(char **)(iVar3 + 0x10),"354"), pcVar4 != (char *)0x0)) {
        return (char *)0x0;
      }
      pcVar4 = _strstr(*(char **)(iVar3 + 0x10),"550");
      if (pcVar4 != (char *)0x0) {
        return "Failed on error code 550";
      }
      pcVar4 = _strstr(*(char **)(iVar3 + 0x10),"553");
      if (pcVar4 != (char *)0x0) {
        return "Failed on error code 553";
      }
    }
    uVar5 = FUN_1002e2b0();
    if (iVar2 + 5000U < uVar5) {
      return "Timed out";
    }
    FUN_10043560(100);
    uVar6 = param_2;
    FUN_10055d30(local_6);
    cVar1 = FUN_100331a0(uVar6);
  } while( true );
}


/* END FUNCTION 0x10029f40 */
