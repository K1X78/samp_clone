/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413860
 * Name: FUN_00413860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00413860(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  if (*(short *)(unaff_EDI + 6) == 0) {
    puVar3 = FUN_00412930(0x3f8);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    *puVar3 = *unaff_EDI;
    *unaff_EDI = puVar3;
    unaff_EDI[4] = puVar3 + 2;
    *(undefined2 *)(unaff_EDI + 6) = 0x3f;
  }
  puVar1 = (uint *)unaff_EDI[4];
  *(short *)(unaff_EDI + 6) = *(short *)(unaff_EDI + 6) + -1;
  unaff_EDI[4] = puVar1 + 4;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar2 = (uint *)unaff_EDI[3];
  if (puVar2 == (uint *)0x0) {
    unaff_EDI[2] = puVar1;
    unaff_EDI[3] = puVar1;
    return;
  }
  if (((*(char *)((int)unaff_EDI + 0x1a) != '\0') && ((int)param_2 <= (int)puVar2[1])) &&
     (((int)param_2 < (int)puVar2[1] || (param_1 <= *puVar2)))) {
    *(undefined1 *)((int)unaff_EDI + 0x1a) = 0;
  }
  puVar2[2] = (uint)puVar1;
  unaff_EDI[3] = puVar1;
  return;
}


/* END FUNCTION 0x00413860 */
