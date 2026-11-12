/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4cc0
 * Name: FUN_100f4cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f4cc0(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000010;
  undefined4 uVar3;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  iVar1 = in_stack_00000010;
  local_1c = *(undefined4 *)(in_stack_00000010 + 0x34);
  local_4 = &local_24;
  local_c = 0;
  local_8 = 1;
  local_20 = 2;
  local_24 = FUN_100d9a10(*(undefined4 *)(in_stack_00000010 + 0x38));
  local_28 = *(undefined4 *)(iVar1 + 0x30);
  local_10 = &local_30;
  local_18 = 0;
  local_14 = 1;
  local_2c = 2;
  local_30 = FUN_100d9a10(*(undefined4 *)(iVar1 + 0x2c));
  uVar3 = 0;
  iVar2 = (**(code **)(DAT_102acadc + 0x18))
                    (*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),&DAT_10117a39,0,0,0,
                     &local_c,0,*(undefined4 *)(iVar1 + 8),&local_18,&stack0x00000010,local_38);
  if (iVar2 != 0) {
    FUN_100d8ae0(local_2c,"NTLM handshake failure (type-3 message): Status=%x\n",iVar2);
    return 0x38;
  }
  uVar3 = FUN_100e3f20(local_2c,*(undefined4 *)(iVar1 + 0x30),uVar3,local_1c,local_18);
  FUN_100f4a70(iVar1);
  return uVar3;
}


/* END FUNCTION 0x100f4cc0 */
