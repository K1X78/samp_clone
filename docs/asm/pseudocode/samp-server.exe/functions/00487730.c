/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487730
 * Name: FUN_00487730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00487730(void *param_1)

{
  void *this;
  int *piVar1;
  uint uVar2;
  
  if (*(int *)((int)param_1 + 0x301b) != 0) {
    FUN_00465ea0(*(void **)(DAT_004fc438 + 8),(uint)*(ushort *)((int)param_1 + 0x2d53));
    uVar2 = 0;
    piVar1 = (int *)((int)param_1 + 0x2f61);
    do {
      if (*piVar1 != 0) {
        FUN_00486270(param_1,uVar2);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while ((int)uVar2 < 10);
    *(undefined4 *)((int)param_1 + 0x8c) = *(undefined4 *)((int)param_1 + 0x2ffb);
    *(undefined4 *)((int)param_1 + 0x2d05) = *(undefined4 *)((int)param_1 + 0x2ffb);
    *(undefined4 *)((int)param_1 + 0x84) = *(undefined4 *)((int)param_1 + 0x2ff3);
    *(undefined4 *)((int)param_1 + 0x88) = *(undefined4 *)((int)param_1 + 0x2ff7);
    *(undefined4 *)((int)param_1 + 0x2cfd) = *(undefined4 *)((int)param_1 + 0x2ff3);
    *(undefined4 *)((int)param_1 + 0x2d01) = *(undefined4 *)((int)param_1 + 0x2ff7);
    *(undefined2 *)((int)param_1 + 0x3022) = 0;
    *(undefined4 *)((int)param_1 + 0x2cf9) = 1;
    FUN_00484290(0);
    FUN_00483630(this,8);
  }
  return;
}


/* END FUNCTION 0x00487730 */
