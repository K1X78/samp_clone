/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465f60
 * Name: FUN_00465f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00465f60(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  
  this = (void *)DAT_004fc438[1];
  iVar1 = *(int *)(param_1 + 0x30d50);
  this_00 = (void *)*DAT_004fc438;
  uVar2 = 0;
  if (-1 < iVar1) {
    uVar3 = 0;
    do {
      if (*(int *)(param_1 + 0x24de4 + uVar3 * 4) == 1) {
        FUN_0046dc50(this_00,uVar3,1);
        FUN_0046ae90(this,uVar3,1);
        FUN_00484600(*(int *)(param_1 + 0x25d84 + uVar3 * 4));
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(param_1 + uVar3 * 4) = 0;
      uVar3 = uVar2 & 0xffff;
    } while ((int)uVar3 <= iVar1);
  }
  return;
}


/* END FUNCTION 0x00465f60 */
