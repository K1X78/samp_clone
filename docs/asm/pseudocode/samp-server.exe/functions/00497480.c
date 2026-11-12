/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497480
 * Name: FUN_00497480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall FUN_00497480(void *this,char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x105) = 0;
  *(undefined4 *)((int)this + 0x109) = 0;
  puVar2 = this;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  _strncpy(this,param_1,0x104);
  return this;
}


/* END FUNCTION 0x00497480 */
