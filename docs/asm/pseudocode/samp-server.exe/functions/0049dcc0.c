/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049dcc0
 * Name: FUN_0049dcc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049dcc0(void *this,float param_1)

{
  float fVar1;
  int extraout_ECX;
  byte extraout_DL;
  float10 fVar2;
  
  if ((*(byte *)((int)this + 0x96) & 1) != 0) {
    fVar1 = param_1 * *(float *)((int)this + 0x98);
    fVar2 = FUN_0049d8d0((int)this);
    if (fVar2 <= (float10)fVar1) {
      *(byte *)(extraout_ECX + 0x96) = extraout_DL & 0xfe;
      *(undefined4 *)(extraout_ECX + 0x3a) = *(undefined4 *)(extraout_ECX + 0x86);
      *(undefined4 *)(extraout_ECX + 0x3e) = *(undefined4 *)(extraout_ECX + 0x8a);
      *(undefined4 *)(extraout_ECX + 0x42) = *(undefined4 *)(extraout_ECX + 0x8e);
      return 1;
    }
    fVar2 = (float10)1.0 / (fVar2 / (float10)fVar1);
    *(float *)(extraout_ECX + 0x3a) =
         (float)(((float10)*(float *)(extraout_ECX + 0x86) -
                 (float10)*(float *)(extraout_ECX + 0x3a)) * fVar2 +
                (float10)*(float *)(extraout_ECX + 0x3a));
    *(float *)(extraout_ECX + 0x3e) =
         (float)(((float10)*(float *)(extraout_ECX + 0x8a) -
                 (float10)*(float *)(extraout_ECX + 0x3e)) * fVar2 +
                (float10)*(float *)(extraout_ECX + 0x3e));
    *(float *)(extraout_ECX + 0x42) =
         (float)(((float10)*(float *)(extraout_ECX + 0x8e) -
                 (float10)*(float *)(extraout_ECX + 0x42)) * fVar2 +
                (float10)*(float *)(extraout_ECX + 0x42));
  }
  return 0;
}


/* END FUNCTION 0x0049dcc0 */
