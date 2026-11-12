/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414880
 * Name: FUN_00414880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00414880(undefined *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  iVar5 = 0;
  if (*(char *)(unaff_EBX + 0x1d) != '\0') {
    uVar1 = *(uint *)(unaff_EBX + 0x30);
    puVar2 = (undefined4 *)FUN_0040ba90();
    puVar7 = (undefined4 *)(unaff_EBX + 0x20);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar6 = *(uint *)(unaff_EBX + 0x30);
    do {
      uVar6 = uVar6 + 1;
      if (uVar1 < uVar6) break;
      uVar3 = FUN_0040bda0();
      iVar5 = (*(code *)param_1)(param_2,uVar3);
    } while (iVar5 == 0);
    FUN_004145b0();
  }
  return iVar5;
}


/* END FUNCTION 0x00414880 */
