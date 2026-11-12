/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427460
 * Name: FUN_00427460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00427460(char param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *unaff_EBX;
  int local_4;
  
  if (*unaff_EBX != 0) {
    return;
  }
  if (in_EAX == 0) {
    uVar2 = FUN_0041d790();
    *unaff_EBX = uVar2;
    return;
  }
  uVar2 = FUN_0040c740(in_EAX);
  uVar3 = FUN_004234f0(uVar2,&local_4,0);
  if (uVar3 != 0) {
    *unaff_EBX = uVar3;
    return;
  }
  iVar1 = ((in_EAX - uVar2) + -1) * 5;
  if (-1 < iVar1) {
    iVar4 = FUN_0040b9a0();
    if ((param_1 != *(char *)(iVar4 + iVar1)) || (iVar5 = FUN_00408f80(), iVar5 != param_2)) {
      uVar2 = FUN_00423650(local_4);
      *unaff_EBX = uVar2;
      if (uVar2 == 0) {
        *(char *)(iVar4 + iVar1) = param_1;
        FUN_00408fa0((undefined1 *)(iVar4 + 1 + iVar1));
      }
    }
    FUN_00427080(local_4);
    return;
  }
  uVar2 = FUN_0041d790();
  *unaff_EBX = uVar2;
  FUN_00427080(local_4);
  return;
}


/* END FUNCTION 0x00427460 */
