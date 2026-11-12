/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453e30
 * Name: FUN_00453e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00453e30(void *this,void *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00452300(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)((int)this + 4) <= uVar1) {
    FUN_004523b0(this,*param_2,(short)param_2[1],param_2[2]);
    return *(int *)((int)this + 4) - 1;
  }
  FUN_00452440(this,*param_2,(short)param_2[1],param_2[2],uVar1);
  return uVar1;
}


/* END FUNCTION 0x00453e30 */
