/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e9120
 * Name: FUN_100e9120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e9120(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  *param_5 = 0;
  iVar1 = FUN_100db5d0(*param_1,0,1);
  do {
    if (iVar1 < 0) {
      return 0x1c;
    }
    iVar1 = FUN_100cd750(param_2,0xffffffff,0xffffffff,iVar1);
    if (iVar1 < 1) {
      return -1;
    }
    iVar1 = FUN_100d87c0(param_2,param_3,param_4,&local_4);
    if (iVar1 != 0x51) {
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_4 == local_4) {
        *param_5 = local_4 + iVar2;
        return 0;
      }
      if (local_4 == 0) {
        return -1;
      }
      param_4 = param_4 - local_4;
      param_3 = param_3 + local_4;
      iVar2 = iVar2 + local_4;
    }
    iVar1 = FUN_100db5d0(*param_1,0,1);
  } while( true );
}


/* END FUNCTION 0x100e9120 */
