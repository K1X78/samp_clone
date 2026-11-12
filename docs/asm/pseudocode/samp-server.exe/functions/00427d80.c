/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427d80
 * Name: FUN_00427d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00427d80(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar7 = 0;
  FUN_0040c2c0();
  if ((char)param_1[2] != '\x02') {
    if (((char)param_1[2] == '\x01') && (param_2 == 0)) goto LAB_00427f62;
    if (*(char *)(puVar1 + 4) == '\0') {
      if ((param_2 == 0) || (*(char *)((int)puVar1 + 0x22) != '\x02')) goto LAB_00427dd7;
LAB_00427dde:
      iVar5 = *(int *)puVar1[0x12];
LAB_00427e3c:
      if (iVar5 != 0) {
        FUN_0040c340();
        return 0x106;
      }
    }
    else {
      if (param_2 != 0) {
        FUN_0040c340();
        return 8;
      }
LAB_00427dd7:
      if (*(char *)((int)puVar1 + 0x4d) != '\0') goto LAB_00427dde;
      if (1 < param_2) {
        for (piVar2 = (int *)puVar1[0x11]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
          if ((int *)*piVar2 != param_1) {
            iVar5 = *(int *)*piVar2;
            goto LAB_00427e3c;
          }
        }
      }
    }
    uVar7 = FUN_0040c560((int)param_1,'\x01');
    if (uVar7 == 0) {
      *(bool *)((int)puVar1 + 0x13) = puVar1[10] == 0;
LAB_00427e20:
      do {
        if (puVar1[3] == 0) {
          uVar7 = FUN_00427af0(puVar1);
          if (uVar7 == 0) goto LAB_00427e20;
LAB_00427e9c:
          FUN_00427d60();
        }
        else {
          if (uVar7 != 0) goto LAB_00427e9c;
          if (param_2 != 0) {
            if (*(char *)(puVar1 + 4) == '\0') {
              bVar3 = FUN_00411870(*param_1);
              uVar7 = FUN_00414260((uint)(1 < param_2),bVar3);
              if ((uVar7 == 0) && (uVar7 = FUN_00423910(), uVar7 == 0)) goto LAB_00427ea1;
            }
            else {
              uVar7 = 8;
            }
            goto LAB_00427e9c;
          }
        }
LAB_00427ea1:
        if ((((char)uVar7 != '\x05') || (*(char *)((int)puVar1 + 0x22) != '\0')) ||
           (iVar5 = FUN_004149e0(), iVar5 == 0)) goto LAB_00427ebe;
      } while( true );
    }
    goto LAB_00427f62;
  }
  goto LAB_00427f44;
LAB_00427ebe:
  if (uVar7 != 0) goto LAB_00427f62;
  if (((char)param_1[2] == '\0') && (puVar1[9] = puVar1[9] + 1, *(char *)((int)param_1 + 9) != '\0')
     ) {
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[10] = puVar1[0x11];
    puVar1[0x11] = param_1 + 7;
  }
  bVar4 = (param_2 != 0) + 1;
  *(byte *)(param_1 + 2) = bVar4;
  if (*(byte *)((int)puVar1 + 0x22) < bVar4) {
    *(byte *)((int)puVar1 + 0x22) = bVar4;
  }
  if (param_2 == 0) goto LAB_00427f62;
  iVar5 = puVar1[3];
  *(bool *)(puVar1 + 0x13) = 1 < param_2;
  puVar1[0x12] = param_1;
  iVar6 = FUN_00408f80();
  if (puVar1[10] != iVar6) {
    uVar7 = FUN_00423650(*(int *)(iVar5 + 0x44));
    if (uVar7 != 0) goto LAB_00427f62;
    FUN_00408fa0((undefined1 *)(*(int *)(iVar5 + 0x40) + 0x1c));
  }
LAB_00427f44:
  if (param_2 != 0) {
    uVar7 = FUN_00414370(*(int *)(*param_1 + 0x1d4));
  }
LAB_00427f62:
  FUN_0040c340();
  return uVar7;
}


/* END FUNCTION 0x00427d80 */
