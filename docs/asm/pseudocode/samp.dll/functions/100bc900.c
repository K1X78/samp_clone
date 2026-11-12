/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc900
 * Name: FUN_100bc900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100bc900(uint param_1)

{
  undefined4 *puVar1;
  uint local_4;
  
  local_4 = param_1;
  puVar1 = operator_new(0x23);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0xffff;
    *(undefined2 *)((int)puVar1 + 10) = 0x1803;
  }
  *puVar1 = 1;
  local_4 = (uint)*(ushort *)(param_1 + 10);
  FUN_100bc150(&local_4,2);
  local_4 = (uint)*(ushort *)(param_1 + 0xc);
  FUN_100bc150(&local_4,2);
  local_4 = *(uint *)(param_1 + 0xe);
  FUN_100bc150(&local_4,4);
  local_4 = *(uint *)(param_1 + 0x12);
  FUN_100bc150(&local_4,4);
  local_4 = *(uint *)(param_1 + 0x16);
  FUN_100bc150(&local_4,4);
  if (((*(byte *)(param_1 + 10) & 8) != 0) && (*(char *)(param_1 + 0x1a) != '\0')) {
    FUN_100bc150(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x12) << 2);
  }
  if ((*(byte *)(param_1 + 10) & 0x84) != 0) {
    FUN_100bc150(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x12) << 3);
  }
  FUN_100bc150(*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0xe) << 3);
  FUN_100bc150(param_1 + 0x2c,0x10);
  local_4 = *(uint *)(param_1 + 0x3c);
  FUN_100bc150(&local_4,4);
  local_4 = *(uint *)(param_1 + 0x40);
  FUN_100bc150(&local_4,4);
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_100bc150(*(int *)(param_1 + 0x44),*(int *)(param_1 + 0x12) * 0xc);
  }
  if (((*(byte *)(param_1 + 10) & 0x10) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    FUN_100bc150(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x12) * 0xc);
  }
  puVar1[1] = puVar1[5];
  return puVar1;
}


/* END FUNCTION 0x100bc900 */
