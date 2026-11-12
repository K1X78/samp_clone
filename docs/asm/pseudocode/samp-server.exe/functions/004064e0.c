/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004064e0
 * Name: FUN_004064e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004064e0(void *this,uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = FUN_00406190(this,param_1,unaff_EBX);
      iVar2 = FUN_00406190(extraout_ECX,param_2,unaff_EBX);
      if (iVar1 != iVar2) break;
      iVar3 = iVar3 + 1;
      this = (void *)param_3;
    } while (iVar3 < param_3);
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004064e0 */
