/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10075040
 * Name: FUN_10075040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10075040(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_EBP;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 local_44 [12];
  uint uStack_38;
  void *pvStack_34;
  undefined1 local_28 [4];
  undefined1 local_24;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116248;
  pvStack_c = ExceptionList;
  DAT_1016be7c = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = 0;
  puStack_58 = local_28;
  local_4 = 0;
  puStack_5c = (undefined1 *)0x10075082;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_10061cf0();
  iVar3 = *DAT_102ac9d0;
  puStack_58 = (undefined1 *)0x0;
  puStack_5c = local_44;
  iStack_60 = 3;
  GetSystemMetrics(1);
  iVar2 = GetSystemMetrics(0);
  (**(code **)(iVar3 + 0x90))(DAT_102ac9d0,iVar2);
  iVar3 = (**(code **)(*DAT_102ac9d0 + 0x84))(DAT_102ac9d0,0,iStack_60);
  if (iVar3 < 0) {
    FUN_10067b60(DAT_102aca10,"Unable to save screenshot.");
  }
  else {
    iVar3 = 0;
    ClientToScreen(_DAT_00c97c1c,(LPPOINT)&stack0xffffff98);
    GetClientRect(_DAT_00c97c1c,(LPRECT)&iStack_60);
    iStack_60 = iStack_60 + iVar3;
    puStack_58 = (undefined1 *)((int)puStack_58 + iVar3);
    puVar4 = unaff_EBP;
    if (uStack_38 < 0x10) {
      puVar4 = &stack0xffffffb4;
    }
    D3DXSaveSurfaceToFileA(puVar4,3,iVar2,0,&iStack_60);
    FUN_10067ae0(DAT_102aca10,"Screenshot Taken - sa-mp-%03i.png",uVar1);
  }
  if (0xf < uStack_38) {
    _free(unaff_EBP);
  }
  ExceptionList = pvStack_34;
  return;
}


/* END FUNCTION 0x10075040 */
