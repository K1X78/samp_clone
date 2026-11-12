/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5e20
 * Name: FUN_100f5e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_100f5e20(undefined4 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_2168 [360];
  undefined1 local_2000 [8188];
  undefined4 uStack_4;
  
  uStack_4 = 0x100f5e2a;
  FUN_100dda90(local_2168,0);
  iVar1 = FUN_100f5b90(0,local_2168,param_1,0);
  if ((iVar1 == 0) && (iVar1 = FUN_100de240(local_2168,"multipart/form-data",0,1), iVar1 == 0)) {
    do {
      uVar2 = FUN_100ddf60(local_2000,1,0x2000,local_2168);
      if (uVar2 == 0) goto LAB_100f5ecf;
    } while (((0xfffffff < uVar2) && (uVar2 < 0x10000002)) ||
            (uVar3 = (*param_3)(param_2,local_2000,uVar2), uVar3 == uVar2));
    iVar1 = 0x1a;
  }
LAB_100f5ecf:
  FUN_100de5a0(local_2168);
  return iVar1;
}


/* END FUNCTION 0x100f5e20 */
