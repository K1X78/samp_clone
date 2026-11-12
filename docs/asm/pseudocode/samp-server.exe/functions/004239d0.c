/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004239d0
 * Name: FUN_004239d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004239d0(void *this,undefined4 *param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_EBX;
  
  if (in_EAX == 0) {
    for (uVar1 = (uint)this >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      param_1 = param_1 + 1;
    }
    for (uVar1 = (uint)this & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)unaff_EBX;
      unaff_EBX = (undefined4 *)((int)unaff_EBX + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00423650(param_2);
    if (uVar1 == 0) {
      for (uVar1 = (uint)this >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *unaff_EBX = *param_1;
        param_1 = param_1 + 1;
        unaff_EBX = unaff_EBX + 1;
      }
      for (uVar1 = (uint)this & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)unaff_EBX = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        unaff_EBX = (undefined4 *)((int)unaff_EBX + 1);
      }
      return 0;
    }
  }
  return uVar1;
}


/* END FUNCTION 0x004239d0 */
