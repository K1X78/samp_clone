/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a8c0
 * Name: FUN_0046a8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0046a8c0(byte param_1,byte param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (param_4 != 0) {
    do {
      if (iVar2 == 0) {
        *(byte *)(iVar1 + param_3) = *(byte *)(iVar1 + param_3) ^ param_1;
        iVar2 = 1;
      }
      else {
        *(byte *)(iVar1 + param_3) = *(byte *)(iVar1 + param_3) ^ param_2;
        iVar2 = iVar2 + -1;
      }
      *(undefined *)(iVar1 + param_3) = (&DAT_004cece8)[*(byte *)(iVar1 + param_3)];
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_4);
  }
  return;
}


/* END FUNCTION 0x0046a8c0 */
