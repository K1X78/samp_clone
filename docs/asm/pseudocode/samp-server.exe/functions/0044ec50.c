/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ec50
 * Name: FUN_0044ec50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0044ec50(void *this,void *param_1,undefined4 *param_2)

{
  bool bVar1;
  
  DAT_004ed5a0 = *(undefined4 **)((int)this + 4);
  *param_2 = 0;
  *(undefined4 *)((int)this + 8) = 3;
  if (*(int *)((int)this + 0xc) == 0) {
    *(undefined4 *)((int)this + 8) = 0;
    DAT_004ed5a0 = (undefined4 *)0x0;
    return &DAT_004ed5a0;
  }
  bVar1 = FUN_0044ebd0(param_1,(int *)*DAT_004ed5a0);
  if (!bVar1) {
    while( true ) {
      bVar1 = FUN_0044ec10(param_1,(uint *)*DAT_004ed5a0);
      if (bVar1) {
        *param_2 = DAT_004ed5a0;
        *(undefined4 *)((int)this + 8) = 1;
        DAT_004ed5a0 = (undefined4 *)DAT_004ed5a0[1];
      }
      else {
        bVar1 = FUN_0044ebf0(param_1,(uint *)*DAT_004ed5a0);
        if (bVar1) {
          *param_2 = DAT_004ed5a0;
          *(undefined4 *)((int)this + 8) = 2;
          DAT_004ed5a0 = (undefined4 *)DAT_004ed5a0[2];
        }
      }
      if (DAT_004ed5a0 == (undefined4 *)0x0) break;
      bVar1 = FUN_0044ebd0(param_1,(int *)*DAT_004ed5a0);
      if (bVar1) {
        return &DAT_004ed5a0;
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    DAT_004ed5a0 = (undefined4 *)0x0;
    return &DAT_004ed5a0;
  }
  *(undefined4 *)((int)this + 8) = 3;
  return &DAT_004ed5a0;
}


/* END FUNCTION 0x0044ec50 */
