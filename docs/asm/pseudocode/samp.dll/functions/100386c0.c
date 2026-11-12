/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100386c0
 * Name: FUN_100386c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100386c0(int param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  
  if ((*(int *)(param_1 + 0x334) != 0) && (uVar1 = 0, *(short *)(param_1 + 7) != 0)) {
    do {
      FUN_100438e0(param_2,param_3,param_4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 7));
  }
  *(undefined8 *)(param_1 + 0xc1e) = param_2;
  *(undefined2 *)(param_1 + 0xc26) = param_3;
  *(undefined2 *)(param_1 + 0xc28) = param_4;
  return;
}


/* END FUNCTION 0x100386c0 */
