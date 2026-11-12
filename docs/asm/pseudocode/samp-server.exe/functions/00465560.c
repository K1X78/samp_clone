/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465560
 * Name: FUN_00465560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465560(void *this,float param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_10;
  
  iVar3 = DAT_004fc438[2];
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x30d50);
    uVar1 = 0;
    if (-1 < iVar7) {
      uVar6 = 0;
      do {
        if ((uVar1 < 1000) && (*(int *)(iVar3 + 0x24de4 + uVar6 * 4) != 0)) {
          iVar5 = 0;
          piVar4 = (int *)((int)this + 8000000);
          local_10 = 2000;
          do {
            if (((*piVar4 != 0) && (*(int *)((int)this + (uVar6 * 2000 + iVar5) * 4) != 0)) &&
               (uVar2 = FUN_0049dcc0(*(void **)((int)this + ((uVar6 + 0x3e9) * 2000 + iVar5) * 4),
                                     param_1), (uVar2 & 1) != 0)) {
              FUN_0046b9a0((void *)DAT_004fc438[1],uVar6,iVar5);
              if ((void *)*DAT_004fc438 != (void *)0x0) {
                FUN_0046e680((void *)*DAT_004fc438,uVar6,iVar5);
              }
            }
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 1;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
        uVar1 = uVar1 + 1;
        uVar6 = (uint)uVar1;
      } while ((int)uVar6 <= iVar7);
    }
    piVar4 = (int *)((int)this + 0xf44340);
    iVar7 = 0;
    iVar3 = 2000;
    do {
      if (((piVar4[-0x1e8c50] == 0) && (*piVar4 != 0)) &&
         (uVar6 = FUN_0049dcc0((void *)piVar4[2000],param_1), (uVar6 & 1) != 0)) {
        FUN_0046b930((void *)DAT_004fc438[1],iVar7);
        if ((void *)*DAT_004fc438 != (void *)0x0) {
          FUN_0046e620((void *)*DAT_004fc438,iVar7);
        }
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


/* END FUNCTION 0x00465560 */
