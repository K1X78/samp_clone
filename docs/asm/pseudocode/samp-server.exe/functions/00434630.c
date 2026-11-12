/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434630
 * Name: FUN_00434630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00434630(void *param_1,void *param_2,undefined4 param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int *unaff_EDI;
  
  uVar2 = FUN_0042fd70();
  if (uVar2 == 0) {
    if (param_1 != (void *)0x0) {
      bVar1 = FUN_0042e460(param_1,param_2,param_4);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if ((uVar2 == 0) && (param_4 != '\0')) {
        uVar2 = FUN_0041fbf0((uint)*(byte *)(*(int *)(*(int *)(*unaff_EDI + 8) + 0xc) + 0x49));
      }
      FUN_0042f990(uVar2,(undefined **)0x0);
      uVar2 = FUN_004340c0(uVar2);
    }
    FUN_00407e90(*(int *)(*unaff_EDI + 0x44));
  }
  return uVar2;
}


/* END FUNCTION 0x00434630 */
