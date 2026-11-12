/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009dcd0
 * Name: FUN_1009dcd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009dcd0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_54;
  undefined1 local_50 [4];
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 uStack_2c;
  
  fVar1 = DAT_1018dd50;
  if (DAT_1018de2c != (FILE *)0x0) {
    local_48 = DAT_1018dde4;
    local_44 = 0x44048000;
    iVar3 = 200;
    do {
      iVar2 = 200;
      local_4c = fVar1;
      do {
        local_3c = local_48;
        local_38 = 0xc2c80000;
        local_40 = local_4c;
        FUN_100b3710(&local_4c,&local_40,local_34,local_50,1,0,0,1,1,1,0,0);
        uStack_54 = uStack_2c;
        _fwrite(&uStack_54,1,4,DAT_1018de2c);
        local_4c = local_4c + 1.0;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar3 = iVar3 + -1;
      local_48 = local_48 - 1.0;
    } while (iVar3 != 0);
  }
  return;
}


/* END FUNCTION 0x1009dcd0 */
