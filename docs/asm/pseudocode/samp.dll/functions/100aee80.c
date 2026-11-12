/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aee80
 * Name: FUN_100aee80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aee80(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x329) = 0;
    puVar2 = (undefined4 *)(param_1 + 0x2fd);
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x329) = 1;
    *(undefined4 *)(param_1 + 0x325) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x301) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x305) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x309) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x30d) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x311) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x315) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x319) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x31d) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x321) = *(undefined4 *)(param_2 + 0x24);
    if (((*(char *)(param_1 + 0x2b0) == '\0') && (DAT_102aca24 != 0)) &&
       (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) != 0)) {
      FUN_100069d0();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100aee80 */
