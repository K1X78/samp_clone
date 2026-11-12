/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404530
 * Name: FUN_00404530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_00404530(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  char *pcVar3;
  int iVar4;
  char *unaff_EBX;
  undefined4 *puVar5;
  
  pcVar3 = unaff_EBX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined4 *)*in_EAX;
  if (pcVar3 == unaff_EBX + 1) {
    while ((puVar5 = puVar2, puVar5 != (undefined4 *)0x0 &&
           ((puVar5[1] != param_1 || (puVar5[3] != param_2))))) {
      in_EAX = puVar5;
      puVar2 = (undefined4 *)*puVar5;
    }
  }
  else {
    while ((puVar5 = puVar2, puVar5 != (undefined4 *)0x0 &&
           ((puVar5[1] != param_1 || (iVar4 = __stricmp((char *)puVar5[2],unaff_EBX), iVar4 != 0))))
          ) {
      puVar2 = (undefined4 *)*puVar5;
      in_EAX = puVar5;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = in_EAX;
  }
  return puVar5;
}


/* END FUNCTION 0x00404530 */
