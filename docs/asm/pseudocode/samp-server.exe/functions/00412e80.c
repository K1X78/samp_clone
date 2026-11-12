/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412e80
 * Name: FUN_00412e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00412e80(uint *param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (0x400 < in_EAX * 8) {
    in_EAX = 0x80;
  }
  if (in_EAX != *param_1) {
    FUN_00407d90();
    puVar2 = (undefined4 *)FUN_004125b0(in_EAX * 8);
    FUN_00407da0();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004080d0(param_1[3]);
      param_1[3] = (uint)puVar2;
      uVar3 = FUN_004080a0();
      uVar3 = uVar3 >> 3;
      *param_1 = uVar3;
      puVar6 = puVar2;
      for (iVar5 = uVar3 * 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      puVar6 = (undefined4 *)param_1[2];
      param_1[2] = 0;
      while (puVar6 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar6;
        uVar4 = FUN_00409030((byte *)puVar6[3],puVar6[4]);
        FUN_00409060(puVar2,puVar2 + (uVar4 % uVar3) * 2);
        puVar6 = puVar1;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x00412e80 */
