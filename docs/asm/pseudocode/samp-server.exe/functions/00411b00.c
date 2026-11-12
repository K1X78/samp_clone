/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411b00
 * Name: FUN_00411b00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00411b00(void)

{
  bool bVar1;
  ulonglong *in_EAX;
  int iVar2;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  byte *unaff_EBX;
  ulonglong uVar3;
  double local_8;
  
  iVar2 = FUN_004077e0(unaff_EBX);
  if (iVar2 != 0) {
    iVar2 = FUN_00407580();
    if (iVar2 != 0) {
      iVar2 = FUN_00408450(unaff_EBX,&DAT_004b6bdc);
      if (iVar2 == 0) {
        FUN_00411ae0((int)in_EAX);
        return 0;
      }
      bVar1 = FUN_00408500(extraout_ECX,'\x01');
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 1;
      }
      FUN_004085d0(&local_8);
      uVar3 = FUN_004a0540();
      *in_EAX = uVar3;
      *(undefined1 *)((int)in_EAX + 0x2a) = 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00411b00 */
