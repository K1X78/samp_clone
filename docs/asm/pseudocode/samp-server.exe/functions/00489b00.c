/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489b00
 * Name: FUN_00489b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00489b00(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00489740((int)param_1);
  if ((char)uVar1 == '\0') {
    uVar3 = thunk_FUN_0044e910();
    if (9999 < (int)uVar3 - *(int *)((int)param_1 + 0x105)) {
      iVar2 = FUN_00489660((int)param_1);
      if ((iVar2 == 0) && (*(char *)(param_1 + 0x40) != '\0')) {
        uVar3 = thunk_FUN_0044e910();
        if (*(int *)((int)param_1 + 0x9e) <= (int)uVar3 - *(int *)((int)param_1 + 0x101)) {
          FUN_00489790(param_1);
          return;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00489b00 */
