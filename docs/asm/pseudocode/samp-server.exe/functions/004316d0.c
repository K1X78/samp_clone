/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004316d0
 * Name: FUN_004316d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004316d0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  iVar1 = FUN_004154a0(param_1,(void *)0x0);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1a) != '\0') {
      FUN_0042ea10((int)param_1);
      return;
    }
    if (*(char *)(iVar1 + 0x18) != '\0') {
      FUN_0042ea40((int)param_1);
      return;
    }
    pvVar3 = (void *)0xffffffff;
    pvVar2 = (void *)FUN_00412be0();
    FUN_0042fcb0(param_1,pvVar2,pvVar3);
  }
  return;
}


/* END FUNCTION 0x004316d0 */
