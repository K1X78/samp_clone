/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004510c0
 * Name: FUN_004510c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x004510f0) */

void __cdecl FUN_004510c0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 - uVar3;
  uVar4 = param_2[1];
  puVar1 = param_1 + 1;
  uVar5 = (uint)(uVar2 < uVar3);
  uVar2 = *puVar1;
  uVar6 = *puVar1 - uVar4;
  *puVar1 = uVar6 - uVar5;
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar4 = (uint)(uVar2 < uVar4 || uVar6 < uVar5);
  uVar2 = *puVar1;
  uVar5 = *puVar1 - uVar3;
  *puVar1 = uVar5 - uVar4;
  param_1[3] = (param_1[3] - param_2[3]) - (uint)(uVar2 < uVar3 || uVar5 < uVar4);
  return;
}


/* END FUNCTION 0x004510c0 */
