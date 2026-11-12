/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429b20
 * Name: FUN_00429b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00429b20(void *this,int param_1,int param_2,undefined4 param_3)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_4;
  
  local_4 = param_2;
  if (0 < param_2) {
    while (iVar2 = param_2 + -1, *(int *)((int)this + 0x10) != 0) {
      if ((int)in_EAX < 1) {
        FUN_004195e0((undefined **)"%d of %d pages missing from overflow list starting at %d");
        return;
      }
      iVar1 = FUN_00419650(param_3,(int)this);
      if (iVar1 != 0) {
        return;
      }
      iVar1 = FUN_004234f0(in_EAX,&local_10,0);
      if (iVar1 != 0) {
        FUN_004195e0((undefined **)"failed to get page %d");
        return;
      }
      local_c = FUN_0040b9a0();
      if (param_1 == 0) {
        param_2 = iVar2;
        if ((*(char *)(*(int *)this + 0x14) != '\0') && (0 < iVar2)) {
          FUN_00408f80();
          FUN_00429a90((int)this);
        }
      }
      else {
        iVar1 = FUN_00408f80();
        if (*(char *)(*(int *)this + 0x14) != '\0') {
          FUN_00429a90((int)this);
        }
        if ((int)((*(ushort *)(*(int *)this + 0x18) >> 2) - 2) < iVar1) {
          FUN_004195e0((undefined **)"freelist leaf count too big on page %d");
          param_2 = param_2 + -2;
        }
        else {
          local_14 = iVar1;
          if (0 < iVar1) {
            do {
              FUN_00408f80();
              if (*(char *)(*(int *)this + 0x14) != '\0') {
                FUN_00429a90((int)this);
              }
              FUN_00419650(param_3,(int)this);
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          param_2 = iVar2 - iVar1;
        }
      }
      in_EAX = FUN_00408f80();
      FUN_00427080(local_10);
      if (param_2 < 1) {
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x00429b20 */
