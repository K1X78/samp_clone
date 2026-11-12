/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469fc0
 * Name: FUN_00469fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00469fc0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00469e30(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}


/* END FUNCTION 0x00469fc0 */
