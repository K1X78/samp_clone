/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487bd0
 * Name: FUN_00487bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00487bd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined2 *)(param_1 + 0x2600) = 0xffff;
  puVar4 = param_1 + 0x2500;
  puVar1 = param_1 + 0x2100;
  iVar2 = 0x400;
  puVar3 = param_1;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined1 *)(puVar3 + 8) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 0x21);
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


/* END FUNCTION 0x00487bd0 */
