/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004639c0
 * Name: FUN_004639c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004639c0(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_4;
  
  uVar1 = *(uint *)((int)this + 0x26c);
  local_4 = 8;
  do {
    uVar2 = *param_1;
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 << 4) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x25c + (int)this) + uVar1);
    *param_2 = uVar2;
    uVar1 = uVar1 - *(int *)((int)this + 0x270);
    uVar2 = *param_1 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 & 3) + 0x25c + (int)this) + uVar1);
    *param_1 = uVar2;
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x25c + (int)this) + uVar1);
    *param_2 = uVar2;
    uVar1 = uVar1 - *(int *)((int)this + 0x270);
    uVar2 = *param_1 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 & 3) + 0x25c + (int)this) + uVar1);
    *param_1 = uVar2;
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x25c + (int)this) + uVar1);
    *param_2 = uVar2;
    uVar1 = uVar1 - *(int *)((int)this + 0x270);
    uVar2 = *param_1 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 & 3) + 0x25c + (int)this) + uVar1);
    *param_1 = uVar2;
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x25c + (int)this) + uVar1);
    *param_2 = uVar2;
    uVar1 = uVar1 - *(int *)((int)this + 0x270);
    local_4 = local_4 + -1;
    *param_1 = *param_1 -
               ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
               *(byte *)((uVar1 & 3) + 0x25c + (int)this) + uVar1);
  } while (local_4 != 0);
  return;
}


/* END FUNCTION 0x004639c0 */
