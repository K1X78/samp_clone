/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9000
 * Name: FUN_100d9000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100d9000(int *param_1)

{
  SOCKET s;
  int in_EAX;
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  s = param_1[in_EAX + 0x66];
  piVar3 = param_1 + (in_EAX + 0x1c) * 4;
  iVar4 = piVar3[1] - param_1[(in_EAX + 0x1c) * 4 + 2];
  if (((((*(byte *)(param_1[200] + 0x40) & 3) != 0) &&
       ((undefined1 *)param_1[in_EAX + 0x6c] == &LAB_100d8d90)) && ((*piVar3 == 0 || (iVar4 != 0))))
     && ((uVar1 = FUN_100cd750(s,0xffffffff,0xffffffff,0), uVar1 != 0xffffffff && ((uVar1 & 1) != 0)
         ))) {
    if (*piVar3 == 0) {
      iVar4 = *(int *)(*param_1 + 0x4d0) << 1;
      piVar3[1] = iVar4;
      iVar2 = (*(code *)PTR__malloc_101554b8)(iVar4);
      iVar4 = piVar3[1];
      *piVar3 = iVar2;
      piVar3[2] = 0;
      piVar3[3] = 0;
      if (iVar2 == 0) {
        piVar3[1] = 0;
        return;
      }
    }
    iVar4 = recv(s,(char *)(*piVar3 + piVar3[2]),iVar4,0);
    if (0 < iVar4) {
      piVar3[2] = piVar3[2] + iVar4;
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100d9000 */
