/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a2ab6
 * Name: __expandtime
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
__expandtime(void *this,int param_1,undefined2 *param_2,int param_3,int param_4)

{
  char in_AL;
  char *pcVar1;
  uint *unaff_EBX;
  int iVar2;
  uint uVar3;
  
  if (in_AL < '[') {
    if (in_AL == 'Z') {
LAB_004a2ca7:
      ___tzset();
      pcVar1 = (&PTR_DAT_004ec790)[*(int *)(param_2 + 0x10) != 0];
      goto LAB_004a2d0c;
    }
    if (in_AL < 'N') {
      if (in_AL != 'M') {
        if (in_AL == '%') {
          **(undefined1 **)this = 0x25;
          *(int *)this = *(int *)this + 1;
          *unaff_EBX = *unaff_EBX - 1;
          return 1;
        }
        if (in_AL == 'A') {
          pcVar1 = *(char **)(param_3 + 0x1c + *(int *)(param_2 + 0xc) * 4);
        }
        else {
          if (in_AL != 'B') {
            if (in_AL != 'H') {
              if (in_AL != 'I') {
                return 1;
              }
              goto LAB_004a2c8d;
            }
            uVar3 = 2;
            goto LAB_004a2b7e;
          }
          pcVar1 = *(char **)(param_3 + 0x68 + *(int *)(param_2 + 8) * 4);
        }
        goto LAB_004a2d0c;
      }
      uVar3 = 2;
    }
    else if (in_AL == 'S') {
      uVar3 = 2;
    }
    else {
      if ((in_AL == 'U') || (in_AL == 'W')) goto LAB_004a2c8d;
      if (in_AL == 'X') {
LAB_004a2b8b:
        iVar2 = 2;
LAB_004a2b93:
        iVar2 = __store_winword(param_1,iVar2,param_2,this,unaff_EBX,param_3);
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      }
      if (in_AL != 'Y') {
        return 1;
      }
      uVar3 = 4;
    }
LAB_004a2b7e:
    __store_num(unaff_EBX,uVar3,param_4);
  }
  else {
    if (in_AL < 'n') {
      if (in_AL == 'm') {
LAB_004a2c8d:
        uVar3 = 2;
        goto LAB_004a2b7e;
      }
      if (in_AL == 'a') {
        pcVar1 = *(char **)(param_3 + *(int *)(param_2 + 0xc) * 4);
      }
      else {
        if (in_AL != 'b') {
          if (in_AL == 'c') {
            iVar2 = __store_winword(param_1,(uint)(param_4 != 0),param_2,this,unaff_EBX,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            if (*unaff_EBX == 0) {
              return 0;
            }
            **(undefined1 **)this = 0x20;
            *(int *)this = *(int *)this + 1;
            *unaff_EBX = *unaff_EBX - 1;
            goto LAB_004a2b8b;
          }
          if (in_AL == 'd') {
            uVar3 = 2;
          }
          else {
            if (in_AL != 'j') {
              return 1;
            }
            uVar3 = 3;
          }
          goto LAB_004a2b7e;
        }
        pcVar1 = *(char **)(param_3 + 0x38 + *(int *)(param_2 + 8) * 4);
      }
    }
    else {
      if (in_AL != 'p') {
        if (in_AL == 'w') {
          uVar3 = 1;
          goto LAB_004a2b7e;
        }
        if (in_AL == 'x') {
          if (param_4 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = 1;
          }
          goto LAB_004a2b93;
        }
        if (in_AL != 'y') {
          if (in_AL != 'z') {
            return 1;
          }
          goto LAB_004a2ca7;
        }
        goto LAB_004a2c8d;
      }
      if (*(int *)(param_2 + 4) < 0xc) {
        pcVar1 = *(char **)(param_3 + 0x98);
      }
      else {
        pcVar1 = *(char **)(param_3 + 0x9c);
      }
    }
LAB_004a2d0c:
    __store_str(this,pcVar1);
  }
  return 1;
}


/* END FUNCTION 0x004a2ab6 */
