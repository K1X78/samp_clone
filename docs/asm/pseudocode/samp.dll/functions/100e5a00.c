/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5a00
 * Name: FUN_100e5a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100e5a00(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_EAX;
  char *pcVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(in_EAX + 0x4d8);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = thunk_FUN_100de8c0("HTTP/");
      return iVar4 != 0;
    }
    pcVar3 = (char *)*puVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = thunk_FUN_100de8c0((char *)*puVar2);
    if (iVar4 != 0) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return true;
}


/* END FUNCTION 0x100e5a00 */
