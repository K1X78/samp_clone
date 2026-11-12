/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041bff0
 * Name: FUN_0041bff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl
FUN_0041bff0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_44 [17];
  
  iVar1 = *param_1;
  piVar2 = FUN_00417b70();
  if (piVar2 == (int *)0x0) {
    piVar2 = local_44;
    piVar4 = piVar2;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
  }
  if (in_EAX == (int *)0x0) {
    FUN_0041a000((void *)0x0,iVar1,0x71);
    in_EAX = FUN_0041a560((int *)0x0);
  }
  piVar2[2] = param_2;
  piVar2[4] = param_4;
  piVar2[5] = param_5;
  piVar2[3] = param_3;
  piVar2[6] = param_6;
  *piVar2 = (int)in_EAX;
  *(undefined1 *)(piVar2 + 1) = 0x74;
  *(ushort *)((int)piVar2 + 6) = (ushort)(param_7 != 0);
  piVar2[10] = param_8;
  piVar2[0xb] = param_9;
  piVar2[0xe] = -1;
  piVar2[0xf] = -1;
  piVar2[0x10] = -1;
  if (*(char *)(iVar1 + 0x1e) == '\0') {
    return piVar2;
  }
  FUN_0040fc60();
  if (piVar2 != local_44) {
    FUN_00408130(iVar1);
  }
  return (int *)0x0;
}


/* END FUNCTION 0x0041bff0 */
