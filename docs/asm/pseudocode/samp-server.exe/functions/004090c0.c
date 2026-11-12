/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004090c0
 * Name: FUN_004090c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_004090c0(int param_1,int param_2,byte *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(iVar3 + 4 + param_2 * 8);
    iVar3 = *(int *)(iVar3 + param_2 * 8);
  }
  while( true ) {
    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, puVar1 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    if ((puVar1[4] == unaff_EBX) &&
       (iVar2 = FUN_004084a0((byte *)puVar1[3],param_3,unaff_EBX), iVar2 == 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}


/* END FUNCTION 0x004090c0 */
