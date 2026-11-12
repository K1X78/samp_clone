/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b230
 * Name: FUN_0045b230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0045b230(ushort param_1,ushort param_2)

{
  uint3 uVar1;
  undefined2 in_stack_0000000a;
  
  uVar1 = (uint3)((uint)_param_2 >> 8);
  if (param_2 < 0x8000) {
    if ((ushort)(param_2 + 0x8000) <= param_1) goto LAB_0045b256;
  }
  else if ((int)(uint)param_1 < (int)(param_2 - 0x7ffe)) goto LAB_0045b26b;
  if (param_2 <= param_1) {
LAB_0045b26b:
    return (uint)uVar1 << 8;
  }
LAB_0045b256:
  return CONCAT31(uVar1,1);
}


/* END FUNCTION 0x0045b230 */
