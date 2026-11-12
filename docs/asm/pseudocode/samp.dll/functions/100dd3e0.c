/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dd3e0
 * Name: FUN_100dd3e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100dd3e0(int param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  size_t _Size;
  uint local_4;
  
  iVar3 = 0;
  local_4 = 0;
  if (in_EAX == 0) {
    return 0;
  }
  do {
    if ((*(uint *)(unaff_ESI + 0x60) < *(uint *)(unaff_ESI + 100)) || (iVar3 != 0)) {
      uVar2 = (**(code **)(*(int *)(unaff_ESI + 0x58) + 4))(param_1,in_EAX,iVar3);
      if (uVar2 < 0x10000002) {
        if (0xfffffff < uVar2) goto LAB_100dd4f9;
        if (uVar2 == 0) {
          if (iVar3 != 0) {
            return local_4;
          }
          goto LAB_100dd439;
        }
      }
      else if (uVar2 == 0xffffffff) {
LAB_100dd4f9:
        if (local_4 != 0) {
          return local_4;
        }
        return uVar2;
      }
      local_4 = local_4 + uVar2;
      param_1 = param_1 + uVar2;
      in_EAX = in_EAX - uVar2;
    }
    else {
LAB_100dd439:
      iVar1 = *(int *)(unaff_ESI + 0x60);
      if (iVar1 != 0) {
        _Size = *(int *)(unaff_ESI + 100) - iVar1;
        if (_Size != 0) {
          _memmove((void *)(unaff_ESI + 0x68),(void *)(iVar1 + 0x68 + unaff_ESI),_Size);
        }
        *(undefined4 *)(unaff_ESI + 0x60) = 0;
        *(size_t *)(unaff_ESI + 100) = _Size;
      }
      uVar2 = *(uint *)(unaff_ESI + 100);
      if (0xff < uVar2) {
        if (local_4 == 0) {
          return 0xffffffff;
        }
        return local_4;
      }
      if (*(code **)(unaff_ESI + 0x14) == (code *)0x0) {
LAB_100dd49f:
        iVar3 = 1;
      }
      else {
        uVar2 = (**(code **)(unaff_ESI + 0x14))
                          (uVar2 + 0x68 + unaff_ESI,1,0x100 - uVar2,
                           *(undefined4 *)(unaff_ESI + 0x20));
        if (uVar2 < 0x10000002) {
          if (0xfffffff < uVar2) {
LAB_100dd4ea:
            if (local_4 != 0) {
              return local_4;
            }
            return uVar2;
          }
          if (uVar2 == 0) goto LAB_100dd49f;
        }
        else if (uVar2 == 0xffffffff) goto LAB_100dd4ea;
        *(int *)(unaff_ESI + 100) = *(int *)(unaff_ESI + 100) + uVar2;
      }
    }
    if (in_EAX == 0) {
      return local_4;
    }
  } while( true );
}


/* END FUNCTION 0x100dd3e0 */
