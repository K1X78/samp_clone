/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494040
 * Name: FUN_00494040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00494040(void *this,uint param_1)

{
  undefined4 uVar1;
  undefined2 unaff_BX;
  undefined4 unaff_EBP;
  undefined1 local_8 [8];
  
  if ((ushort)param_1 < 1000) {
    (**(code **)(**(int **)((int)this + 0x40) + 0xec))(local_8,param_1 & 0xffff);
    uVar1 = FUN_0044eef0(&stack0xfffffff0,(int *)&DAT_004ebd4c);
    if ((char)uVar1 != '\0') {
      (**(code **)(**(int **)((int)this + 0x40) + 0x2c))(unaff_EBP,unaff_BX);
    }
    if (*(int *)((int)*(void **)((int)this + 8) + (param_1 & 0xffff) * 4 + 0x24de4) != 0) {
      FUN_00466550(*(void **)((int)this + 8),param_1,2);
    }
  }
  return;
}


/* END FUNCTION 0x00494040 */
