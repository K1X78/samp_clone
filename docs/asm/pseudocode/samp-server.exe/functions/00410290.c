/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410290
 * Name: FUN_00410290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00410290(undefined4 param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = FUN_004101a0(in_EAX);
  for (uVar1 = uVar2; uVar1 != 0; uVar1 = *(uint *)(uVar1 + 0x20)) {
    if ((*(byte *)(uVar1 + 8) == param_2) &&
       (iVar3 = FUN_00410230(*(int *)(uVar1 + 0x10)), iVar3 != 0)) {
      uVar4 = uVar4 | *(byte *)(uVar1 + 9);
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar4;
  }
  return -(uint)(uVar4 != 0) & uVar2;
}


/* END FUNCTION 0x00410290 */
