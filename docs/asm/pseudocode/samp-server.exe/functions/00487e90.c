/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487e90
 * Name: FUN_00487e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_00487e90(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
            undefined1 param_9)

{
  char cVar1;
  char *pcVar2;
  undefined2 extraout_var;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if (*(int *)((int)this + (uVar4 & 0xffff) * 4 + 0x8400) == 0) break;
    uVar4 = uVar4 + 1;
  } while ((ushort)uVar4 < 0x400);
  if ((short)uVar4 == 0x400) {
    return 0xffff;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _calloc(1,(size_t)(pcVar2 + (1 - (int)(param_1 + 1))));
  puVar3 = (undefined4 *)((uVar4 & 0xffff) * 0x21 + (int)this);
  *puVar3 = pcVar2;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  puVar3[4] = param_5;
  puVar3[5] = param_6;
  *(undefined1 *)(puVar3 + 6) = param_9;
  *(undefined4 *)((int)puVar3 + 0x19) = 0xffffffff;
  *(undefined2 *)((int)puVar3 + 0x1d) = param_7;
  *(undefined2 *)((int)puVar3 + 0x1f) = param_8;
  *(undefined4 *)((int)this + (uVar4 & 0xffff) * 4 + 0x8400) = 1;
  FUN_00487ce0(this,uVar4);
  return CONCAT22(extraout_var,(short)uVar4);
}


/* END FUNCTION 0x00487e90 */
