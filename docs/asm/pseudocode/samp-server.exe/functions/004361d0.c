/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004361d0
 * Name: FUN_004361d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_004361d0(void *param_1,void *param_2,undefined1 param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  int local_4;
  
  uVar2 = 0;
  *param_4 = 0;
  local_4 = 0;
  iVar1 = FUN_0041e030();
  if (iVar1 == 0) {
    uVar2 = FUN_0041d7c0();
    return uVar2;
  }
  FUN_00407e50(*(int *)(unaff_EDI + 0x44));
  iVar1 = FUN_0042f910('\x02',param_2,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00436060(iVar1,-1,param_3,0,&local_4);
    if ((local_4 != 0) && (param_5 != (int *)0x0)) {
      iVar1 = FUN_004082b0();
      iVar1 = FUN_00408300(iVar1);
      *param_5 = iVar1 + (int)param_1;
    }
  }
  FUN_00408130(unaff_EDI);
  uVar2 = FUN_004340c0(uVar2);
  FUN_00407e90(*(int *)(unaff_EDI + 0x44));
  return uVar2;
}


/* END FUNCTION 0x004361d0 */
