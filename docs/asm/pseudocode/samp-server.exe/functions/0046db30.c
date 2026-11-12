/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046db30
 * Name: FUN_0046db30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0046db30(void *this,float param_1)

{
  uint uVar1;
  
  if ((*(char *)((int)this + 0x68) != '\0') && (*(char *)((int)this + 0x69) != '\0')) {
    if (0.0 < *(float *)((int)this + 0x6a)) {
      *(float *)((int)this + 0x6a) = *(float *)((int)this + 0x6a) - param_1;
      return;
    }
    uVar1 = FUN_00401c90(this,(uint *)&param_1,-2);
    if (uVar1 == 0xc) {
      *(undefined1 *)((int)this + 0x69) = 1;
      *(float *)((int)this + 0x6a) = (float)(int)param_1 * 0.001;
      return;
    }
    *(undefined1 *)((int)this + 0x69) = 0;
    FUN_0046fc70(this,this,uVar1);
  }
  return;
}


/* END FUNCTION 0x0046db30 */
