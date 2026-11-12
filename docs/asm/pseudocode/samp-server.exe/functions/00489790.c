/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489790
 * Name: FUN_00489790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00489790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1 + 3;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((int)param_1 + 0xb7) = 0;
  *(undefined4 *)((int)param_1 + 0xbb) = 0;
  *(undefined4 *)((int)param_1 + 0xbf) = 0;
  *(undefined4 *)((int)param_1 + 0xc3) = 0;
  *(undefined4 *)((int)param_1 + 199) = 0;
  *(undefined2 *)((int)param_1 + 0xcb) = 0;
  *(undefined1 *)((int)param_1 + 0xcd) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xca) = 0xffffffff;
  param_1[0xf] = *(undefined4 *)((int)param_1 + 0x86);
  param_1[0x10] = *(undefined4 *)((int)param_1 + 0x8a);
  param_1[0x11] = *(undefined4 *)((int)param_1 + 0x8e);
  *param_1 = *(undefined4 *)((int)param_1 + 0x86);
  param_1[1] = *(undefined4 *)((int)param_1 + 0x8a);
  param_1[2] = *(undefined4 *)((int)param_1 + 0x8e);
  *(undefined4 *)((int)param_1 + 0xa6) = 0x447a0000;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined1 *)((int)param_1 + 0xb2) = 0;
  *(undefined1 *)((int)param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xff) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar3 = thunk_FUN_0044e910();
  *(int *)((int)param_1 + 0x105) = (int)uVar3;
  uVar3 = thunk_FUN_0044e910();
  *(int *)((int)param_1 + 0x101) = (int)uVar3;
  *(undefined1 *)((int)param_1 + 0xf1) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf3) = 0xff;
  *(undefined1 *)(param_1 + 0x3d) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf2) = 0xff;
  *(undefined1 *)((int)param_1 + 0xef) = 0xff;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf5) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf6) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf7) = 0xff;
  *(undefined1 *)(param_1 + 0x3e) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf9) = 0xff;
  *(undefined1 *)((int)param_1 + 0xfa) = 0xff;
  *(undefined1 *)((int)param_1 + 0xfb) = 0xff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  *(undefined1 *)((int)param_1 + 0xfd) = 0xff;
  *(undefined1 *)((int)param_1 + 0xfe) = 0xff;
  if ((void *)DAT_004fc438[2] != (void *)0x0) {
    FUN_00465e40((void *)DAT_004fc438[2],(uint)*(ushort *)(param_1 + 0x19));
  }
  if (((void *)DAT_004fc438[1] != (void *)0x0) && (*DAT_004fc438 != 0)) {
    FUN_0046b110((void *)DAT_004fc438[1],(uint)*(ushort *)(param_1 + 0x19));
    FUN_0046dd90((void *)*DAT_004fc438,(uint)*(ushort *)(param_1 + 0x19));
  }
  return;
}


/* END FUNCTION 0x00489790 */
