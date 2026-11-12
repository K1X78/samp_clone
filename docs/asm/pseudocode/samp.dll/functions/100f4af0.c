/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4af0
 * Name: FUN_100f4af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f4af0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_stack_00000010;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_20;
  char *pcStack_4;
  
  FUN_100f4a70();
  iVar1 = (**(code **)(DAT_102acadc + 0x44))();
  if (iVar1 != 0) {
    return 4;
  }
  *(undefined4 *)(in_stack_00000010 + 0x2c) = uStack_20;
  (**(code **)(DAT_102acadc + 0x40))();
  puStack_40 = (undefined1 *)0x100f4b3f;
  iVar1 = (*(code *)PTR__malloc_101554b8)();
  *(int *)(in_stack_00000010 + 0x30) = iVar1;
  if (iVar1 == 0) {
    return 0x1b;
  }
  if ((pcStack_4 == (char *)0x0) || (*pcStack_4 == '\0')) {
    *(undefined4 *)(in_stack_00000010 + 0x28) = 0;
  }
  else {
    uStack_4c = 0x100f4b70;
    puStack_40 = (undefined1 *)(in_stack_00000010 + 0xc);
    iVar1 = FUN_100cd4b0();
    if (iVar1 != 0) {
      return iVar1;
    }
    *(int *)(in_stack_00000010 + 0x28) = in_stack_00000010 + 0xc;
  }
  puStack_40 = (undefined1 *)0x8;
  uStack_44 = 0x100f4b8f;
  puVar2 = (undefined4 *)(*(code *)PTR__malloc_101554b8)();
  *(undefined4 **)(in_stack_00000010 + 4) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    uStack_44 = *(undefined4 *)(in_stack_00000010 + 4);
    puStack_40 = &stack0xffffffd4;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_50 = *(undefined4 *)(in_stack_00000010 + 0x28);
    uStack_54 = 0;
    uStack_58 = 2;
    puStack_5c = &DAT_101270a0;
    uStack_60 = 0;
    puStack_64 = (undefined4 *)0x100f4bce;
    iVar1 = (**(code **)(DAT_102acadc + 0xc))();
    if (iVar1 != 0) {
      return 0x43;
    }
    puStack_64 = (undefined4 *)0x8;
    puStack_68 = (undefined4 *)0x100f4be5;
    puVar2 = (undefined4 *)(*(code *)PTR__malloc_101554b8)();
    *(undefined4 **)(in_stack_00000010 + 8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      uStack_48 = 0;
      puStack_64 = *(undefined4 **)(in_stack_00000010 + 0x2c);
      puStack_40 = &stack0xffffffc4;
      uStack_44 = 1;
      puStack_68 = (undefined4 *)0x100f4c22;
      FUN_100d9a10();
      puStack_64 = &uStack_50;
      uStack_70 = *(undefined4 *)(in_stack_00000010 + 8);
      puStack_68 = &uStack_54;
      puStack_6c = &uStack_48;
      uStack_74 = 0;
      uStack_78 = 0;
      iVar1 = (**(code **)(DAT_102acadc + 0x18))
                        (*(undefined4 *)(in_stack_00000010 + 4),0,&DAT_10117a39,0,0,0);
      if ((iVar1 == 0x90313) || (iVar1 == 0x90314)) {
        (**(code **)(DAT_102acadc + 0x20))(*(undefined4 *)(in_stack_00000010 + 8),&uStack_78);
      }
      else if ((iVar1 != 0) && (iVar1 != 0x90312)) {
        return 0x38;
      }
      iVar1 = FUN_100e3f20(puStack_5c,*(undefined4 *)(in_stack_00000010 + 0x30),puStack_6c,uStack_4c
                           ,uStack_48);
      return iVar1;
    }
  }
  return 0x1b;
}


/* END FUNCTION 0x100f4af0 */
