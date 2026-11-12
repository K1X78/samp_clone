/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493340
 * Name: FUN_00493340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493340(void *this,ushort param_1)

{
  int iVar1;
  
  iVar1 = 0x80;
  do {
    if ((*(int *)this != 0) && (param_1 < 1000)) {
      *(undefined4 *)(*(int *)this + 0x361 + (uint)param_1 * 4) = 0;
    }
    this = (void *)((int)this + 4);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* END FUNCTION 0x00493340 */
