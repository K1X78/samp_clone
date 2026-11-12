/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a7e0
 * Name: FUN_0048a7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __fastcall FUN_0048a7e0(int param_1)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  int iVar2;
  
  iVar2 = *(int *)(in_EAX + 0x44) + *(int *)(in_EAX + 0x40) + param_1;
  if (*(char *)(in_EAX + 0x1f) != '\0') {
    *(int *)(in_EAX + 0x3c) = iVar2;
    return true;
  }
  if ((*(int *)(in_EAX + 0x34) == 0) || (*(int *)(in_EAX + 0x3c) != iVar2)) {
    FUN_0048a7c0();
    *(int *)(in_EAX + 0x3c) = iVar2;
    uVar1 = (*(code *)*unaff_EBX)();
    *(undefined4 *)(in_EAX + 0x34) = uVar1;
  }
  return *(int *)(in_EAX + 0x34) != 0;
}


/* END FUNCTION 0x0048a7e0 */
