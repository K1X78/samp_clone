/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056600
 * Name: FUN_10056600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10056600(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x25a);
  local_4 = 8;
  do {
    uVar2 = *param_2;
    uVar2 = *param_3 -
            ((uVar2 >> 5 ^ uVar2 << 4) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x24a + param_1) + uVar1);
    *param_3 = uVar2;
    uVar1 = uVar1 - *(int *)(param_1 + 0x25e);
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ *(byte *)((uVar1 & 3) + 0x24a + param_1) + uVar1)
    ;
    *param_2 = uVar2;
    uVar2 = *param_3 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x24a + param_1) + uVar1);
    *param_3 = uVar2;
    uVar1 = uVar1 - *(int *)(param_1 + 0x25e);
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ *(byte *)((uVar1 & 3) + 0x24a + param_1) + uVar1)
    ;
    *param_2 = uVar2;
    uVar2 = *param_3 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x24a + param_1) + uVar1);
    *param_3 = uVar2;
    uVar1 = uVar1 - *(int *)(param_1 + 0x25e);
    uVar2 = *param_2 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^ *(byte *)((uVar1 & 3) + 0x24a + param_1) + uVar1)
    ;
    *param_2 = uVar2;
    uVar2 = *param_3 -
            ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
            *(byte *)((uVar1 >> 0xb & 3) + 0x24a + param_1) + uVar1);
    *param_3 = uVar2;
    uVar1 = uVar1 - *(int *)(param_1 + 0x25e);
    local_4 = local_4 + -1;
    *param_2 = *param_2 -
               ((uVar2 >> 5 ^ uVar2 * 0x10) + uVar2 ^
               *(byte *)((uVar1 & 3) + 0x24a + param_1) + uVar1);
  } while (local_4 != 0);
  return;
}


/* END FUNCTION 0x10056600 */
