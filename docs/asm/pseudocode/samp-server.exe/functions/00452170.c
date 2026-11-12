/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452170
 * Name: FUN_00452170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00452170(void *this,undefined4 *param_1,int param_2,int param_3,int param_4,undefined1 param_5,
            undefined4 param_6,undefined2 param_7,undefined1 param_8,int param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (int *)FUN_00450c40((int)this + 0x7f4);
  uVar4 = param_2 + 7 >> 3;
  puVar2 = operator_new(uVar4);
  piVar1[9] = (int)puVar2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[2] = param_4;
  *(undefined1 *)(piVar1 + 3) = param_5;
  *(undefined4 *)((int)piVar1 + 0xd) = param_6;
  *(undefined2 *)((int)piVar1 + 0x11) = param_7;
  *(undefined1 *)((int)piVar1 + 0x13) = param_8;
  piVar1[5] = param_9;
  piVar1[10] = 0;
  FUN_00450c80((int)this + 0x7f4);
  return;
}


/* END FUNCTION 0x00452170 */
