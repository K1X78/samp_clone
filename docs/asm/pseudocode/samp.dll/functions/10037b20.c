/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037b20
 * Name: FUN_10037b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10037b20(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *param_1 + *param_2;
  param_1[4] = param_1[4] + param_2[4];
  uVar3 = param_2[0xc];
  puVar1 = (uint *)(param_1 + 0xc);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0xd] = param_1[0xd] + param_2[0xd] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x14];
  puVar1 = (uint *)(param_1 + 0x14);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x15] = param_1[0x15] + param_2[0x15] + (uint)CARRY4(uVar2,uVar3);
  param_1[1] = param_1[1] + param_2[1];
  param_1[5] = param_1[5] + param_2[5];
  uVar3 = param_2[0xe];
  puVar1 = (uint *)(param_1 + 0xe);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0xf] = param_1[0xf] + param_2[0xf] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x16];
  puVar1 = (uint *)(param_1 + 0x16);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x17] = param_1[0x17] + param_2[0x17] + (uint)CARRY4(uVar2,uVar3);
  param_1[2] = param_1[2] + param_2[2];
  param_1[6] = param_1[6] + param_2[6];
  uVar3 = param_2[0x10];
  puVar1 = (uint *)(param_1 + 0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x11] = param_1[0x11] + param_2[0x11] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x18];
  puVar1 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x19] = param_1[0x19] + param_2[0x19] + (uint)CARRY4(uVar2,uVar3);
  param_1[3] = param_1[3] + param_2[3];
  param_1[7] = param_1[7] + param_2[7];
  uVar3 = param_2[0x12];
  puVar1 = (uint *)(param_1 + 0x12);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x13] = param_1[0x13] + param_2[0x13] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x1a];
  puVar1 = (uint *)(param_1 + 0x1a);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x1b] = param_1[0x1b] + param_2[0x1b] + (uint)CARRY4(uVar2,uVar3);
  param_1[0x1c] = param_1[0x1c] + param_2[0x1c];
  param_1[0x1d] = param_1[0x1d] + param_2[0x1c];
  param_1[0x1e] = param_1[0x1e] + param_2[0x1e];
  uVar3 = param_2[0x1f];
  puVar1 = (uint *)(param_1 + 0x1f);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x20] = param_1[0x20] + param_2[0x20] + (uint)CARRY4(uVar2,uVar3);
  param_1[0x21] = param_1[0x21] + param_2[0x21];
  param_1[0x22] = param_1[0x22] + param_2[0x22];
  uVar3 = param_2[0x23];
  puVar1 = (uint *)(param_1 + 0x23);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x24] = param_1[0x24] + param_2[0x24] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x25];
  puVar1 = (uint *)(param_1 + 0x25);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x26] = param_1[0x26] + param_2[0x26] + (uint)CARRY4(uVar2,uVar3);
  param_1[0x27] = param_1[0x27] + param_2[0x27];
  param_1[0x28] = param_1[0x28] + param_2[0x28];
  param_1[0x29] = param_1[0x29] + param_2[0x29];
  param_1[0x2a] = param_1[0x2a] + param_2[0x2a];
  param_1[0x2b] = param_1[0x2b] + param_2[0x2b];
  uVar3 = param_2[0x2c];
  puVar1 = (uint *)(param_1 + 0x2c);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x2d] = param_1[0x2d] + param_2[0x2d] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x2e];
  puVar1 = (uint *)(param_1 + 0x2e);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x2f] = param_1[0x2f] + param_2[0x2f] + (uint)CARRY4(uVar2,uVar3);
  param_1[0x30] = param_1[0x30] + param_2[0x30];
  param_1[0x31] = param_1[0x31] + param_2[0x31];
  param_1[0x32] = param_1[0x32] + param_2[0x32];
  param_1[0x33] = param_1[0x33] + param_2[0x33];
  param_1[0x34] = param_1[0x34] + param_2[0x34];
  param_1[0x35] = param_1[0x35] + param_2[0x35];
  uVar3 = param_2[0x36];
  puVar1 = (uint *)(param_1 + 0x36);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x37] = param_1[0x37] + param_2[0x37] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[0x38];
  puVar1 = (uint *)(param_1 + 0x38);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[0x39] = param_1[0x39] + param_2[0x39] + (uint)CARRY4(uVar2,uVar3);
  param_1[0x3a] = param_1[0x3a] + param_2[0x3a];
  param_1[0x3b] = param_1[0x3b] + param_2[0x3b];
  param_1[0x3c] = param_1[0x3c] + param_2[0x3c];
  param_1[0x3d] = param_1[0x3d] + param_2[0x3d];
  param_1[0x3e] = param_1[0x3e] + param_2[0x3e];
  param_1[0x3f] = param_1[0x3f] + param_2[0x3f];
  param_1[0x40] = param_1[0x40] + param_2[0x40];
  return;
}


/* END FUNCTION 0x10037b20 */
