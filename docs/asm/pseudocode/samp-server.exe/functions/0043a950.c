/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043a950
 * Name: FUN_0043a950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0043a950(void *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  *param_2 = 0;
  iVar1 = FUN_0043a410();
  if (iVar1 == 0) {
    iVar1 = FUN_00419760();
    FUN_0042e5e0((void *)0xffffffff,iVar1,param_1);
    pcVar2 = (char *)FUN_0041fe60();
    if (pcVar2 == (char *)0x0) {
      uVar3 = 7;
    }
    else {
      uVar3 = FUN_0043a5f0(pcVar2,param_2,(byte *)0x0);
      if ((uVar3 == 0) &&
         (iVar1 = *(int *)(*(int *)(*param_2 + 8) + 0xc), (*(byte *)(iVar1 + 0x4a) & 1) == 0)) {
        *(undefined1 *)(iVar1 + 0x49) = 2;
        FUN_0040d430();
        FUN_004340c0(0);
        return;
      }
    }
    FUN_0040d430();
    FUN_004340c0(uVar3);
  }
  return;
}


/* END FUNCTION 0x0043a950 */
