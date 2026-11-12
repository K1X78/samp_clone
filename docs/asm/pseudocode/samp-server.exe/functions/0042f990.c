/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042f990
 * Name: FUN_0042f990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0042f990(undefined4 param_1,undefined **param_2)

{
  int in_EAX;
  int iVar1;
  void *pvVar2;
  
  if (in_EAX != 0) {
    if (*(int *)(in_EAX + 0xd0) == 0) {
      iVar1 = FUN_00419760();
      *(int *)(in_EAX + 0xd0) = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined4 *)(in_EAX + 0x14) = param_1;
    if (param_2 != (undefined **)0x0) {
      pvVar2 = (void *)FUN_004188c0(param_2,(double *)&stack0x0000000c);
      FUN_0042e5e0((void *)0xffffffff,*(int *)(in_EAX + 0xd0),pvVar2);
      return;
    }
    FUN_0042e5e0((void *)0x0,*(int *)(in_EAX + 0xd0),(void *)0x0);
  }
  return;
}


/* END FUNCTION 0x0042f990 */
