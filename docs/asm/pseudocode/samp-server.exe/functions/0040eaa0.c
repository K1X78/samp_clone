/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040eaa0
 * Name: FUN_0040eaa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040eaa0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) - param_1;
  iVar1 = in_EAX + 0x60;
  iVar2 = 10;
  do {
    uVar3 = CONCAT44(iVar1,in_EAX);
    if ((*(int *)(iVar1 + 0x10) != 0) &&
       (uVar3 = CONCAT44(iVar1,in_EAX), *(int *)(in_EAX + 0x54) < *(int *)(iVar1 + 0xc))) {
      uVar3 = FUN_0040e920(*(int *)(iVar1 + 0xc),iVar1);
      *(undefined4 *)((int)((ulonglong)uVar3 >> 0x20) + 0x10) = 0;
    }
    in_EAX = (int)uVar3;
    iVar1 = (int)((ulonglong)uVar3 >> 0x20) + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* END FUNCTION 0x0040eaa0 */
