/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004301d0
 * Name: FUN_004301d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_004301d0(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,byte param_6)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_ECX;
  
  piVar2 = FUN_00430190();
  bVar1 = FUN_004158b0(this,param_6);
  iVar3 = FUN_004197c0(param_5,param_4,param_2,(char *)piVar2,-4);
  FUN_0040d660(extraout_ECX,bVar1);
  return iVar3;
}


/* END FUNCTION 0x004301d0 */
