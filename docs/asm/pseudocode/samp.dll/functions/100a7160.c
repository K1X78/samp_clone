/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7160
 * Name: FUN_100a7160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a7160(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,char param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined1 *)(param_1 + 0x41);
  iVar3 = 0xc;
  do {
    puVar2[-0x20] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 0x40;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x321) = 0;
  *(undefined1 *)(param_1 + 0x341) = 0;
  iVar3 = (param_1 + 1) - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar3] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(param_1 + 0x361) = param_3;
  *(undefined4 *)(param_1 + 0x369) = param_6;
  *(undefined4 *)(param_1 + 0x365) = param_4;
  *(char *)(param_1 + 0x371) = (param_5 == '\x02') + '\x01';
  *(undefined4 *)(param_1 + 0x36d) = param_7;
  puVar4 = (undefined4 *)(param_1 + 0x372);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_8;
    param_8 = param_8 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  return;
}


/* END FUNCTION 0x100a7160 */
