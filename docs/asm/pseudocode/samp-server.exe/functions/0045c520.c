/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c520
 * Name: FUN_0045c520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045c520(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)((int)this + 0x2e0) < param_1) {
    *(undefined4 *)((int)this + 0x2d8) = 500;
  }
  else {
    *(uint *)((int)this + 0x2d8) = param_1;
  }
  if (*(uint *)((int)this + 0x2d8) < 0x1e) {
    *(undefined4 *)((int)this + 0x2d8) = 0x1e;
  }
  uVar1 = (*(int *)((int)this + 0x724) + *(int *)((int)this + 0x720)) * 2;
  if (*(uint *)((int)this + 0x2d8) < uVar1) {
    *(uint *)((int)this + 0x2d8) = uVar1;
  }
  FUN_0045b290((int)this);
  return;
}


/* END FUNCTION 0x0045c520 */
