/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e950
 * Name: FUN_0040e950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040e950(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  
  if ((*(byte *)(*unaff_ESI + 0xc) & 2) == 0) {
    piVar1 = unaff_ESI + 0x18;
    iVar2 = 0;
    do {
      if (piVar1[4] == 0) goto LAB_0040ea36;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 6;
    } while (iVar2 < 10);
    iVar3 = -1;
    iVar2 = 0x7fffffff;
    if (unaff_ESI[0x1d] < 0x7fffffff) {
      iVar3 = 0;
      iVar2 = unaff_ESI[0x1d];
    }
    if (unaff_ESI[0x23] < iVar2) {
      iVar3 = 1;
      iVar2 = unaff_ESI[0x23];
    }
    if (unaff_ESI[0x29] < iVar2) {
      iVar3 = 2;
      iVar2 = unaff_ESI[0x29];
    }
    if (unaff_ESI[0x2f] < iVar2) {
      iVar3 = 3;
      iVar2 = unaff_ESI[0x2f];
    }
    if (unaff_ESI[0x35] < iVar2) {
      iVar3 = 4;
      iVar2 = unaff_ESI[0x35];
    }
    if (unaff_ESI[0x3b] < iVar2) {
      iVar3 = 5;
      iVar2 = unaff_ESI[0x3b];
    }
    if (unaff_ESI[0x41] < iVar2) {
      iVar3 = 6;
      iVar2 = unaff_ESI[0x41];
    }
    if (unaff_ESI[0x47] < iVar2) {
      iVar3 = 7;
      iVar2 = unaff_ESI[0x47];
    }
    if (unaff_ESI[0x4d] < iVar2) {
      iVar3 = 8;
      iVar2 = unaff_ESI[0x4d];
    }
    if (unaff_ESI[0x53] < iVar2) {
      iVar3 = 9;
    }
    else if (iVar3 < 0) {
      return;
    }
    piVar1 = unaff_ESI + (iVar3 * 3 + 0xc) * 2;
LAB_0040ea36:
    piVar1[3] = unaff_ESI[0x15];
    *(undefined1 *)(piVar1 + 2) = 0;
    piVar1[4] = param_3;
    piVar1[1] = param_2;
    *piVar1 = param_1;
    piVar1[5] = unaff_ESI[0x16];
    unaff_ESI[0x16] = unaff_ESI[0x16] + 1;
  }
  return;
}


/* END FUNCTION 0x0040e950 */
