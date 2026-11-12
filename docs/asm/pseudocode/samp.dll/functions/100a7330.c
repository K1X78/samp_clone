/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7330
 * Name: FUN_100a7330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100a7330(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar4 = "SAMPHED";
  if (*(char *)(param_1 + 1) == '\0') {
    pcVar4 = "DUMMY";
  }
  puVar1 = (undefined4 *)(param_1 + 0x3b4);
  FUN_100b1f10(&DAT_1011ec90,pcVar4,(double)*(float *)(param_1 + 0x361),
               (double)*(float *)(param_1 + 0x365),
               (double)((*(float *)(param_1 + 0x36d) + *(float *)(param_1 + 0x369)) /
                       (float)*(byte *)(param_1 + 0x371)),*(byte *)(param_1 + 0x371),
               *(undefined4 *)(param_1 + 0x372),1,1,puVar1);
  pcVar4 = "SAMPRW1";
  if (*(char *)(param_1 + 0x321) == '\0') {
    pcVar4 = "DUMMY";
  }
  FUN_100a72d0(0xb,0);
  FUN_100a72d0(10,0);
  FUN_100a72d0(9,0);
  FUN_100a72d0(8,0);
  FUN_100a72d0();
  FUN_100a72d0(6,0);
  FUN_100a72d0();
  uVar2 = FUN_100a72d0(4,0);
  uVar3 = FUN_100a72d0();
  uVar9 = CONCAT44(uVar2,uVar3);
  uVar2 = FUN_100a72d0(2,0);
  uVar3 = FUN_100a72d0(1,0);
  uVar8 = CONCAT44(uVar2,uVar3);
  uVar2 = FUN_100a72d0(0,0);
  FUN_100b1f10(&DAT_1011eca4,*puVar1,0,pcVar4,uVar2,uVar8,uVar9);
  uVar2 = FUN_100f9324();
  FUN_100b1f10(&DAT_1011ecb8,*puVar1,0,uVar2);
  if (*(char *)(param_1 + 0x371) == '\x02') {
    pcVar4 = "SAMPRW2";
    if (*(char *)(param_1 + 0x341) == '\0') {
      pcVar4 = "DUMMY";
    }
    FUN_100a72d0(0xb,1);
    FUN_100a72d0(10,1);
    FUN_100a72d0(9,1);
    FUN_100a72d0(8,1);
    FUN_100a72d0();
    FUN_100a72d0(6,1);
    FUN_100a72d0();
    uVar2 = FUN_100a72d0(4,1);
    uVar3 = FUN_100a72d0();
    uVar9 = CONCAT44(uVar2,uVar3);
    uVar2 = FUN_100a72d0(2,1);
    uVar3 = FUN_100a72d0(1,1);
    uVar8 = CONCAT44(uVar2,uVar3);
    uVar2 = FUN_100a72d0(0,1);
    FUN_100b1f10(&DAT_1011eca4,*puVar1,1,pcVar4,uVar2,uVar8,uVar9);
    uVar2 = FUN_100f9324();
    FUN_100b1f10(&DAT_1011ecb8,*puVar1,1,uVar2);
  }
  iVar5 = 0;
  puVar7 = (undefined4 *)(param_1 + 0x376);
  iVar6 = 0xc;
  do {
    FUN_100b1f10(&DAT_1011eccc,*puVar1,iVar5,*puVar7);
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


/* END FUNCTION 0x100a7330 */
