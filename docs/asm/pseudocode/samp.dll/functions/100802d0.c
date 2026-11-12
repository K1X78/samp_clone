/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100802d0
 * Name: FUN_100802d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100802d0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_48 [18];
  
  FUN_1007cbc0();
  cVar1 = FUN_10079640();
  if (cVar1 != '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10078c20();
    if (cVar1 == '\0') {
      FUN_1007cbc0();
      cVar1 = FUN_10079880();
      if (cVar1 != '\0') {
        FUN_1007cbc0();
        iVar2 = FUN_10078460();
        if (*(int *)(iVar2 + 0x30) != 0) {
          uVar7 = 1;
          uVar3 = FUN_1007bed0(1);
          iVar2 = FUN_10077f00(uVar3,uVar7);
          FUN_1007cbc0();
          iVar4 = FUN_100786e0();
          if ((iVar2 != iVar4) && (iVar2 = FUN_1007f010(iVar2,&local_94), -1 < iVar2)) {
            puVar5 = (undefined4 *)FUN_1007d630(&local_90);
            puVar6 = local_48;
            for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            local_8c = 2;
            local_88 = 2;
            local_84 = 2;
            local_80 = 2;
            local_7c = 2;
            local_78 = 2;
            local_74 = 2;
            local_70 = 2;
            local_6c = 2;
            local_68 = 2;
            local_64 = 2;
            local_60 = 2;
            local_5c = 2;
            local_58 = 2;
            local_48[0] = local_94;
            local_90 = 1;
            iVar2 = FUN_1007f340(local_48,local_48,&local_90);
            if (-1 < iVar2) {
              iVar2 = FUN_1007f770(local_48,0,0,0);
              if (iVar2 == -0x7fffbffc) {
                uVar3 = 0;
                FUN_1007cbc0(0);
                FUN_10079600(uVar3);
                return;
              }
              if (iVar2 < 0) {
                FUN_1007cb00(0);
                FUN_1007cfe0(0,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x100802d0 */
