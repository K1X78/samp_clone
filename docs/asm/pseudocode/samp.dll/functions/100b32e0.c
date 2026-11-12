/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b32e0
 * Name: FUN_100b32e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100b32e0(int param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x963);
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)(param_1 + 0x963) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x967) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 0x96b) = *(undefined4 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0x96f) = 0;
  *(byte *)(param_1 + 0x970) = *param_2 >> 3 & 1;
  *(byte *)(param_1 + 0x971) = *param_2 & 1;
  *(undefined4 *)(param_1 + 0x972) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x976) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x97a) = *(undefined4 *)(param_2 + 0x15);
  *(byte *)(param_1 + 0x97e) = *param_2 >> 4 & 1;
  *(undefined4 *)(param_1 + 0x97f) = *(undefined4 *)(param_2 + 0x1b);
  *(byte *)(param_1 + 0x983) = param_2[0x19];
  *(byte *)(param_1 + 0x984) = param_2[0x1a];
  *(byte *)(param_1 + 0x985) = *param_2 >> 1 & 1;
  *(byte *)(param_1 + 0x986) = *param_2 >> 2 & 1;
  *(uint *)(param_1 + 0x987) = (uint)param_2[0x1f];
  *(undefined4 *)(param_1 + 0x98b) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x98f) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)(param_1 + 0x99b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x99f) = 0xffffffff;
  *(byte *)(param_1 + 0x9a7) = param_2[0x20];
  *(undefined2 *)(param_1 + 0x9a8) = *(undefined2 *)(param_2 + 0x29);
  *(undefined4 *)(param_1 + 0x9aa) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x9ae) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)(param_1 + 0x9b2) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x9b6) = *(undefined4 *)(param_2 + 0x37);
  *(undefined2 *)(param_1 + 0x9ba) = *(undefined2 *)(param_2 + 0x3b);
  *(undefined2 *)(param_1 + 0x9bc) = *(undefined2 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x9c0) = 0;
  *(undefined4 *)(param_1 + 0x9a3) = 0xffffffff;
  FUN_100b2b60(param_3);
  if (*(int *)(param_1 + 0x987) == 4) {
    uVar1 = FUN_100b2720();
    *(undefined4 *)(param_1 + 0x9a3) = uVar1;
    FUN_100b28d0();
  }
  *(undefined1 *)(param_1 + 0x9bf) = 0;
  *(undefined4 *)(param_1 + 0x9c1) = 0;
  *(undefined4 *)(param_1 + 0x9c9) = 0;
  *(undefined4 *)(param_1 + 0x9c5) = 0;
  *(undefined4 *)(param_1 + 0x9cd) = 0;
  *(undefined1 *)(param_1 + 0x9d1) = 0;
  *(undefined4 *)(param_1 + 0x9d2) = 0;
  return param_1;
}


/* END FUNCTION 0x100b32e0 */
