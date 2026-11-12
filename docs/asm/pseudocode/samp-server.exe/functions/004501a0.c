/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004501a0
 * Name: FUN_004501a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004501a0(void *this,byte *param_1,uint param_2)

{
  FUN_004629a0((LPCRITICAL_SECTION)((int)this + 0x34c));
  FUN_0044d9d0((undefined4 *)((int)this + 0x120));
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    FUN_0044dff0((undefined4 *)((int)this + 0x120),param_1,param_2);
  }
  FUN_004629b0((LPCRITICAL_SECTION)((int)this + 0x34c));
  return;
}


/* END FUNCTION 0x004501a0 */
