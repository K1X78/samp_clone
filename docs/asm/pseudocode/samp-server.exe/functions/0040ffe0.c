/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ffe0
 * Name: FUN_0040ffe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040ffe0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  char *pcVar1;
  short *psVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_004223d0(param_1,(int *)*param_2,param_3,param_4);
    FUN_004223d0(param_1,(int *)param_2[4],param_3,param_4);
    FUN_004223d0(param_1,(int *)param_2[6],param_3,param_4);
    pcVar1 = FUN_00422300(param_1,(char *)param_2[5],param_3,param_4);
    param_2[5] = pcVar1;
    pcVar1 = FUN_00422300(param_1,(char *)param_2[3],param_3,param_4);
    param_2[3] = pcVar1;
    FUN_0040ffe0(param_1,(undefined4 *)param_2[7],param_3,param_4);
    psVar2 = (short *)param_2[2];
    if ((psVar2 != (short *)0x0) && (param_2 = (undefined4 *)(int)*psVar2, 0 < (int)param_2)) {
      psVar2 = psVar2 + 0xc;
      do {
        FUN_0040ffe0(param_1,*(undefined4 **)psVar2,param_3,param_4);
        psVar2 = psVar2 + 0x1c;
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  return;
}


/* END FUNCTION 0x0040ffe0 */
