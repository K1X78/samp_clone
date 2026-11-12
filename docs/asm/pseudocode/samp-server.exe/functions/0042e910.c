/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e910
 * Name: FUN_0042e910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall FUN_0042e910(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  byte bVar1;
  
  if (*(char *)(*(int *)this + 0x1e) != '\0') {
    return 7;
  }
  bVar1 = FUN_0042e460(param_3,(void *)0xffffffff,'\x01');
  return bVar1;
}


/* END FUNCTION 0x0042e910 */
