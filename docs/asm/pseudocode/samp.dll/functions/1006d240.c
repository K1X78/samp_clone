/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d240
 * Name: FUN_1006d240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006d240(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *piVar3;
  undefined4 *puStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  piStack_34 = (int *)*param_1;
  puStack_2c = param_1 + 4;
  uStack_30 = 0;
  puStack_38 = (undefined4 *)0x1006d255;
  (**(code **)(*piStack_34 + 0x20))();
  puStack_38 = param_1 + 2;
  iVar2 = D3DXCreateTexture(*param_1,0x80,0x20,1,1,param_1[7],0);
  if (-1 < iVar2) {
    piVar3 = (int *)param_1[2];
    puStack_38 = param_1 + 3;
    (**(code **)(*piVar3 + 0x48))(piVar3,0);
    piVar1 = (int *)param_1[3];
    (**(code **)(*piVar1 + 0x30))(piVar1,&puStack_38);
    D3DXCreateRenderToSurface(*param_1,unaff_EDI,unaff_ESI,piVar3,1,0x50,param_1 + 1);
  }
  return;
}


/* END FUNCTION 0x1006d240 */
