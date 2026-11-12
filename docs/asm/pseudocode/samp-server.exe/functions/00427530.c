/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427530
 * Name: FUN_00427530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00427530(byte *param_1,undefined4 *param_2)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar1 = FUN_0040c740(in_EAX);
  iVar2 = FUN_004234f0(uVar1,&local_4,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0040b9a0();
    *param_1 = *(byte *)(((in_EAX - uVar1) + -1) * 5 + iVar2);
    if (param_2 != (undefined4 *)0x0) {
      uVar3 = FUN_00408f80();
      *param_2 = uVar3;
    }
    FUN_00427080(local_4);
    if ((*param_1 != 0) && (*param_1 < 6)) {
      return 0;
    }
    iVar2 = FUN_0041d790();
  }
  return iVar2;
}


/* END FUNCTION 0x00427530 */
