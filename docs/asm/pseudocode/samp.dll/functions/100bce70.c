/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bce70
 * Name: FUN_100bce70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bce70(int param_1,size_t param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  size_t *psVar4;
  void *pvVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  
  piVar3 = (int *)FUN_100bc600(param_2);
  *(int **)(param_1 + 0x50) = piVar3;
  if (*piVar3 != 3) {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabf2;
    }
    *(undefined4 *)(param_1 + 6) = 0;
    return 0;
  }
  uVar6 = piVar3[5] - piVar3[4];
  do {
    if (uVar6 < 0xd) {
      return 1;
    }
    FUN_100bc1d0(&local_c,0xc);
    if (local_c == 0x50e) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 0x60) = 1;
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(size_t *)(param_1 + 0x61) = param_2;
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(size_t *)(param_1 + 0x65) = param_2;
      param_2 = 0;
      FUN_100bc1d0(&param_2,4);
      *(size_t *)(param_1 + 0x69) = param_2;
      if (99999 < *(uint *)(param_1 + 0x65)) {
        if (*(int *)(param_1 + 2) != 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 2) = 0xabe5;
        return 0;
      }
      if (*(uint *)(param_1 + 0x65) != 0) {
        do {
          psVar4 = _calloc(1,0xc);
          param_2 = 0;
          FUN_100bc1d0(&param_2,4);
          *psVar4 = param_2;
          param_2 = 0;
          FUN_100bc1d0(&param_2,4);
          psVar4[1] = param_2;
          pvVar5 = _calloc(*psVar4,4);
          psVar4[2] = (size_t)pvVar5;
          FUN_100bc1d0(pvVar5,*psVar4 << 2);
          FUN_100bce10(psVar4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x65));
      }
    }
    else if (local_c == 0x253f2fd) {
      iVar1 = *(int *)(param_1 + 0x50);
      uVar6 = *(int *)(iVar1 + 0x10) + local_8;
      if (uVar6 < *(uint *)(iVar1 + 0x14)) {
        *(uint *)(iVar1 + 0x10) = uVar6;
      }
      else {
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x14);
        *(undefined1 *)(iVar1 + 0x18) = 1;
      }
    }
    else if (local_c == 0x253f2f9) {
      if (local_8 - 4U >> 2 == *(uint *)(param_1 + 0x12)) {
        iVar1 = *(int *)(param_1 + 0x50);
        *(undefined1 *)(param_1 + 0x1b) = 1;
        uVar6 = *(int *)(iVar1 + 0x10) + 4;
        if (uVar6 < *(uint *)(iVar1 + 0x14)) {
          *(uint *)(iVar1 + 0x10) = uVar6;
        }
        else {
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x14);
          *(undefined1 *)(iVar1 + 0x18) = 1;
        }
        pvVar5 = _calloc(*(size_t *)(param_1 + 0x12),4);
        *(void **)(param_1 + 0x20) = pvVar5;
        if ((pvVar5 == (void *)0x0) ||
           (uVar6 = *(int *)(param_1 + 0x12) << 2,
           (uint)(*(int *)(*(int *)(param_1 + 0x50) + 0x14) -
                 *(int *)(*(int *)(param_1 + 0x50) + 0x10)) < uVar6)) {
          if (*(int *)(param_1 + 2) == 0) {
            *(undefined4 *)(param_1 + 2) = 0xabe1;
          }
          *(undefined4 *)(param_1 + 6) = 0x253f2f9;
          return 0;
        }
        FUN_100bc1d0(pvVar5,uVar6);
      }
    }
    else if (local_c == 0x116) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
      cVar2 = FUN_100bc760(*(int *)(param_1 + 0x50) + 0xc);
      if ((cVar2 == '\0') || (local_8 != *(int *)(*(int *)(param_1 + 0x50) + 0x10) - iVar1)) {
        if (*(int *)(param_1 + 2) == 0) {
          *(undefined4 *)(param_1 + 2) = 0xabe7;
        }
        *(undefined4 *)(param_1 + 6) = 0x116;
        return 0;
      }
    }
    else {
      if ((local_c != 0x105) && (local_c != 0x253f2f8)) {
        if (*(int *)(param_1 + 2) == 0) {
          *(undefined4 *)(param_1 + 2) = 0xabe2;
        }
        *(uint *)(param_1 + 6) = local_c;
        return 0;
      }
      FUN_100b36c0(local_8);
    }
    uVar6 = *(int *)(*(int *)(param_1 + 0x50) + 0x14) - *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  } while( true );
}


/* END FUNCTION 0x100bce70 */
