/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ee70
 * Name: FUN_0042ee70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0042ee70(void *this,undefined4 param_1)

{
  void *in_EAX;
  char *pcVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0xc4) != 0) {
    pcVar1 = FUN_00412a70();
    if (pcVar1 == (char *)0x0) {
      return;
    }
    (**(code **)((int)this + 0xc4))(*(undefined4 *)((int)this + 0xcc),this,param_1,pcVar1);
    FUN_00408130((int)this);
  }
  if (*(int *)((int)this + 200) != 0) {
    iVar2 = FUN_00419760();
    FUN_0042e5e0((void *)0xffffffff,iVar2,in_EAX);
    iVar2 = FUN_0041fe60();
    if (iVar2 != 0) {
      (**(code **)((int)this + 200))
                (*(undefined4 *)((int)this + 0xcc),this,
                 *(undefined1 *)(*(int *)(*(int *)((int)this + 8) + 0xc) + 0x49),iVar2);
    }
    FUN_0040d430();
  }
  return;
}


/* END FUNCTION 0x0042ee70 */
