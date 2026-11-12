/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf390
 * Name: FUN_100cf390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cf390(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_EBX;
  uint uVar5;
  int local_4;
  
  local_4 = 0;
  if ((unaff_EBX != (char *)0x0) &&
     (pcVar2 = _strstr(unaff_EBX,"-----BEGIN PUBLIC KEY-----"), pcVar2 != (char *)0x0)) {
    iVar3 = (int)pcVar2 - (int)unaff_EBX;
    if ((iVar3 == 0) || (unaff_EBX[iVar3 + -1] == '\n')) {
      uVar5 = iVar3 + 0x1a;
      pcVar2 = _strstr(unaff_EBX + uVar5,"\n-----END PUBLIC KEY-----");
      if (pcVar2 != (char *)0x0) {
        iVar3 = (*(code *)PTR__malloc_101554b8)((((int)pcVar2 - (int)unaff_EBX) - uVar5) + 1);
        if (iVar3 != 0) {
          for (; uVar5 < (uint)((int)pcVar2 - (int)unaff_EBX); uVar5 = uVar5 + 1) {
            cVar1 = unaff_EBX[uVar5];
            if ((cVar1 != '\n') && (cVar1 != '\r')) {
              *(char *)(iVar3 + local_4) = cVar1;
              local_4 = local_4 + 1;
            }
          }
          *(undefined1 *)(iVar3 + local_4) = 0;
          uVar4 = FUN_100e3c50(iVar3,param_1,param_2);
          (*(code *)PTR__free_101554bc)(iVar3);
          return uVar4;
        }
        return 0x1b;
      }
    }
    return 0x3d;
  }
  return 0x3d;
}


/* END FUNCTION 0x100cf390 */
