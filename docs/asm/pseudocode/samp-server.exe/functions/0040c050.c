/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c050
 * Name: FUN_0040c050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040c050(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_68;
  int local_64;
  int local_60 [3];
  char local_54;
  int local_38;
  int local_34;
  int local_30 [12];
  
  piVar1 = (int *)FUN_0040ba90();
  piVar3 = piVar1;
  piVar4 = local_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_00407be0();
  piVar3 = piVar1 + 0xc;
  piVar4 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = 0xc;
  bVar5 = true;
  piVar3 = local_60;
  piVar4 = local_30;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if ((bVar5) && (local_54 != '\0')) {
    FUN_0040baa0((int *)0x0,0x28,1,&local_68);
    if ((local_68 == local_38) && (local_64 == local_34)) {
      iVar2 = 0xc;
      bVar5 = true;
      piVar3 = (int *)(unaff_EBX + 0x20);
      piVar4 = local_60;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        *param_1 = 1;
        piVar3 = local_60;
        piVar4 = (int *)(unaff_EBX + 0x20);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar4 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        }
        *(undefined2 *)(unaff_EBX + 0x18) = *(undefined2 *)(unaff_EBX + 0x2e);
      }
      return 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x0040c050 */
