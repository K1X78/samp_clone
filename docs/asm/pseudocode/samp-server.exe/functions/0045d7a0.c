/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d7a0
 * Name: FUN_0045d7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0045d7a0(void *this,ushort *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0045c790(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)((int)this + 4) <= uVar1) {
    FUN_0045c990(this,*param_2);
    return *(int *)((int)this + 4) - 1;
  }
  FUN_0045ca80(this,*param_2,uVar1);
  return uVar1;
}


/* END FUNCTION 0x0045d7a0 */
