/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0d90
 * Name: FUN_100b0d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b0d90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_100af490(&local_c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x2f9) == 0) {
      uVar2 = FID_conflict___time32(0);
      FUN_100fd019(uVar2);
      uVar2 = FUN_100a0170(0x4b52,0,0,0,0,0,0,0x43480000,0,0);
      *(undefined4 *)(param_1 + 0x2f9) = uVar2;
      FUN_1009f470(0);
      (**(code **)(**(int **)(param_1 + 0x2f9) + 4))();
    }
    FUN_1009ee80(local_c,local_8,local_4);
    return;
  }
  if (*(undefined4 **)(param_1 + 0x2f9) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2f9))(1);
    *(undefined4 *)(param_1 + 0x2f9) = 0;
  }
  return;
}


/* END FUNCTION 0x100b0d90 */
