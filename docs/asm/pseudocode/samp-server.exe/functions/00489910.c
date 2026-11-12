/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489910
 * Name: FUN_00489910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00489910(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0xce) = 0;
    *(undefined4 *)((int)this + 0xd2) = 0;
    *(undefined4 *)((int)this + 0xd6) = 0;
    *(undefined4 *)((int)this + 0xda) = 0;
    *(undefined4 *)((int)this + 0xde) = 0;
    *(undefined4 *)((int)this + 0xe2) = 0;
    *(undefined4 *)((int)this + 0xe6) = 0;
    *(undefined4 *)((int)this + 0xea) = 0;
    return;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(param_1 + 1)) < 0x21) {
    iVar2 = 0xce - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)this + iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


/* END FUNCTION 0x00489910 */
