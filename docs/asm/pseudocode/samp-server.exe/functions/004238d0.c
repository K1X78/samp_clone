/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004238d0
 * Name: FUN_004238d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004238d0(void *this,int *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  void *local_4;
  
  local_4 = this;
  iVar1 = FUN_004234f0((uint)this,&local_4,in_EAX);
  if (iVar1 == 0) {
    iVar1 = FUN_0040ca20(unaff_EDI);
    *param_1 = iVar1;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x004238d0 */
