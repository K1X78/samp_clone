/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec7a0
 * Name: FUN_100ec7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ec7a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  param_1[0xb3] = 0;
  *(uint *)(iVar1 + 0x110) = *(uint *)(iVar1 + 0x110) & 0xfffffffd;
  iVar2 = iVar1 + 0x248;
  if (((*(byte *)(param_1[200] + 0x40) & 3) != 0) && (**(int **)(iVar1 + 0x140) != 0)) {
    iVar2 = **(int **)(iVar1 + 0x140);
  }
  if (*(int *)(iVar1 + 0x188) == 0) {
    if ((*(int *)(iVar1 + 1000) == 4) || (*(int *)(iVar1 + 1000) == 3)) {
      iVar2 = FUN_100ddf80(iVar2);
      if (iVar2 != 0) {
        FUN_100d8ba0(iVar1,"Cannot rewind mime/post data");
        return 0x41;
      }
    }
    else if (*(code **)(iVar1 + 0x18c) == (code *)0x0) {
      if (*(code **)(iVar1 + 0x1c4) == (code *)0x0) {
        if ((*(code **)(iVar1 + 0x4b10) == _fread) &&
           (iVar2 = _fseek(*(FILE **)(iVar1 + 0x4b14),0,0), iVar2 != -1)) {
          return 0;
        }
        FUN_100d8ba0(iVar1,"necessary data rewind wasn\'t possible");
        return 0x41;
      }
      iVar2 = (**(code **)(iVar1 + 0x1c4))(iVar1,1,*(undefined4 *)(iVar1 + 500));
      FUN_100d8ae0(iVar1,"the ioctl callback returned %d\n",iVar2);
      if (iVar2 != 0) {
        FUN_100d8ba0(iVar1,"ioctl callback returned error %d",iVar2);
        return 0x41;
      }
    }
    else {
      iVar2 = (**(code **)(iVar1 + 0x18c))(*(undefined4 *)(iVar1 + 0x1e0),0,0,0);
      if (iVar2 != 0) {
        FUN_100d8ba0(iVar1,"seek callback returned error %d",iVar2);
        return 0x41;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100ec7a0 */
