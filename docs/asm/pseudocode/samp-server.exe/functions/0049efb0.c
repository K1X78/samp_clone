/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049efb0
 * Name: FUN_0049efb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049efb0(void *this,byte *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0049ed40(this,param_1);
  if ((iVar1 < 0) && (iVar1 = FUN_0049ede0(this,(char *)param_1), iVar1 < 0)) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(int *)((int)this + iVar1 * 0x3d + 0x29) != 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)((int)this + iVar1 * 0x3d + 0x29) = 1;
  }
  *(undefined4 *)((int)this + iVar1 * 0x3d + 0x2d) = 3;
  *(undefined4 *)((int)this + iVar1 * 0x3d + 0x35) = param_2;
  return 1;
}


/* END FUNCTION 0x0049efb0 */
