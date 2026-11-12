/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d7c0
 * Name: FUN_0040d7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0040d7c0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  int *unaff_EBX;
  uint *unaff_EDI;
  
  if (in_EAX == 0) {
    uVar2 = *unaff_EDI;
    uVar3 = (int)this + 7U & 0xfffffff8;
    uVar1 = uVar2 + uVar3;
    if (uVar1 <= param_1) {
      *unaff_EDI = uVar1;
      return uVar2;
    }
    *unaff_EBX = *unaff_EBX + uVar3;
  }
  return in_EAX;
}


/* END FUNCTION 0x0040d7c0 */
