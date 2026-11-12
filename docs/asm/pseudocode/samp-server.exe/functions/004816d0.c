/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004816d0
 * Name: FUN_004816d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_004816d0(void *this,undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,
            char *param_5,undefined1 param_6,undefined4 param_7,char *param_8)

{
  char cVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b176b;
  local_c = ExceptionList;
  iVar5 = 0;
  piVar2 = (int *)((int)this + 8);
  do {
    if (piVar2[-2] == 0) break;
    if (piVar2[-1] == 0) {
      iVar5 = iVar5 + 1;
      break;
    }
    if (*piVar2 == 0) {
      iVar5 = iVar5 + 2;
      break;
    }
    if (piVar2[1] == 0) {
      iVar5 = iVar5 + 3;
      break;
    }
    if (piVar2[2] == 0) {
      iVar5 = iVar5 + 4;
      break;
    }
    iVar5 = iVar5 + 5;
    piVar2 = piVar2 + 5;
  } while (iVar5 < 200);
  if (iVar5 == 200) {
    return 0;
  }
  ExceptionList = &local_c;
  this_00 = operator_new(0x7d);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00481450(this_00,param_5);
  }
  *(undefined4 **)((int)this + iVar5 * 4) = puVar3;
  puVar3[1] = 1;
  *(undefined4 *)(*(int *)((int)this + iVar5 * 4) + 8) = param_1;
  *(undefined4 *)(*(int *)((int)this + iVar5 * 4) + 0xc) = param_2;
  local_4 = 0xffffffff;
  if (param_3 != (char *)0x0) {
    pcVar4 = param_3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != param_3 + 1) {
      pcVar4 = param_3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00469e30((void *)(*(int *)((int)this + iVar5 * 4) + 0x10),(undefined4 *)param_3,
                   (int)pcVar4 - (int)(param_3 + 1));
      if (param_4 != (char *)0x0) {
        pcVar4 = param_4;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00469e30((void *)(*(int *)((int)this + iVar5 * 4) + 0x2c),(undefined4 *)param_4,
                     (int)pcVar4 - (int)(param_4 + 1));
      }
      *(undefined1 *)(*(int *)((int)this + iVar5 * 4) + 0x48) = param_6;
      *(undefined4 *)(*(int *)((int)this + iVar5 * 4) + 0x49) = param_7;
      if (param_8 == (char *)0x0) {
        *(undefined1 *)(*(int *)((int)this + iVar5 * 4) + 0x4d) = 0;
      }
      else {
        pcVar4 = (char *)(*(int *)((int)this + iVar5 * 4) + 0x4d);
        do {
          cVar1 = *param_8;
          param_8 = param_8 + 1;
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
      }
      FUN_00481410(*(LPVOID *)((int)this + iVar5 * 4));
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x004816d0 */
