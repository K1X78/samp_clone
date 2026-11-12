/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c3a0
 * Name: FUN_1003c3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1003c3a0(undefined4 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  
  iVar2 = FUN_1003c2a0(param_1,param_2,1,1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0xffff;
  iVar6 = 0;
  puVar3 = (ushort *)(iVar2 + 0x710);
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0xffff) {
      return uVar4;
    }
    if (uVar1 < uVar5) {
      uVar4 = *(undefined4 *)(puVar3 + 1);
      uVar5 = uVar1;
    }
    iVar6 = iVar6 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar6 < 5);
  return uVar4;
}


/* END FUNCTION 0x1003c3a0 */
