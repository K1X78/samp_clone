/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041abf0
 * Name: FUN_0041abf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0041abf0(undefined **param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_EBX;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_74;
  int local_70;
  int local_6c;
  int local_68 [26];
  
  local_70 = *unaff_EBX;
  local_74 = 0;
  if (unaff_EBX[0x10] == 0) {
    local_6c = FUN_004188c0(param_1,(double *)&stack0x00000008);
    if (local_6c != 0) {
      piVar5 = unaff_EBX + 0x72;
      *(char *)((int)unaff_EBX + 0x13) = *(char *)((int)unaff_EBX + 0x13) + '\x01';
      piVar3 = piVar5;
      piVar4 = local_68;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      piVar3 = piVar5;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
      }
      FUN_0044d340(unaff_EBX,local_6c,&local_74);
      iVar2 = local_70;
      FUN_00408130(local_70);
      FUN_00408130(iVar2);
      cVar1 = *(char *)((int)unaff_EBX + 0x13);
      piVar3 = local_68;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      *(char *)((int)unaff_EBX + 0x13) = cVar1 + -1;
    }
  }
  return;
}


/* END FUNCTION 0x0041abf0 */
