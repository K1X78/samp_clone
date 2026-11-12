/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469c30
 * Name: FUN_00469c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00469c30(void *this,undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 0x4b4);
  if (piVar2 != *(int **)((int)this + 0x4b8)) {
    do {
      if (((*(uint *)(*piVar2 + 4) & 0x10000) != 0) &&
         (pcVar1 = *(code **)(*piVar2 + 0x18), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)((int)this + 0x4b8));
  }
  return;
}


/* END FUNCTION 0x00469c30 */
