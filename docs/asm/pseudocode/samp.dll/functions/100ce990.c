/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce990
 * Name: FUN_100ce990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ce990(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((param_1[param_2 + 0xc1] == 0) || (iVar1 = FUN_100ce870(), iVar1 == 0)) {
    iVar1 = FUN_100ce820();
    if (iVar1 == 0) {
      return 0x23;
    }
    param_1[(param_2 + 0x1e) * 4] = 1;
    iVar1 = (**(code **)(PTR_DAT_10155510 + 0x34))(param_1,param_2,param_3);
    if ((iVar1 == 0) && (*param_3 != 0)) {
      FUN_100e2ff0(*param_1,5);
    }
  }
  return iVar1;
}


/* END FUNCTION 0x100ce990 */
