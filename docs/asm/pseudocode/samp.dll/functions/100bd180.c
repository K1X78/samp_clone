/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bd180
 * Name: FUN_100bd180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bd180(int param_1,int param_2)

{
  int iVar1;
  undefined4 *_Memory;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_48;
  int local_44;
  int local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_c [3];
  
  _Memory = _calloc(1,0xa4);
  iVar1 = param_2;
  FUN_100bc1d0(&local_24,0xc);
  if ((local_24 != 1) || (local_20 != 0x1c)) {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe7;
    }
    *(undefined4 *)(param_1 + 6) = 9;
    if (_Memory != (undefined4 *)0x0) {
      _free(_Memory);
    }
    return 0;
  }
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  *_Memory = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[1] = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[2] = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[3] = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[4] = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[5] = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  _Memory[6] = param_2;
  if ((uint)_Memory[3] < 3) {
    iVar4 = 0;
    if (_Memory[3] != 0) {
      puVar5 = _Memory + 8;
      do {
        FUN_100bc1d0(local_c,0xc);
        if (local_c[0] == 6) {
          FUN_100bc1d0(&local_18,0xc);
          if ((local_18 != 1) || (local_14 != 4)) {
            if (*(int *)(param_1 + 2) == 0) {
              *(undefined4 *)(param_1 + 2) = 0xabe7;
            }
            *(undefined4 *)(param_1 + 6) = 4;
            _free(_Memory);
            return 0;
          }
          param_2 = 0;
          FUN_100bc1d0(&param_2,4);
          puVar5[-1] = param_2;
          FUN_100bc1d0(&local_3c,0xc);
          if ((local_3c != 2) || (0x20 < local_38)) {
            if (*(int *)(param_1 + 2) == 0) {
              *(undefined4 *)(param_1 + 2) = 0xabe7;
            }
            *(undefined4 *)(param_1 + 6) = 5;
            _free(_Memory);
            return 0;
          }
          FUN_100bc1d0(puVar5,local_38);
          FUN_100bc1d0(&local_3c,0xc);
          if ((local_3c != 2) || (0x20 < local_38)) {
            if (*(int *)(param_1 + 2) == 0) {
              *(undefined4 *)(param_1 + 2) = 0xabe7;
            }
            *(undefined4 *)(param_1 + 6) = 6;
            _free(_Memory);
            return 0;
          }
          FUN_100bc1d0(puVar5 + 8,local_38);
          FUN_100bc1d0(&local_48,0xc);
          if (local_48 == 3) {
            if (local_44 != 0) {
              FUN_100b36c0(local_44);
            }
          }
          else if (local_44 != 0) {
            if (*(int *)(param_1 + 2) == 0) {
              *(undefined4 *)(param_1 + 2) = 0xabe7;
            }
            *(undefined4 *)(param_1 + 6) = 7;
            _free(_Memory);
            return 0;
          }
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x11;
      } while (iVar4 != _Memory[3]);
    }
    FUN_100bc1d0(&local_48,0xc);
    iVar4 = local_44;
    if (local_48 == 3) {
      do {
        if (iVar4 == 0) {
          FUN_100bcdb0(_Memory);
          return 1;
        }
        FUN_100bc1d0(&local_30,0xc);
        if (local_30 == 0x253f2fc) {
          uVar3 = *(uint *)(iVar1 + 8);
          uVar2 = *(int *)(iVar1 + 4) + local_2c;
          if (uVar3 <= uVar2) goto LAB_100bd53c;
          *(uint *)(iVar1 + 4) = uVar2;
        }
        else if (local_30 == 0x253f2f6) {
          uVar3 = *(uint *)(iVar1 + 8);
          uVar2 = *(int *)(iVar1 + 4) + local_2c;
          if (uVar3 <= uVar2) goto LAB_100bd53c;
          *(uint *)(iVar1 + 4) = uVar2;
        }
        else if (local_30 == 0x120) {
          uVar3 = *(uint *)(iVar1 + 8);
          uVar2 = *(int *)(iVar1 + 4) + local_2c;
          if (uVar2 < uVar3) {
            *(uint *)(iVar1 + 4) = uVar2;
          }
          else {
LAB_100bd53c:
            *(undefined1 *)(iVar1 + 0xc) = 1;
            *(uint *)(iVar1 + 4) = uVar3;
          }
        }
        else {
          if (local_30 != 0x135) {
            if (*(int *)(param_1 + 2) == 0) {
              *(undefined4 *)(param_1 + 2) = 0xabe2;
            }
            *(int *)(param_1 + 6) = local_30;
            _free(_Memory);
            return 0;
          }
          uVar3 = *(uint *)(iVar1 + 8);
          uVar2 = *(int *)(iVar1 + 4) + local_2c;
          if (uVar3 <= uVar2) goto LAB_100bd53c;
          *(uint *)(iVar1 + 4) = uVar2;
        }
        iVar4 = (iVar4 + -0xc) - local_2c;
      } while( true );
    }
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe7;
    }
    *(undefined4 *)(param_1 + 6) = 8;
  }
  else {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe8;
    }
    *(undefined4 *)(param_1 + 6) = _Memory[3];
  }
  _free(_Memory);
  return 0;
}


/* END FUNCTION 0x100bd180 */
