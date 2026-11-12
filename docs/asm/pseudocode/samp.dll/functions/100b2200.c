/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2200
 * Name: FUN_100b2200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b2200(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)param_1[3];
    if (param_1[1] != 0) {
      (**(code **)*puVar1)(0,puVar1);
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
    (**(code **)*puVar1)(1,puVar1);
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}


/* END FUNCTION 0x100b2200 */
