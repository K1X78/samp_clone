/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b06b0
 * Name: FUN_100b06b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b06b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar2 = 0;
  piVar4 = (int *)(param_1 + 0x4c);
  puVar3 = (undefined4 *)(param_1 + 0x74);
  do {
    if (((-1 < iVar2) && (iVar2 < 10)) && (*piVar4 == 1)) {
      if ((undefined4 *)piVar4[0x8c] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar4[0x8c])(1);
        piVar4[0x8c] = 0;
      }
      puVar5 = puVar3;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *piVar4 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 0xd;
  } while (iVar2 < 10);
  return;
}


/* END FUNCTION 0x100b06b0 */
