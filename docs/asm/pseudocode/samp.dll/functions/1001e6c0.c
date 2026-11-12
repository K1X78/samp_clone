/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e6c0
 * Name: FUN_1001e6c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __fastcall FUN_1001e6c0(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float local_4;
  
  uVar3 = 0;
  local_4 = 10000.0;
  uVar2 = 0xffff;
  if (-1 < *param_1) {
    uVar1 = 0;
    do {
      if ((((uVar3 < 2000) && (param_1[uVar1 + 0xc1d] != 0)) && (param_1[uVar1 + 0x2f45] != 0)) &&
         (fVar4 = (float10)FUN_1009ef00(), fVar4 < (float10)local_4)) {
        local_4 = (float)fVar4;
        uVar2 = uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar1 = (uint)uVar3;
    } while ((int)uVar1 <= *param_1);
  }
  return uVar2;
}


/* END FUNCTION 0x1001e6c0 */
