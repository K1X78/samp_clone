/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ab60
 * Name: FUN_0041ab60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_0041ab60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = *in_EAX;
  if (((*(char *)(iVar1 + 0x7c) == '\0') && ((char)in_EAX[0x85] == '\0')) &&
     (*(code **)(iVar1 + 0x100) != (code *)0x0)) {
    iVar1 = (**(code **)(iVar1 + 0x100))
                      (*(undefined4 *)(iVar1 + 0x104),param_1,param_2,param_3,param_4,in_EAX[0x82]);
    if (iVar1 == 1) {
      FUN_00418b00((undefined **)"not authorized");
      in_EAX[1] = 0x17;
      return 1;
    }
    if ((iVar1 != 0) && (iVar1 != 2)) {
      iVar1 = 1;
      FUN_0041a9d0();
    }
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x0041ab60 */
