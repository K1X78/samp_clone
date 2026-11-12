/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d2c0
 * Name: FUN_1006d2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int ** __fastcall FUN_1006d2c0(int *param_1)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 local_8 [8];
  
  iStack_34 = *param_1;
  if ((((iStack_34 != 0) && (DAT_102aca2c != 0)) && (param_1[1] != 0)) &&
     ((param_1[2] != 0 && (param_1[3] != 0)))) {
    piStack_20 = (int *)param_1[7];
    puStack_18 = local_8;
    iStack_1c = 0;
    uStack_24 = 0;
    uStack_28 = 1;
    uStack_2c = 0x20;
    uStack_30 = 0x40;
    piStack_38 = (int *)0x1006d31a;
    iVar1 = D3DXCreateTexture();
    if (-1 < iVar1) {
      iStack_1c = param_1[3];
      piStack_20 = (int *)param_1[1];
      puStack_18 = (undefined1 *)0x0;
      uStack_24 = 0x1006d331;
      (**(code **)(*piStack_20 + 0x14))();
      piStack_3c = (int *)*param_1;
      uStack_24 = 0;
      uStack_28 = 0x3f800000;
      uStack_2c = 0xffbeb6a8;
      uStack_30 = 3;
      iStack_34 = 0;
      piStack_38 = (int *)0x0;
      (**(code **)(*piStack_3c + 0xac))();
      FUN_1006b090(uStack_24,0,3,0x80,0x20,0xee444470);
      piVar4 = (int *)0x0;
      (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1]);
      piVar3 = (int *)0x2;
      (**(code **)(*piStack_38 + 0x38))(piStack_38);
      ppiVar2 = &piStack_3c;
      (**(code **)(*piVar4 + 0x48))(piVar4,0);
      D3DXLoadSurfaceFromSurface(piVar3,0,0,param_1[3],0,0,3,0);
      (**(code **)(*piVar3 + 8))(piVar3);
      return ppiVar2;
    }
  }
  return (int **)0x0;
}


/* END FUNCTION 0x1006d2c0 */
