/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042be90
 * Name: FUN_0042be90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042be90(undefined4 *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_10 [16];
  
  puVar5 = param_1;
  uVar1 = *(ushort *)(param_1[1] + 0x18);
  uVar8 = 0;
  param_1 = (undefined4 *)0x0;
  do {
    iVar7 = (int)*(short *)(puVar5 + 0x17);
    iVar3 = puVar5[iVar7 + 0x18];
    if (iVar7 == 0) {
      if ((*(char *)(iVar3 + 1) == '\0') || (uVar8 = FUN_00429760(iVar3,puVar5 + 0x19), uVar8 != 0))
      break;
      *(undefined2 *)(puVar5 + 0x17) = 1;
      *(undefined2 *)(puVar5 + 0x2c) = 0;
      *(undefined2 *)((int)puVar5 + 0xb2) = 0;
    }
    else {
      if ((*(char *)(iVar3 + 1) == '\0') &&
         ((uint)*(ushort *)(iVar3 + 0xe) <= ((uint)uVar1 << 1) / 3)) break;
      iVar4 = puVar5[iVar7 + 0x17];
      sVar2 = *(short *)((int)puVar5 + iVar7 * 2 + 0xae);
      uVar8 = FUN_00423650(*(int *)(iVar4 + 0x44));
      if (uVar8 == 0) {
        if ((((*(char *)(iVar3 + 4) == '\0') || (*(char *)(iVar3 + 1) != '\x01')) ||
            (*(short *)(iVar3 + 0x18) != *(short *)(iVar3 + 0x10))) ||
           ((*(int *)(iVar4 + 0x48) == 1 || (*(short *)(iVar4 + 0x10) != sVar2)))) {
          puVar6 = FUN_00413690();
          uVar8 = FUN_0042b430(iVar4,(int)puVar6,(uint)(iVar7 == 1));
          bVar9 = param_1 != (undefined4 *)0x0;
          param_1 = puVar6;
          if (bVar9) {
            FUN_0040a700();
          }
        }
        else {
          uVar8 = FUN_00429530(iVar4,iVar3,local_10);
        }
      }
      *(undefined1 *)(iVar3 + 1) = 0;
      FUN_00427610();
      *(short *)(puVar5 + 0x17) = *(short *)(puVar5 + 0x17) + -1;
    }
  } while (uVar8 == 0);
  if (param_1 != (undefined4 *)0x0) {
    FUN_0040a700();
  }
  return uVar8;
}


/* END FUNCTION 0x0042be90 */
