/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041e640
 * Name: FUN_0041e640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041e640(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  undefined3 extraout_var;
  int iVar6;
  uint *puVar7;
  int unaff_EDI;
  uint local_1c;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_8 = (uint)*(ushort *)(unaff_EDI + 0x2e);
  local_14 = (uint *)0x0;
  local_c = 0;
  local_10 = 0;
  if (*(int *)(unaff_EDI + 0x30) == 0) {
    return 0;
  }
  iVar4 = FUN_004146f0(unaff_EDI,&local_14);
  if (iVar4 == 0) {
    if (*(ushort *)(unaff_EDI + 0x2e) != param_2) {
      iVar4 = FUN_0041d790();
      thunk_FUN_004126f0();
      return iVar4;
    }
    local_1c = *(uint *)(unaff_EDI + 0x30);
    puVar5 = (uint *)FUN_0040ba80();
    puVar7 = puVar5 + 2;
    iVar6 = 4;
    do {
      local_4 = *puVar7;
      if (local_4 <= local_1c) {
        iVar4 = FUN_0040bd20();
        if (iVar4 == 0) {
          *puVar7 = 0xffffffff;
          FUN_0040bd50();
        }
        else {
          if (iVar4 != 5) goto LAB_0041e88e;
          local_1c = local_4;
        }
      }
      puVar7 = puVar7 + 1;
      iVar1 = iVar6 + -2;
      iVar6 = iVar6 + 1;
    } while (iVar1 < 5);
    if ((*puVar5 < local_1c) && (iVar4 = FUN_0040bd20(), iVar4 == 0)) {
      local_4 = *puVar5;
      iVar4 = 0;
      if (param_1 == 0) goto LAB_0041e770;
      iVar4 = FUN_00407b30();
      while (iVar4 == 0) {
LAB_0041e770:
        while( true ) {
          bVar3 = FUN_0040bde0(local_14,&local_c,(int *)&local_10);
          uVar2 = local_8;
          if (CONCAT31(extraout_var,bVar3) != 0) {
            if (iVar4 != 0) goto LAB_0041e864;
            iVar6 = FUN_0040ba90();
            if (local_1c == *(uint *)(iVar6 + 0x10)) {
              __allmul(*(uint *)(unaff_EDI + 0x34),0,local_8,(int)local_8 >> 0x1f);
              iVar4 = FUN_00407b10();
              if ((iVar4 != 0) || ((param_1 != 0 && (iVar4 = FUN_00407b30(), iVar4 != 0))))
              goto LAB_0041e864;
            }
            *puVar5 = local_1c;
            goto LAB_0041e864;
          }
          if ((local_10 <= local_4) || (local_1c < local_10)) break;
          __allmul(local_10 - 1,0,local_8 + 0x18,(int)(local_8 + 0x18) >> 0x1f);
          iVar4 = FUN_00407ad0();
          if (iVar4 != 0) goto LAB_0041e864;
          __allmul(local_c - 1,0,uVar2,(int)uVar2 >> 0x1f);
          iVar4 = FUN_00407af0();
          if (iVar4 != 0) goto LAB_0041e864;
        }
      }
LAB_0041e864:
      FUN_0040bd50();
      thunk_FUN_004126f0();
      return iVar4;
    }
    if (iVar4 == 5) {
      iVar4 = 0;
    }
LAB_0041e88e:
    thunk_FUN_004126f0();
  }
  return iVar4;
}


/* END FUNCTION 0x0041e640 */
