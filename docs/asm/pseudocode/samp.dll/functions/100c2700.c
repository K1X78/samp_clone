/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2700
 * Name: FUN_100c2700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c2700(int *param_1)

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
  iVar2 = (*(code *)unaff_ESI[4])(*unaff_ESI,(int)unaff_ESI + 0x30f29);
  if ((iVar2 != 0) &&
     (iVar6 = *(int *)((int)unaff_ESI + iVar2 * 4 + 0x30f21), iVar6 == unaff_ESI[0xb])) {
    uVar5 = unaff_ESI[10];
    if (0x111 < uVar5) {
      uVar5 = 0x111;
    }
    iVar3 = (*(code *)unaff_ESI[3])(*unaff_ESI);
    iVar3 = iVar3 + -1;
    for (pcVar4 = (char *)(iVar3 + iVar6);
        (pcVar4 != (char *)(uVar5 + iVar3) &&
        (*pcVar4 == pcVar4[-1 - *(int *)((int)unaff_ESI + iVar2 * 4 + 0x30f25)]));
        pcVar4 = pcVar4 + 1) {
    }
    iVar6 = (int)pcVar4 - iVar3;
  }
  unaff_ESI[0xc] = unaff_ESI[0xc] + 1;
  *param_1 = iVar2;
  return iVar6;
}


/* END FUNCTION 0x100c2700 */
