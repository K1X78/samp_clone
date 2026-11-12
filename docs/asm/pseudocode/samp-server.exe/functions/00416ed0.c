/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416ed0
 * Name: FUN_00416ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00416ed0(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  if ((int *)in_EAX[0x6a] != (int *)0x0) {
    in_EAX = (int *)in_EAX[0x6a];
  }
  iVar1 = 0;
  if (0 < in_EAX[0x86]) {
    piVar2 = (int *)in_EAX[0x87];
    do {
      if (unaff_EDI == *piVar2) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < in_EAX[0x86]);
  }
  iVar1 = FUN_004128e0(in_EAX[0x87],in_EAX[0x86] * 4 + 4);
  if (iVar1 == 0) {
    *(undefined1 *)(*in_EAX + 0x1e) = 1;
    return;
  }
  in_EAX[0x87] = iVar1;
  *(int *)(iVar1 + in_EAX[0x86] * 4) = unaff_EDI;
  in_EAX[0x86] = in_EAX[0x86] + 1;
  return;
}


/* END FUNCTION 0x00416ed0 */
