/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00446370
 * Name: FUN_00446370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00446370(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_EAX;
  int *piVar5;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar2 & 0xfffffbff | 0x800;
  FUN_00443d00(param_1,(int)in_EAX,0);
  if (param_1[0x10] == 0) {
    puVar4 = (undefined4 *)in_EAX[7];
    while (puVar3 = puVar4, puVar3 != (undefined4 *)0x0) {
      in_EAX = puVar3;
      puVar4 = (undefined4 *)puVar3[7];
    }
    *(uint *)(iVar1 + 0xc) = uVar2;
    piVar5 = FUN_00417b70();
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      *(undefined2 *)(piVar5 + 8) = 1;
      piVar5[1] = 0;
      FUN_0041c530((int *)*in_EAX,piVar5 + 3,piVar5 + 4);
      FUN_00431c70(in_EAX,param_1,piVar5[4]);
      piVar5[2] = -1;
      if (*(char *)(iVar1 + 0x1e) == '\0') {
        return piVar5;
      }
      FUN_0041aca0(piVar5);
    }
  }
  return (int *)0x0;
}


/* END FUNCTION 0x00446370 */
