/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042d2a0
 * Name: FUN_0042d2a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0042d2a0(void *this,uint param_1,int param_2,int param_3,int *param_4)

{
  void *in_EAX;
  int *piVar1;
  uint uVar2;
  byte *unaff_ESI;
  
  if (unaff_ESI == (byte *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_004152f0(this,0x96,*(undefined4 **)((int)in_EAX + 0x10),param_1,unaff_ESI);
    if (piVar1 == (int *)0x0) {
      return 7;
    }
  }
  uVar2 = FUN_0042b0b0(in_EAX,piVar1,param_1,param_2,param_3,param_4);
  if (unaff_ESI != (byte *)0x0) {
    FUN_0040dc60();
  }
  return uVar2;
}


/* END FUNCTION 0x0042d2a0 */
