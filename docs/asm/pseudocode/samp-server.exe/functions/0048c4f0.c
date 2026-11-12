/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c4f0
 * Name: FUN_0048c4f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0048c4f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *unaff_ESI;
  int iVar6;
  
  iVar6 = 0;
  uVar1 = (*(code *)unaff_ESI[2])(*unaff_ESI);
  unaff_ESI[10] = uVar1;
  iVar2 = (*(code *)unaff_ESI[4])(*unaff_ESI,unaff_ESI + 0xc3cd);
  if ((iVar2 != 0) && (iVar6 = unaff_ESI[iVar2 + 0xc3cb], iVar6 == unaff_ESI[0xb])) {
    uVar5 = unaff_ESI[10];
    if (0x111 < uVar5) {
      uVar5 = 0x111;
    }
    iVar3 = (*(code *)unaff_ESI[3])(*unaff_ESI);
    iVar3 = iVar3 + -1;
    for (pcVar4 = (char *)(iVar3 + iVar6);
        (pcVar4 != (char *)(uVar5 + iVar3) && (*pcVar4 == pcVar4[-1 - unaff_ESI[iVar2 + 0xc3cc]]));
        pcVar4 = pcVar4 + 1) {
    }
    iVar6 = (int)pcVar4 - iVar3;
  }
  unaff_ESI[0xc] = unaff_ESI[0xc] + 1;
  *param_1 = iVar2;
  return iVar6;
}


/* END FUNCTION 0x0048c4f0 */
