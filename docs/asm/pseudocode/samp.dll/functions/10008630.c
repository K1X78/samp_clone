/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008630
 * Name: FUN_10008630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008630(int param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  if (3000 < DVar1 - *(int *)(param_1 + 0x3d1)) {
    if (DAT_102aca10 != 0) {
      FUN_10067b60(DAT_102aca10,"Connecting to %s:%d...",param_1 + 0x30,
                   *(undefined4 *)(param_1 + 0x235));
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))
              (param_1 + 0x30,*(undefined2 *)(param_1 + 0x235),0,0,2);
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x3d1) = DVar1;
    *(undefined4 *)(param_1 + 0x3cd) = 2;
  }
  return;
}


/* END FUNCTION 0x10008630 */
