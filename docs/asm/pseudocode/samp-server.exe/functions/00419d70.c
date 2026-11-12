/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419d70
 * Name: FUN_00419d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00419d70(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *unaff_ESI;
  int iVar3;
  
  iVar3 = *unaff_ESI;
  FUN_0040d750(unaff_ESI[10]);
  FUN_00408130(iVar3);
  iVar3 = param_1 * 2;
  *(short *)(unaff_ESI + 0xc) = (short)param_1;
  puVar1 = FUN_00417b70();
  unaff_ESI[10] = (int)puVar1;
  if ((puVar1 != (undefined4 *)0x0) && (0 < iVar3)) {
    piVar2 = puVar1 + 4;
    do {
      *(undefined2 *)(piVar2 + 3) = 1;
      *piVar2 = *unaff_ESI;
      piVar2 = piVar2 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* END FUNCTION 0x00419d70 */
