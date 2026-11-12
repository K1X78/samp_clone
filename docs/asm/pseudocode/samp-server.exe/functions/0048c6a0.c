/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c6a0
 * Name: FUN_0048c6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048c6a0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(in_EAX * 0x30 + 0x54c + (int)this);
  uVar5 = *(undefined4 *)(in_EAX * 0x30 + 0x550 + (int)this);
  *(int *)((int)this + 0x18) = in_EAX;
  do {
    iVar4 = iVar1;
    if (*(int *)((int)this + in_EAX * 0x30 + 0x53c) != 0) {
      *(int *)((int)this + iVar4 * 0x30 + 0x54c) = iVar4 + -1;
      *(undefined4 *)((int)this + iVar4 * 0x30 + 0x550) = 0xffffffff;
      *(undefined4 *)((int)this + iVar4 * 0x30 + 0x53c) = 0;
      if (*(int *)((in_EAX * 3 + 0x54) * 0x10 + (int)this) != 0) {
        *(undefined4 *)((int)this + iVar4 * 0x30 + 0x50c) = 0;
        *(undefined4 *)((int)this + iVar4 * 0x30 + 0x51c) =
             *(undefined4 *)((int)this + in_EAX * 0x30 + 0x544);
        *(undefined4 *)((int)this + iVar4 * 0x30 + 0x520) =
             *(undefined4 *)((int)this + in_EAX * 0x30 + 0x548);
      }
    }
    iVar3 = iVar4 * 0x30;
    iVar1 = *(int *)(iVar3 + 0x54c + (int)this);
    uVar2 = *(undefined4 *)(iVar3 + 0x550 + (int)this);
    *(int *)(iVar3 + 0x54c + (int)this) = in_EAX;
    *(undefined4 *)(iVar3 + 0x550 + (int)this) = uVar5;
    uVar5 = uVar2;
    in_EAX = iVar4;
  } while (iVar4 != 0);
  *param_1 = *(undefined4 *)((int)this + 0x550);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x54c);
  return;
}


/* END FUNCTION 0x0048c6a0 */
