/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdfb0
 * Name: FUN_100bdfb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_100bdfb0(int param_1)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  
  param_1 = *(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x40) + param_1;
  if (*(char *)(in_EAX + 0x1f) != '\0') {
    *(int *)(in_EAX + 0x3c) = param_1;
    return true;
  }
  if ((*(int *)(in_EAX + 0x34) == 0) || (*(int *)(in_EAX + 0x3c) != param_1)) {
    FUN_100bdf90();
    *(int *)(in_EAX + 0x3c) = param_1;
    uVar1 = (*(code *)*unaff_EBX)();
    *(undefined4 *)(in_EAX + 0x34) = uVar1;
  }
  return *(int *)(in_EAX + 0x34) != 0;
}


/* END FUNCTION 0x100bdfb0 */
