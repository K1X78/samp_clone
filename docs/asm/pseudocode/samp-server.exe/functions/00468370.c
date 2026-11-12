/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468370
 * Name: FUN_00468370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00468370(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint3 uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = send(*(SOCKET *)this,param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  uVar4 = (uint3)((uint)iVar3 >> 8);
  if (iVar3 < 0) {
    *(undefined4 *)((int)this + 4) = 4;
    return (uint)uVar4 << 8;
  }
  return CONCAT31(uVar4,1);
}


/* END FUNCTION 0x00468370 */
