/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001d780
 * Name: FUN_1001d780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001d780(undefined4 *param_1)

{
  int iVar1;
  int local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113e5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_124[0] = 0;
  FUN_1001f470(local_124,0x20,1);
  iVar1 = DAT_102aca28;
  if ((DAT_102aca28 != 0) && (*(int *)(DAT_102aca28 + 0x217) != local_124[0])) {
    *(int *)(DAT_102aca28 + 0x217) = local_124[0];
    *(undefined1 *)(iVar1 + 0x221) = 0;
    *(undefined1 *)(iVar1 + 0x220) = 0;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001d780 */
