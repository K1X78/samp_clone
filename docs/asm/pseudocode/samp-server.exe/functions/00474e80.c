/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00474e80
 * Name: FUN_00474e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __cdecl FUN_00474e80(int *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  void *this;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int local_20;
  int local_1c;
  char *local_18;
  uint *local_14;
  uint *local_10;
  void *local_c;
  uint local_8;
  
  iVar4 = *(int *)(DAT_004fc438 + 0x14);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = *(undefined1 *)(param_2 + 8);
  uVar3 = *(undefined2 *)(param_2 + 0xc);
  uVar9 = *(uint *)(param_2 + 0x18);
  local_c = (void *)CONCAT22(local_c._2_2_,*(undefined2 *)(param_2 + 4));
  local_8 = uVar9;
  FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_10);
  FUN_004031d0(local_10,&local_1c);
  if (local_1c < 1) {
LAB_00474f14:
    local_18 = &DAT_004fc400;
  }
  else {
    iVar8 = -(local_1c + 4U & 0xfffffffc);
    local_18 = &stack0xffffffc8;
    uVar9 = local_8;
    if (&stack0x00000000 == (undefined1 *)0x38) goto LAB_00474f14;
    *(int *)(&stack0xffffffc4 + iVar8) = local_1c + 1;
    *(undefined4 *)(&stack0xffffffc0 + iVar8) = 0;
    *(uint **)(&stack0xffffffbc + iVar8) = local_10;
    *(undefined1 **)(&stack0xffffffb8 + iVar8) = &stack0xffffffc8;
    *(undefined4 *)(&stack0xffffffb4 + iVar8) = 0x474f09;
    FUN_00403350(*(int *)(&stack0xffffffb8 + iVar8),*(uint **)(&stack0xffffffbc + iVar8),
                 *(int *)(&stack0xffffffc0 + iVar8),*(uint *)(&stack0xffffffc4 + iVar8));
    uVar9 = local_8;
  }
  FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_14);
  FUN_004031d0(local_14,&local_20);
  if (0 < local_20) {
    pcVar7 = &stack0xffffffc8;
    if (&stack0x00000000 != (undefined1 *)0x38) {
      FUN_00403350((int)&stack0xffffffc8,local_14,0,local_20 + 1);
      goto LAB_00474f6d;
    }
  }
  pcVar7 = &DAT_004fc400;
LAB_00474f6d:
  if ((ushort)local_c < 2000) {
    local_c = *(void **)(iVar4 + 0xf46280 + ((uint)local_c & 0xffff) * 4);
  }
  else {
    local_c = (void *)0x0;
  }
  if (local_18 != (char *)0x0) {
    pcVar5 = local_18;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 != local_18 + 1) {
      pcVar5 = local_18;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (((uint)((int)pcVar5 - (int)(local_18 + 1)) < 0x21) && (pcVar7 != (char *)0x0)) {
        pcVar5 = pcVar7;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (pcVar5 != pcVar7 + 1) {
          pcVar5 = pcVar7;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (((uint)((int)pcVar5 - (int)(pcVar7 + 1)) < 0x21) && (local_c != (void *)0x0)) {
            FUN_0049db00(local_c,uVar1,uVar3,local_18,pcVar7,
                         local_8 >> 0x10 & 0xff | (uVar9 & 0xff) << 0x10 | uVar9 & 0xff00ff00);
            this = *(void **)(DAT_004fc438 + 8);
            if (this != (void *)0x0) {
              iVar4 = *(int *)((int)this + 0x30d50);
              iVar8 = 0;
              if (-1 < iVar4) {
                do {
                  iVar6 = FUN_00463da0(this,(ushort)iVar8);
                  if (iVar6 != 0) {
                    FUN_0049dfc0(local_c,(ushort)iVar8);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 <= iVar4);
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00474e80 */
