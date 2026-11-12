/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450870
 * Name: FUN_00450870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00450870(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((int)this + 0xc27) != '\0') {
    uVar1 = FUN_0044eec0(&stack0x0000000c,(int *)((int)this + 0xc20));
    if ((((char)uVar1 != '\0') && (*(char *)((int)this + 0xc26) == '\0')) ||
       ((uVar1 = FUN_0044eef0(&stack0x0000000c,(int *)((int)this + 0xc20)), (char)uVar1 != '\0' &&
        (*(char *)((int)this + 0xc26) == '\x01')))) {
      FUN_0044dff0(*(void **)((int)this + 0xc1c),(byte *)(param_1 + 1),param_2 - 1);
      *(undefined1 *)((int)this + 0xc27) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x00450870 */
