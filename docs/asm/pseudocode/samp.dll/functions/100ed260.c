/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ed260
 * Name: FUN_100ed260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ed260(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  uint local_8;
  int local_4;
  
  bVar5 = false;
  if ((*(int *)(unaff_ESI + 0x90) == 0 && *(int *)(unaff_ESI + 0x94) == 0) &&
     (*(int *)(unaff_ESI + 0x98) == 0 && *(int *)(unaff_ESI + 0x9c) == 0)) {
    FUN_100e2ff0();
  }
  *in_EAX = *in_EAX | 2;
  if (*(int *)(unaff_ESI + 0x128) != 0) {
LAB_100ed494:
    iVar3 = FUN_100d8660(param_1,*(undefined4 *)(param_1 + 0x330),*(undefined4 *)(unaff_ESI + 300),
                         *(undefined4 *)(unaff_ESI + 0x128),&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(int *)(unaff_ESI + 0x548) != 0) {
      FUN_100d89b0();
    }
    uVar2 = *(uint *)(unaff_ESI + 0x98);
    *(uint *)(unaff_ESI + 0x98) = uVar2 + local_8;
    *(uint *)(unaff_ESI + 0x9c) =
         *(int *)(unaff_ESI + 0x9c) + ((int)local_8 >> 0x1f) + (uint)CARRY4(uVar2,local_8);
    if ((((*(int *)(unaff_ESI + 0x134) == 0) || (*(int *)(unaff_ESI + 0x13c) != 0)) &&
        (*(int *)(unaff_ESI + 0x98) == *(int *)(unaff_ESI + 0x4b00))) &&
       (*(int *)(unaff_ESI + 0x9c) == *(int *)(unaff_ESI + 0x4b04))) {
      *(undefined4 *)(unaff_ESI + 0x114) = 1;
      FUN_100d8ae0();
    }
    if (*(uint *)(unaff_ESI + 0x128) == local_8) {
      *(int *)(unaff_ESI + 300) = unaff_ESI + 0x858;
      *(undefined4 *)(unaff_ESI + 0x128) = 0;
      if (((*(int *)(unaff_ESI + 0x114) != 0) &&
          (*(uint *)(unaff_ESI + 0x110) = *(uint *)(unaff_ESI + 0x110) & 0xfffffffd,
          *(int *)(param_1 + 0x2cc) != 0)) && (iVar3 = FUN_100ec7a0(param_1), iVar3 != 0)) {
        return iVar3;
      }
    }
    else {
      *(uint *)(unaff_ESI + 0x128) = *(uint *)(unaff_ESI + 0x128) - local_8;
      *(int *)(unaff_ESI + 300) = *(int *)(unaff_ESI + 300) + local_8;
    }
    FUN_100e32a0();
    return 0;
  }
  *(int *)(unaff_ESI + 300) = unaff_ESI + 0x858;
  if (*(int *)(unaff_ESI + 0x114) == 0) {
    if ((*(int *)(unaff_ESI + 0xf4) == 2) && (*(int *)(*(int *)(unaff_ESI + 0x140) + 0x1b0) == 2)) {
      *(undefined4 *)(unaff_ESI + 0xf4) = 1;
      *(uint *)(unaff_ESI + 0x110) = *(uint *)(unaff_ESI + 0x110) & 0xfffffffd;
      uVar6 = FUN_100d8500();
      *(undefined8 *)(unaff_ESI + 0xec) = uVar6;
      *in_EAX = *in_EAX & 0xfffffffd;
      FUN_100d66d0();
      return 0;
    }
    if ((*(uint *)(*(int *)(param_1 + 800) + 0x40) & 0x40003) != 0) {
      bVar5 = *(int *)(*(int *)(unaff_ESI + 0x140) + 0x1b0) == 1;
    }
    iVar3 = FUN_100ec5b0(param_1,0x4000,&local_4);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_4 != 0) {
      if (0 < local_4) {
        *(int *)(unaff_ESI + 0x128) = local_4;
        if ((!bVar5) && (*(int *)(unaff_ESI + 0x3b8) != 0)) {
          if (*(int *)(unaff_ESI + 0x48a4) == 0) {
            iVar3 = (*(code *)PTR__malloc_101554b8)(*(int *)(unaff_ESI + 0x4d0) << 1);
            *(int *)(unaff_ESI + 0x48a4) = iVar3;
            if (iVar3 == 0) {
              FUN_100d8ba0();
              return 0x1b;
            }
          }
          iVar3 = 0;
          if (0 < local_4) {
            iVar4 = 0;
            do {
              cVar1 = *(char *)(iVar4 + *(int *)(unaff_ESI + 300));
              if (cVar1 == '\n') {
                *(undefined1 *)(iVar3 + *(int *)(unaff_ESI + 0x48a4)) = 0xd;
                iVar3 = iVar3 + 1;
                *(undefined1 *)(iVar3 + *(int *)(unaff_ESI + 0x48a4)) = 10;
                if (*(int *)(unaff_ESI + 0x3b8) == 0) {
                  uVar2 = *(uint *)(unaff_ESI + 0x4b00);
                  if ((uVar2 & *(uint *)(unaff_ESI + 0x4b04)) != 0xffffffff) {
                    *(uint *)(unaff_ESI + 0x4b00) = uVar2 + 1;
                    *(uint *)(unaff_ESI + 0x4b04) =
                         *(uint *)(unaff_ESI + 0x4b04) + (uint)(0xfffffffe < uVar2);
                  }
                }
              }
              else {
                *(char *)(iVar3 + *(int *)(unaff_ESI + 0x48a4)) = cVar1;
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 1;
            } while (iVar4 < local_4);
          }
          if (iVar3 != local_4) {
            *(undefined4 *)(unaff_ESI + 300) = *(undefined4 *)(unaff_ESI + 0x48a4);
            *(int *)(unaff_ESI + 0x128) = iVar3;
          }
        }
        goto LAB_100ed494;
      }
      goto LAB_100ed36a;
    }
  }
  if ((*(byte *)(unaff_ESI + 0x110) & 0x20) != 0) {
    return 0;
  }
LAB_100ed36a:
  *(uint *)(unaff_ESI + 0x110) = *(uint *)(unaff_ESI + 0x110) & 0xfffffffd;
  if ((*(int *)(param_1 + 0x2cc) != 0) && (iVar3 = FUN_100ec7a0(param_1), iVar3 != 0)) {
    return iVar3;
  }
  return 0;
}


/* END FUNCTION 0x100ed260 */
