/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067c40
 * Name: FUN_10067c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10067c40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 *puVar4;
  undefined4 uStack_38;
  uint *puStack_34;
  
  puStack_34 = *(uint **)(param_1 + 0x63be);
  puVar1 = (undefined4 *)(param_1 + 0x63be);
  *(undefined4 *)(param_1 + 0x63b2) = 1;
  if (puStack_34 != (uint *)0x0) {
    uStack_38 = 0x10067c69;
    (**(code **)(*puStack_34 + 8))();
    *puVar1 = 0;
  }
  puStack_34 = *(uint **)(param_1 + 0x63ba);
  puVar2 = (undefined4 *)(param_1 + 0x63ba);
  if (puStack_34 != (uint *)0x0) {
    uStack_38 = 0x10067c85;
    (**(code **)(*puStack_34 + 8))();
    *puVar2 = 0;
  }
  puStack_34 = *(uint **)(param_1 + 0x63b6);
  if (puStack_34 != (uint *)0x0) {
    uStack_38 = 0x10067c9b;
    (**(code **)(*puStack_34 + 8))();
    *(undefined4 *)(param_1 + 0x63b6) = 0;
  }
  uStack_38 = 0;
  puStack_34 = (uint *)(param_1 + 0x63c2);
  (**(code **)(**(int **)(param_1 + 0x63ae) + 0x20))(*(int **)(param_1 + 0x63ae));
  iVar3 = FUN_10065890("directmode");
  if (iVar3 != 0) {
    FUN_10067b60(param_1,"ChatWindow: Using direct drawing mode.");
    FUN_10066b90();
    *(undefined4 *)(param_1 + 0x63b2) = 0;
    return;
  }
  if (*(uint *)(param_1 + 0x63c2) < 0x401) {
    iVar3 = D3DXCreateTexture(*(undefined4 *)(param_1 + 0x63ae),0x400,0x200,1,1,0x15,0,puVar2);
  }
  else {
    iVar3 = D3DXCreateTexture(*(undefined4 *)(param_1 + 0x63ae),0x800,0x400,1,1,0x15,0,puVar2);
  }
  if (iVar3 < 0) {
    FUN_10067b60(param_1,"ChatWindow: Can\'t create a render surface texture. Will use direct mode."
                );
    *(undefined4 *)(param_1 + 0x63b2) = 0;
    return;
  }
  puVar4 = puVar1;
  (**(code **)(*(int *)*puVar2 + 0x48))((int *)*puVar2,0,puVar1);
  (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,&uStack_38);
  iVar3 = D3DXCreateRenderToSurface
                    (*(undefined4 *)(param_1 + 0x63ae),unaff_EBP,unaff_EBX,puVar4,1,0x50,
                     param_1 + 0x63b6);
  if (iVar3 < 0) {
    FUN_10067b60(param_1,"ChatWindow: Can\'t create a render to surface. Will use direct mode.");
    FUN_10066b90();
    *(undefined4 *)(param_1 + 0x63b2) = 0;
    return;
  }
  FUN_10066b90();
  *(undefined4 *)(param_1 + 0x63d6) = 0;
  *(undefined4 *)(param_1 + 0x63da) = 1;
  return;
}


/* END FUNCTION 0x10067c40 */
