/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6530
 * Name: FUN_100d6530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6530(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  if (*(int *)(in_EAX + 0xe4) == 0) {
    return 0;
  }
  iVar1 = FUN_100d6460(&local_4);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  if (-1 < local_4) {
    iVar1 = *(int *)(in_EAX + 0x5c);
    if ((*(int *)(in_EAX + 0xec) <= *(int *)(iVar1 + 0x10)) &&
       (*(int *)(iVar1 + 0x10) <= *(int *)(in_EAX + 0xec))) {
      if ((*(int *)(in_EAX + 0xf0) <= *(int *)(iVar1 + 0x14)) &&
         (*(int *)(iVar1 + 0x14) <= *(int *)(in_EAX + 0xf0))) {
        return 0;
      }
    }
    *(undefined4 *)(in_EAX + 0xec) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(in_EAX + 0xf0) = *(undefined4 *)(iVar1 + 0x14);
    uVar2 = (**(code **)(in_EAX + 0xe4))();
    return uVar2;
  }
  if ((((*(int *)(in_EAX + 0xec) < 1) && (-1 < *(int *)(in_EAX + 0xec))) &&
      (*(int *)(in_EAX + 0xf0) < 1)) && (-1 < *(int *)(in_EAX + 0xf0))) {
    return 0;
  }
  *(undefined4 *)(in_EAX + 0xec) = 0;
  *(undefined4 *)(in_EAX + 0xf0) = 0;
  uVar2 = (**(code **)(in_EAX + 0xe4))();
  return uVar2;
}


/* END FUNCTION 0x100d6530 */
