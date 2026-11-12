/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424af0
 * Name: FUN_00424af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00424af0(int *param_1,int *param_2,char *param_3)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  if ((in_EAX != (int *)0x0) && (*(char *)(*param_1 + 0x1e) == '\0')) {
    if (*(int *)(*param_1 + 0x50) < *in_EAX) {
      FUN_00418b00((undefined **)"too many terms in %s BY clause");
      return 1;
    }
    puVar3 = (undefined4 *)in_EAX[3];
    piVar1 = (int *)*param_2;
    iVar2 = 0;
    if (0 < *in_EAX) {
      do {
        if (*(ushort *)((int)puVar3 + 0xe) != 0) {
          if (*piVar1 < (int)(uint)*(ushort *)((int)puVar3 + 0xe)) {
            FUN_00419e90();
            return 1;
          }
          FUN_004240a0(param_1,param_3,(int)piVar1,(undefined4 *)*puVar3);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 5;
      } while (iVar2 < *in_EAX);
    }
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x00424af0 */
