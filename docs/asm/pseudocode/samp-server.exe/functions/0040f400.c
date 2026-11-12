/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f400
 * Name: FUN_0040f400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0040f400(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int in_EAX;
  int iVar3;
  int unaff_EBX;
  
  iVar1 = *(int *)((int)this + in_EAX * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    pbVar2 = *(byte **)(iVar1 + 0x18);
    iVar3 = FUN_004084a0(pbVar2,param_1,unaff_EBX);
    if ((iVar3 == 0) && (pbVar2[unaff_EBX] == 0)) break;
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  return iVar1;
}


/* END FUNCTION 0x0040f400 */
