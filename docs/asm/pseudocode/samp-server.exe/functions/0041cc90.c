/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cc90
 * Name: FUN_0041cc90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0041cc90(void *this,int *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = FUN_0041cc50(0x69);
  if (iVar1 == 0) {
    FUN_0040f150();
  }
  else {
    puVar2 = FUN_0041a470((int)this,param_2,1);
    *(undefined4 **)(iVar1 + 8) = puVar2;
    *(undefined4 *)(iVar1 + 0x1c) = in_EAX;
    piVar3 = FUN_00415950((int)this,param_1,1);
    *(int **)(iVar1 + 0x18) = piVar3;
    *(undefined1 *)(iVar1 + 1) = param_3;
  }
  FUN_0040e580();
  FUN_0040fce0((int)this,(int)param_2);
  return iVar1;
}


/* END FUNCTION 0x0041cc90 */
