/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100921b0
 * Name: FUN_100921b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100921b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  int *piVar3;
  int *piVar4;
  int *local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = (int *)0x0;
  iVar1 = D3DXLoadMeshFromXof(param_3,0x110,param_2,&local_8,&local_4,0,param_1 + 0x20c,
                              (undefined4 *)(param_1 + 0x204));
  if (-1 < iVar1) {
    piVar4 = (int *)0x0;
    piVar3 = local_8;
    uVar2 = (**(code **)(*local_8 + 0xc))(local_8,0,0,0);
    iVar1 = (**(code **)(unaff_retaddr + 0x6c))(*(undefined4 *)(param_1 + 0x204),0x7000000,uVar2);
    if (iVar1 < 0) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      return iVar1;
    }
    iVar1 = FUN_10091df0(&DAT_10117a39,param_2,piVar3,piVar4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  return iVar1;
}


/* END FUNCTION 0x100921b0 */
