/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00440220
 * Name: FUN_00440220
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00440220(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  
  iVar1 = *in_EAX;
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    piVar3 = (int *)(*(int *)(iVar1 + 8) + 0xc);
    do {
      for (puVar2 = *(undefined4 **)(*piVar3 + 0xc); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        FUN_004401c0(puVar2[2],param_1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar4 < *(int *)(iVar1 + 4));
  }
  return;
}


/* END FUNCTION 0x00440220 */
