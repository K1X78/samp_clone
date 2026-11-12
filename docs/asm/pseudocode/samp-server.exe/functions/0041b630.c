/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041b630
 * Name: FUN_0041b630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_0041b630(int param_1,int param_2)

{
  char *in_EAX;
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar1 = FUN_00408380(in_EAX);
  piVar2 = (int *)FUN_00409170();
  if (((piVar2 == (int *)0x0) && (param_2 != 0)) && (piVar2 = FUN_00417b70(), piVar2 != (int *)0x0))
  {
    piVar5 = piVar2 + 0xf;
    *piVar2 = (int)piVar5;
    piVar2[5] = (int)piVar5;
    piVar2[10] = (int)piVar5;
    *(undefined1 *)(piVar2 + 1) = 1;
    *(undefined1 *)(piVar2 + 6) = 2;
    *(undefined1 *)(piVar2 + 0xb) = 3;
    for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar5 = *(undefined4 *)in_EAX;
      in_EAX = in_EAX + 4;
      piVar5 = (int *)((int)piVar5 + 4);
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)piVar5 = *in_EAX;
      in_EAX = in_EAX + 1;
      piVar5 = (int *)((int)piVar5 + 1);
    }
    *(undefined1 *)(uVar1 + *piVar2) = 0;
    iVar3 = FUN_00412f40((void *)(param_1 + 400),(byte *)*piVar2,(int)piVar2);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      FUN_00408130(param_1);
      return (int *)0x0;
    }
  }
  return piVar2;
}


/* END FUNCTION 0x0041b630 */
