/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420d00
 * Name: FUN_00420d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00420d00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  
  iVar1 = *(int *)(unaff_EBX + 0x18);
  iVar4 = 0;
  while( true ) {
    if ((iVar4 == 0) || (iVar5 = 0, iVar1 < iVar4)) {
      iVar5 = iVar1;
    }
    for (iVar2 = *(int *)(unaff_EBX + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (((iVar4 == 0) || (iVar3 < iVar4)) && (iVar5 < iVar3)) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 == 0) break;
    FUN_0040fc30(*param_1);
    FUN_00420c90(param_1,iVar5);
    iVar4 = iVar5;
  }
  return;
}


/* END FUNCTION 0x00420d00 */
