/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070350
 * Name: FUN_10070350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffa8 : 0x100703db */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __fastcall FUN_10070350(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *unaff_retaddr;
  int *piVar5;
  int *piVar6;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  if (((int *)*param_1 != (int *)0x0) && (DAT_102aca2c != 0)) {
    (**(code **)(*(int *)*param_1 + 0x20))();
    pcStack_84 = (char *)0x100703be;
    iVar2 = D3DXCreateTexture();
    if (-1 < iVar2) {
      (**(code **)(*piStack_50 + 0x48))();
      (*unaff_retaddr)();
      iStack_90 = *param_1;
      uStack_88 = uStack_24;
      uStack_8c = uStack_28;
      iVar2 = D3DXCreateRenderToSurface();
      if (-1 < iVar2) {
        uVar4 = 400;
        if (unaff_retaddr != (code *)0x0) {
          uVar4 = 700;
        }
        pcStack_84 = (char *)uStack_18;
        uStack_88 = 0;
        uStack_8c = 0;
        iStack_90 = 0;
        iVar2 = D3DXCreateFontA(*param_1,uStack_14,0,uVar4,1,0,1);
        if (iVar2 < 0) {
          pcStack_84 = "SignText: Can\'t create font %s";
          uStack_88 = DAT_102aca10;
          uStack_8c = 0x10070478;
          FUN_10067b60();
          return 0;
        }
        pcStack_84 = (char *)0x1007048d;
        puVar3 = operator_new(8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = &PTR_FUN_1011c438;
        }
        puVar3[1] = auStack_38;
        uStack_88 = 0;
        uStack_8c = 0x100704ba;
        (**(code **)(iRam00000000 + 0x14))();
        uStack_8c = 0;
        iStack_90 = 0;
        piVar6 = (int *)0x0;
        (**(code **)(*(int *)*param_1 + 0xac))((int *)*param_1,0,0,3,iStack_10);
        (**(code **)(*(int *)param_1[1] + 0x20))((int *)param_1[1],0x10);
        if (iStack_10 == 0) {
          (**(code **)(*(int *)*param_1 + 0xe4))((int *)*param_1,0x14,0xe);
        }
        piVar5 = &iStack_90;
        piVar1 = (int *)param_1[1];
        iStack_90 = 0;
        uStack_8c = 0;
        (**(code **)(*piVar6 + 0x38))();
        (**(code **)(*(int *)param_1[1] + 0x2c))((int *)param_1[1]);
        (**(code **)(*piVar5 + 0x18))(piVar5,0);
        (**(code **)(*piVar6 + 8))(piVar6);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        return uStack_4c;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x10070350 */
