/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c1640
 * Name: FUN_100c1640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c1640(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_100c1580(&local_10,param_2,param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_100c15f0(), iVar1 == 0)) {
    *param_1 = local_10;
    param_1[1] = local_c;
    param_1[2] = local_8;
    param_1[3] = local_4;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100c1640 */
