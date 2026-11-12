/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490ce0
 * Name: FUN_00490ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00490ce0(void *this,short *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  double dVar13;
  char local_108 [260];
  
  if (param_1 != (short *)0x0) {
    pcVar2 = local_108;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    _strncpy(local_108,(char *)param_1,0xff);
    pcVar2 = _strtok(local_108," ");
    if (pcVar2 != (char *)0x0) {
      pcVar2 = __strlwr(pcVar2);
      iVar8 = 0;
      pcVar11 = &DAT_004ea848;
      uVar9 = 0;
      do {
        iVar3 = __stricmp(pcVar2,pcVar11);
        if (iVar3 == 0) {
          if (((&DAT_004ea947)[iVar8 * 0x107] & 1) != 0) {
            FUN_00491fa0("Unable to execute command \'%s\'. Debug mode required.");
            return;
          }
          (**(code **)((int)&PTR_FUN_004ea94b + iVar8 * 0x107))();
          return;
        }
        uVar9 = uVar9 + 0x107;
        iVar8 = iVar8 + 1;
        pcVar11 = pcVar11 + 0x107;
      } while (uVar9 < 0x148c);
      puVar4 = (undefined4 *)FUN_00490aa0(this,pcVar2);
      if (puVar4 == (undefined4 *)0x0) {
        uVar9 = FUN_0046b8b0((void *)DAT_004fc438[1],param_1);
        if (((uVar9 == 0) && ((void *)*DAT_004fc438 != (void *)0x0)) &&
           (iVar8 = FUN_0046e5a0((void *)*DAT_004fc438,param_1), iVar8 == 0)) {
          FUN_00491fa0("Unknown command or variable:\n  %s");
        }
      }
      else {
        bVar12 = ((byte)puVar4[1] & 2) == 2;
        if ((puVar4[1] & 1) != 0) {
          FUN_00491fa0("Unable to access variable \'%s\'. Debug mode required.");
          return;
        }
        pcVar2 = _strtok((char *)0x0," ");
        switch(*puVar4) {
        case 0:
          if ((pcVar2 == (char *)0x0) || (bVar12)) {
            FUN_00491fa0("%s = %f  (float%s)");
            return;
          }
          dVar13 = _atof(pcVar2);
          *(float *)puVar4[2] = (float)dVar13;
          break;
        case 1:
          if ((pcVar2 == (char *)0x0) || (bVar12)) {
            FUN_00491fa0("%s = %d  (int%s)");
            return;
          }
          lVar5 = _atol(pcVar2);
          *(long *)puVar4[2] = lVar5;
          break;
        case 2:
          if ((pcVar2 == (char *)0x0) || (bVar12)) {
            FUN_00491fa0("%s = %d  (bool%s)");
            return;
          }
          lVar5 = _atol(pcVar2);
          *(bool *)puVar4[2] = 0 < lVar5;
          break;
        case 3:
          if ((pcVar2 == (char *)0x0) || (bVar12)) {
            FUN_00491fa0("%s = \"%s\"  (string%s)");
            return;
          }
          if ((void *)puVar4[2] != (void *)0x0) {
            _free((void *)puVar4[2]);
          }
          pcVar6 = _strtok((char *)0x0,"");
          pcVar11 = pcVar2;
          if (pcVar6 == (char *)0x0) {
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar11 = _malloc((size_t)(pcVar11 + (1 - (int)(pcVar2 + 1))));
            iVar8 = (int)pcVar11 - (int)pcVar2;
            do {
              cVar1 = *pcVar2;
              pcVar2[iVar8] = cVar1;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
          }
          else {
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pcVar7 = pcVar6;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            pcVar11 = _malloc((size_t)(pcVar11 +
                                      (int)(pcVar7 + ((2 - (int)(pcVar6 + 1)) - (int)(pcVar2 + 1))))
                             );
            iVar8 = (int)pcVar11 - (int)pcVar2;
            do {
              cVar1 = *pcVar2;
              pcVar2[iVar8] = cVar1;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            pcVar2 = pcVar11 + -1;
            do {
              pcVar7 = pcVar2 + 1;
              pcVar2 = pcVar2 + 1;
            } while (*pcVar7 != '\0');
            pcVar2[0] = ' ';
            pcVar2[1] = '\0';
            FUN_00490260(pcVar6);
            pcVar2 = pcVar6;
            do {
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            pcVar7 = pcVar11 + -1;
            do {
              pcVar10 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
            } while (*pcVar10 != '\0');
            pcVar10 = pcVar6;
            for (uVar9 = (uint)((int)pcVar2 - (int)pcVar6) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar9 = (int)pcVar2 - (int)pcVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar7 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar7 = pcVar7 + 1;
            }
          }
          pcVar2 = pcVar11;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          if (0x3ff < (uint)((int)pcVar2 - (int)(pcVar11 + 1))) {
            pcVar11[0x3fe] = '\0';
          }
          puVar4[2] = pcVar11;
          break;
        default:
          goto switchD_00490e13_default;
        }
        if ((code *)puVar4[3] != (code *)0x0) {
          (*(code *)puVar4[3])();
          return;
        }
      }
    }
  }
switchD_00490e13_default:
  return;
}


/* END FUNCTION 0x00490ce0 */
