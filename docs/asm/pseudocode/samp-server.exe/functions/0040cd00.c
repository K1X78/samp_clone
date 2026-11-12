/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cd00
 * Name: FUN_0040cd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0040cd00(void *this,int param_1)

{
  int iVar1;
  int *extraout_ECX;
  int extraout_EDX;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if ((unaff_EBX != 0) && (*(char *)(iVar2 + 0x10) != '\0')) {
    return 8;
  }
  if (unaff_EDI == 1) {
    iVar1 = FUN_0040ca90();
    this = extraout_ECX;
    iVar2 = extraout_EDX;
    if (iVar1 == 0) {
      return 0x10;
    }
  }
  *(int *)((int)this + 0x14) = unaff_EDI;
  *(undefined2 *)((int)this + 0x5c) = 0xffff;
  *(int *)((int)this + 0x10) = param_1;
  *(int *)this = unaff_ESI;
  *(int *)((int)this + 4) = iVar2;
  *(char *)((int)this + 0x40) = (char)unaff_EBX;
  iVar1 = *(int *)(iVar2 + 8);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    *(void **)(iVar1 + 0xc) = this;
  }
  *(void **)(iVar2 + 8) = this;
  *(undefined1 *)((int)this + 0x43) = 0;
  *(int *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x1c) = 0;
  return 0;
}


/* END FUNCTION 0x0040cd00 */
