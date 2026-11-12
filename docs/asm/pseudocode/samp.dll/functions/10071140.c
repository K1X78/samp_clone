/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071140
 * Name: FUN_10071140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    FUN_100909a0(0x1e,0x32,10,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 0xffffff9c,100,0,0,0);
    iVar1 = FUN_10086cf0(0x1e,5);
    *(undefined1 *)(iVar1 + 0x76) = 1;
    *(undefined4 *)(iVar1 + 0x77) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x7b) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x7f) = 0x3f4cccce;
    *(undefined4 *)(iVar1 + 0x83) = 0x3f800000;
    iVar2 = *(int *)(param_1 + 0x1c) + 10;
    FUN_100909a0(0x20,0x32,iVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 0xffffff9c,100,0,0,0);
    iVar1 = FUN_10086cf0(0x20,5);
    *(undefined1 *)(iVar1 + 0x76) = 1;
    *(undefined4 *)(iVar1 + 0x77) = 0x3f4cccce;
    *(undefined4 *)(iVar1 + 0x7b) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x7f) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x83) = 0x3f800000;
    FUN_100909a0(0x22,0x32,*(int *)(param_1 + 0x1c) + iVar2,*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x18),0xffffff9c,100,0,0,0);
    iVar1 = FUN_10086cf0(0x22,5);
    *(undefined1 *)(iVar1 + 0x76) = 1;
    *(undefined4 *)(iVar1 + 0x77) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x7b) = 0x3f4cccce;
    *(undefined4 *)(iVar1 + 0x7f) = 0x3f19999a;
    *(undefined4 *)(iVar1 + 0x83) = 0x3f800000;
  }
  return;
}


/* END FUNCTION 0x10071140 */
