/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056fb0
 * Name: FUN_10056fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10056fb0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_6 [6];
  
  puVar2 = (undefined4 *)FUN_10055d30(local_6);
  local_10 = *puVar2;
  local_c = *(undefined2 *)(puVar2 + 1);
  cVar1 = FUN_100331d0(&DAT_10140224);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    uVar3 = 0;
    do {
      cVar1 = FUN_100331a0(&local_10);
      if (cVar1 != '\0') {
        _free(*(void **)(*(int *)(param_1 + 8) + uVar3 * 4));
        *(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 0xc) * 4);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  *param_2 = local_10;
  *(undefined2 *)(param_2 + 1) = local_c;
  return;
}


/* END FUNCTION 0x10056fb0 */
