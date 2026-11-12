/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004508e0
 * Name: FUN_004508e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004508e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0xdb0) = *(undefined4 *)(param_1 + 0xd9c);
  *(undefined4 *)(param_1 + 0xdb4) = *(undefined4 *)(param_1 + 0xda0);
  *(undefined4 *)(param_1 + 0xdb8) = *(undefined4 *)(param_1 + 0xda4);
  *(undefined4 *)(param_1 + 0xdbc) = *(undefined4 *)(param_1 + 0xda8);
  *(undefined4 *)(param_1 + 0xdc0) = *(undefined4 *)(param_1 + 0xdac);
  iVar2 = 0;
  do {
    uVar1 = FUN_0045af90();
    *(uint *)(param_1 + 0xd9c + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x14);
  uVar3 = FUN_0044e910();
  *(int *)(param_1 + 0xd98) = (int)uVar3 + 5000;
  return;
}


/* END FUNCTION 0x004508e0 */
