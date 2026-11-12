/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493f50
 * Name: FUN_00493f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493f50(void *this,ushort *param_1)

{
  ushort *this_00;
  short *psVar1;
  uint uVar2;
  
  if (param_1 != (ushort *)0x0) {
    this_00 = param_1 + 1;
    FUN_0044ef80(this_00,'\x01');
    FUN_00491fa0("[connection] incoming connection: %s id: %u");
    if ((*(int *)this != 0) && (*(int *)((int)this + 4) != 0)) {
      uVar2 = (uint)param_1[3];
      psVar1 = (short *)FUN_0044ef80(this_00,'\0');
      FUN_0046cec0(*(void **)((int)this + 4),(uint)*param_1,psVar1,uVar2);
      uVar2 = (uint)param_1[3];
      psVar1 = (short *)FUN_0044ef80(this_00,'\0');
      FUN_0046f6e0(*(void **)this,(uint)*param_1,psVar1,uVar2);
    }
  }
  return;
}


/* END FUNCTION 0x00493f50 */
