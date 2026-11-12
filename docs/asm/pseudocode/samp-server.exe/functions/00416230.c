/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416230
 * Name: FUN_00416230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00416230(int param_1,int param_2,char param_3,int param_4)

{
  int *in_EAX;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((int *)in_EAX[0x6a] != (int *)0x0) {
    in_EAX = (int *)in_EAX[0x6a];
  }
  iVar3 = 0;
  if (0 < in_EAX[100]) {
    piVar1 = (int *)in_EAX[0x65];
    do {
      if ((*piVar1 == param_1) && (piVar1[1] == param_2)) {
        if (((char)piVar1[2] == '\0') && (param_3 == '\0')) {
          *(undefined1 *)(piVar1 + 2) = 0;
          return;
        }
        *(undefined1 *)(piVar1 + 2) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar3 < in_EAX[100]);
  }
  puVar2 = FUN_00412a50(iVar3,(in_EAX[100] + 1) * 0x10);
  in_EAX[0x65] = (int)puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + in_EAX[100] * 4;
    in_EAX[100] = in_EAX[100] + 1;
    *piVar1 = param_1;
    piVar1[1] = param_2;
    *(char *)(piVar1 + 2) = param_3;
    piVar1[3] = param_4;
    return;
  }
  in_EAX[100] = 0;
  *(undefined1 *)(*in_EAX + 0x1e) = 1;
  return;
}


/* END FUNCTION 0x00416230 */
