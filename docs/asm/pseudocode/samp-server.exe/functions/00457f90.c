/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457f90
 * Name: FUN_00457f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00457f90(void *this,uint *param_1,uint *param_2)

{
  if (*(char *)((int)this + 0x80) != '\0') {
    FUN_004572d0(param_2,param_1,this,(uint *)((int)this + 0xc4),(uint *)((int)this + 0xf4),
                 (int)this + 0x124);
    return;
  }
  FUN_00453fc0(param_1,this,(uint *)((int)this + 0x20),param_2);
  return;
}


/* END FUNCTION 0x00457f90 */
