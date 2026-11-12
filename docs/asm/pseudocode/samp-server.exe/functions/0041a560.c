/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a560
 * Name: FUN_0041a560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __fastcall FUN_0041a560(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar2 = *in_EAX;
  if (param_1 == (int *)0x0) {
    param_1 = FUN_00417b70();
    if (param_1 == (int *)0x0) goto LAB_0041a59e;
  }
  if (param_1[1] <= *param_1) {
    puVar3 = FUN_004129a0(param_1[3],(param_1[1] * 2 + 4) * 0x14,iVar2,(undefined4 *)param_1[3]);
    if (puVar3 == (undefined4 *)0x0) {
LAB_0041a59e:
      FUN_004158d0(iVar2,unaff_ESI);
      FUN_0040e580();
      return (int *)0x0;
    }
    param_1[3] = (int)puVar3;
    uVar4 = FUN_004080b0(iVar2);
    param_1[1] = uVar4 / 0x14;
  }
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  piVar1 = (int *)(param_1[3] + iVar2 * 0x14);
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  *piVar1 = unaff_ESI;
  return param_1;
}


/* END FUNCTION 0x0041a560 */
