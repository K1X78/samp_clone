/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ecb0
 * Name: FUN_0040ecb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0040ecb0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int *unaff_ESI;
  
  if ((-1 < in_EAX) && (in_EAX != 1)) {
    iVar1 = *unaff_ESI;
    *(int **)this = unaff_ESI;
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(in_EAX * 0x10 + *(int *)(iVar1 + 8));
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0040ecb0 */
