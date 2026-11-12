/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100229f0
 * Name: FUN_100229f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100229f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = param_2;
  cVar2 = FUN_10020c00(param_2);
  if (cVar2 == '\0') {
    uVar3 = FUN_10021800(uVar3,&param_2);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  iVar4 = FUN_100218a0(uVar3);
  uVar1 = *(undefined4 *)(iVar4 + 7);
  thunk_FUN_10021ed0(uVar3);
  *(undefined1 *)(param_1 + 0x17) = 0;
  return uVar1;
}


/* END FUNCTION 0x100229f0 */
