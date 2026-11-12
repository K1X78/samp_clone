/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100294e0
 * Name: FUN_100294e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100294e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  char local_d;
  undefined4 local_c [2];
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar1 = (undefined1 *)FUN_100282f0();
    *(undefined1 **)(param_1 + 0x10) = puVar1;
    *puVar1 = 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 1) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 5) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x45) = *param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x85) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x89) = 0;
    return 1;
  }
  local_d = '\x01';
  local_4 = 0;
  pcVar2 = (char *)FUN_10028d90(param_2,param_3,*(int *)(param_1 + 0x10),local_c,&local_d);
  if (local_d == '\0') {
    return 0;
  }
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\0') {
      *(int *)(pcVar2 + 1) = *(int *)(pcVar2 + 1) + -1;
      uVar3 = local_c[0];
    }
    else {
      uVar3 = *(undefined4 *)(pcVar2 + 5);
    }
    puVar1 = (undefined1 *)FUN_100282f0();
    *(undefined4 *)(puVar1 + 5) = uVar3;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 0x8d) = *(undefined4 *)(param_1 + 0x10);
    *(char **)(puVar1 + 0x91) = pcVar2;
    *(undefined1 **)(param_1 + 0x10) = puVar1;
  }
  return 1;
}


/* END FUNCTION 0x100294e0 */
