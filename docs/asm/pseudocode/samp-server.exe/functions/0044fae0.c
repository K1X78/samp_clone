/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044fae0
 * Name: FUN_0044fae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044fae0(void *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)this = *(int *)this + *param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_1[4];
  uVar3 = param_1[0xc];
  puVar1 = (uint *)((int)this + 0x30);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + param_1[0xd] + (uint)CARRY4(uVar2,uVar3)
  ;
  uVar3 = param_1[0x14];
  puVar1 = (uint *)((int)this + 0x50);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x54) =
       *(int *)((int)this + 0x54) + param_1[0x15] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1];
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_1[5];
  uVar3 = param_1[0xe];
  puVar1 = (uint *)((int)this + 0x38);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + param_1[0xf] + (uint)CARRY4(uVar2,uVar3)
  ;
  uVar3 = param_1[0x16];
  puVar1 = (uint *)((int)this + 0x58);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x5c) =
       *(int *)((int)this + 0x5c) + param_1[0x17] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1[6];
  uVar3 = param_1[0x10];
  puVar1 = (uint *)((int)this + 0x40);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x44) =
       *(int *)((int)this + 0x44) + param_1[0x11] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[0x18];
  puVar1 = (uint *)((int)this + 0x60);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 100) = *(int *)((int)this + 100) + param_1[0x19] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1[3];
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_1[7];
  uVar3 = param_1[0x12];
  puVar1 = (uint *)((int)this + 0x48);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x4c) =
       *(int *)((int)this + 0x4c) + param_1[0x13] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[0x1a];
  puVar1 = (uint *)((int)this + 0x68);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x6c) =
       *(int *)((int)this + 0x6c) + param_1[0x1b] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + param_1[0x1c];
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + param_1[0x1c];
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + param_1[0x1e];
  uVar3 = param_1[0x20];
  puVar1 = (uint *)((int)this + 0x80);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x84) =
       *(int *)((int)this + 0x84) + param_1[0x21] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + param_1[0x22];
  *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + param_1[0x23];
  uVar3 = param_1[0x24];
  puVar1 = (uint *)((int)this + 0x90);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x94) =
       *(int *)((int)this + 0x94) + param_1[0x25] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[0x26];
  puVar1 = (uint *)((int)this + 0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x9c) =
       *(int *)((int)this + 0x9c) + param_1[0x27] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + param_1[0x28];
  *(int *)((int)this + 0xa4) = *(int *)((int)this + 0xa4) + param_1[0x29];
  *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + param_1[0x2a];
  *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + param_1[0x2b];
  *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + param_1[0x2c];
  uVar3 = param_1[0x2e];
  puVar1 = (uint *)((int)this + 0xb8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0xbc) =
       *(int *)((int)this + 0xbc) + param_1[0x2f] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[0x30];
  puVar1 = (uint *)((int)this + 0xc0);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0xc4) =
       *(int *)((int)this + 0xc4) + param_1[0x31] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 200) = *(int *)((int)this + 200) + param_1[0x32];
  *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + param_1[0x33];
  *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + param_1[0x34];
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + param_1[0x35];
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + param_1[0x36];
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + param_1[0x37];
  uVar3 = param_1[0x38];
  puVar1 = (uint *)((int)this + 0xe0);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0xe4) =
       *(int *)((int)this + 0xe4) + param_1[0x39] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[0x3a];
  puVar1 = (uint *)((int)this + 0xe8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0xec) =
       *(int *)((int)this + 0xec) + param_1[0x3b] + (uint)CARRY4(uVar2,uVar3);
  *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + param_1[0x3c];
  *(int *)((int)this + 0xf4) = *(int *)((int)this + 0xf4) + param_1[0x3d];
  *(int *)((int)this + 0xf8) = *(int *)((int)this + 0xf8) + param_1[0x3e];
  *(int *)((int)this + 0xfc) = *(int *)((int)this + 0xfc) + param_1[0x3f];
  *(int *)((int)this + 0x100) = *(int *)((int)this + 0x100) + param_1[0x40];
  *(int *)((int)this + 0x104) = *(int *)((int)this + 0x104) + param_1[0x41];
  *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + param_1[0x42];
  return;
}


/* END FUNCTION 0x0044fae0 */
