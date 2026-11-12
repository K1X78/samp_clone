/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056eb0
 * Name: FUN_10056eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10056eb0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 local_14;
  undefined2 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  puVar2 = (undefined4 *)FUN_10055ce0(&local_c);
  local_14 = *puVar2;
  local_10 = *(undefined2 *)(puVar2 + 1);
  uVar4 = 0x1014;
  cVar1 = FUN_100331d0(&DAT_10140224);
  if (cVar1 == '\0') goto LAB_10056f88;
  local_c = 0xff;
  local_b = 0xfb;
  local_a = 1;
  FUN_10055bf0(&local_c,3,local_14,CONCAT22(uVar4,local_10));
  puVar2 = (undefined4 *)0x0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_10056f57:
    puVar2 = operator_new(0x20a);
    *(undefined4 *)((int)puVar2 + 0x206) = 0;
    *puVar2 = local_14;
    *(undefined2 *)(puVar2 + 1) = local_10;
  }
  else {
    do {
      cVar1 = FUN_100331a0(&local_14);
      if (cVar1 != '\0') {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 8) + uVar3 * 4);
        *(undefined4 *)((int)puVar2 + 0x206) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
    if (puVar2 == (undefined4 *)0x0) goto LAB_10056f57;
  }
  FUN_10056bb0(puVar2);
LAB_10056f88:
  *param_2 = local_14;
  *(undefined2 *)(param_2 + 1) = local_10;
  return;
}


/* END FUNCTION 0x10056eb0 */
