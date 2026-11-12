/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100139f0
 * Name: FUN_100139f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100139f0(int param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  
  *(undefined4 *)(*(int *)(param_1 + 0x1e) + 0xf4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1e) + 0x302) = 0;
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 0x26);
  do {
    if (piVar2[0x3ec] == 1) {
      if (*piVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*piVar2 + 8);
      }
      *(undefined1 *)(iVar1 + 0x1a) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 0x3ec);
  return;
}


/* END FUNCTION 0x100139f0 */
