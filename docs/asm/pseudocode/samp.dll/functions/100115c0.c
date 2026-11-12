/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100115c0
 * Name: FUN_100115c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100115c0(undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  ushort local_128 [2];
  undefined4 local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101131ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_124[0] = 0;
  FUN_1001f470(local_128,0x10,1);
  FUN_1001f470(local_124,0x10,1);
  if ((((local_128[0] < 0x3ed) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x26 +
                        (uint)local_128[0] * 4), iVar1 != 0)) && (*(int *)(iVar1 + 8) != 0)) &&
     (fVar2 = (float10)FUN_10015dd0(), fVar2 < (float10)200.0)) {
    FUN_10015ee0();
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100115c0 */
