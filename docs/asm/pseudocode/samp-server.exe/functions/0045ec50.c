/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045ec50
 * Name: FUN_0045ec50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0045ec50(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0045e3d0((void *)((int)this + 0x40),param_1,&param_1);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return *(undefined4 *)(param_1 + 0x38);
  }
  *(int *)((int)this + 0x3dc) = *(int *)((int)this + 0x3dc) + 1;
  return 0xffffffff;
}


/* END FUNCTION 0x0045ec50 */
