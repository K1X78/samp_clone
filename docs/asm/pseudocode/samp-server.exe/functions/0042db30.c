/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042db30
 * Name: FUN_0042db30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042db30(void *param_1,undefined4 param_2,void *param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if ((1 < *(byte *)((int)param_1 + 0x43)) && (uVar1 = FUN_0042d320(), uVar1 != 0)) {
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x43) != '\x01') {
    return 4;
  }
  if (*(char *)((int)param_1 + 0x40) != '\0') {
    uVar1 = FUN_00428400(param_1,param_3,param_4);
    return uVar1;
  }
  return 8;
}


/* END FUNCTION 0x0042db30 */
