/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463e20
 * Name: FUN_00463e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_00463e20(void *this,char *param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined1 param_8)

{
  char cVar1;
  int iVar2;
  void *this_00;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  
  uVar6 = 0;
  do {
    if (*(int *)((int)this + (uVar6 & 0xffff) * 4) == 0) break;
    uVar6 = uVar6 + 1;
  } while ((ushort)uVar6 < 0x400);
  if ((short)uVar6 != 0x400) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_1 + 1))));
    uVar5 = uVar6 & 0xffff;
    *(char **)((int)this + uVar5 * 0x21 + 0x1000) = pcVar3;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)this + uVar5 * 0x21 + 0x1004) = param_2;
    *(float *)((int)this + uVar5 * 0x21 + 0x1008) = param_3;
    *(float *)((int)this + uVar5 * 0x21 + 0x100c) = param_4;
    *(float *)((int)this + uVar5 * 0x21 + 0x1010) = param_5;
    *(float *)((int)this + uVar5 * 0x21 + 0x1014) = param_6;
    *(undefined4 *)((int)this + uVar5 * 0x21 + 0x1019) = param_7;
    *(undefined1 *)((int)this + uVar5 * 0x21 + 0x1018) = param_8;
    iVar4 = (uVar5 + 0x7d) * 0x21;
    *(undefined2 *)(iVar4 + (int)this) = 0xffff;
    *(undefined2 *)((int)this + uVar5 * 0x21 + 0x101f) = 0xffff;
    *(undefined4 *)((int)this + uVar5 * 4) = 1;
    iVar2 = *(int *)(DAT_004fc438 + 8);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x30d50);
      uVar5 = 0;
      if (-1 < iVar4) {
        do {
          if (((((ushort)uVar5 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uVar5 & 0xffff) * 4) != 0))
              && (this_00 = *(void **)(iVar2 + 0x25d84 + (uVar5 & 0xffff) * 4),
                 this_00 != (void *)0x0)) &&
             (((*(char *)((int)this_00 + 0x2f95) != '\0' &&
               (*(char *)((int)this_00 + 0x2f95) != '\t')) &&
              (fVar7 = FUN_004840f0((int)this_00,param_3,param_4,param_5),
              fVar7 < (float10)param_6 != (fVar7 == (float10)param_6))))) {
            FUN_00483c90(this_00,uVar6);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 <= iVar4);
      }
    }
    return CONCAT22((short)((uint)iVar4 >> 0x10),(short)uVar6);
  }
  return 0xffff;
}


/* END FUNCTION 0x00463e20 */
