/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410320
 * Name: FUN_00410320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00410320(int *param_1,int param_2,int param_3,byte param_4,int param_5)

{
  int *in_EAX;
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  
  uVar2 = 0;
  for (; in_EAX != (int *)0x0; in_EAX = (int *)in_EAX[8]) {
    if (((((char)in_EAX[2] == (char)((param_2 != 0) + 'j')) &&
         ((*(byte *)((int)in_EAX + 9) & param_4) != 0)) &&
        (iVar1 = FUN_00410230(in_EAX[4]), iVar1 != 0)) &&
       (iVar1 = FUN_0044aa10(param_1,in_EAX,unaff_EBX,param_5), iVar1 != 0)) {
      uVar2 = uVar2 | *(uint *)(iVar1 + 0xc + param_3 * 4);
    }
  }
  return uVar2;
}


/* END FUNCTION 0x00410320 */
