/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5b30
 * Name: FUN_100e5b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e5b30(int param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *_Str;
  
  pcVar2 = *(char **)(param_1 + 0xd8);
  iVar1 = _strncmp(pcVar2,"HTTP",4);
  if (iVar1 == 0) {
    pcVar2 = _strchr(pcVar2,0x20);
    if ((pcVar2 != (char *)0x0) && (_Str = pcVar2 + 1, pcVar2[1] != '\0')) {
      cVar3 = '\r';
      pcVar2 = _strchr(_Str,0xd);
      if (pcVar2 == (char *)0x0) {
        cVar3 = '\n';
        pcVar2 = _strchr(_Str,10);
        if (pcVar2 == (char *)0x0) goto LAB_100e5baa;
      }
      *pcVar2 = '\0';
      FUN_100d8ba0(param_1,"The requested URL returned error: %s",_Str);
      *pcVar2 = cVar3;
      return;
    }
  }
LAB_100e5baa:
  FUN_100d8ba0(param_1,"The requested URL returned error: %d",*(undefined4 *)(param_1 + 0xe8));
  return;
}


/* END FUNCTION 0x100e5b30 */
