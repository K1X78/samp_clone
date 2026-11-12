/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10024840
 * Name: FUN_10024840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10024840(undefined4 *param_1)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined2 uVar17;
  undefined4 uStack_28c;
  uint uStack_288;
  uint uStack_284;
  uint uStack_280;
  undefined1 auStack_27c [4];
  undefined4 uStack_278;
  undefined4 uStack_274;
  byte bStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  char cStack_264;
  char *pcStack_260;
  char *pcStack_25c;
  undefined1 auStack_258 [72];
  undefined4 auStack_210 [131];
  undefined2 uVar16;
  
  uVar5 = (**(code **)(*(int *)*param_1 + 0x10))();
  uStack_280 = uVar5;
  puVar6 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x18))(&uStack_278);
  uVar13 = *puVar6;
  uVar1 = *(ushort *)(puVar6 + 1);
  uStack_288 = (uint)uVar1;
  uVar15 = 0x1002488a;
  cVar4 = FUN_100331d0(&DAT_1013c618);
  uVar16 = (undefined2)((uint)uVar15 >> 0x10);
  if (cVar4 != '\0') {
    uVar11 = 0;
    if (param_1[2] != 0) {
      do {
        uVar15 = CONCAT22((short)((uint)uVar15 >> 0x10),uVar1);
        (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 8))(uVar13,uVar15,*param_1);
        uVar16 = (undefined2)((uint)uVar15 >> 0x10);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_1[2]);
    }
    uVar17 = 0x1011;
    (**(code **)(*(int *)*param_1 + 8))
              ((int *)*param_1,uVar13,CONCAT22(uVar16,uVar1),
               "Connected to remote command console.\r\nType \'help\' for help.\r\n");
    FUN_10024750(uVar13,CONCAT22(uVar17,uVar1));
  }
  puVar6 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x1c))(auStack_27c);
  uVar15 = *puVar6;
  uVar16 = *(undefined2 *)(puVar6 + 1);
  uStack_28c = CONCAT22((short)((uint)uVar13 >> 0x10),uVar16);
  cVar4 = FUN_100331d0(&DAT_1013c618);
  if ((cVar4 != '\0') && (uVar11 = 0, param_1[2] != 0)) {
    do {
      (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 0xc))(uVar15,uVar16,*param_1);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)param_1[2]);
  }
  do {
    if (uVar5 == 0) {
      return;
    }
    uVar11 = *(uint *)(uVar5 + 8);
    puVar6 = *(undefined4 **)(uVar5 + 0x10);
    puVar12 = auStack_210;
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined1 *)((int)auStack_210 + *(int *)(uVar5 + 8)) = 0;
    uVar13 = 0;
    bVar3 = false;
    FUN_1001fd90(*(undefined4 *)(uVar5 + 0x10),0x20,0x22,&uStack_284,&pcStack_260,0x14);
    iVar7 = __stricmp(pcStack_260,"help");
    if ((iVar7 == 0) && (uStack_284 < 3)) {
      if (uStack_284 == 1) {
        puVar6 = (undefined4 *)(uVar5 + 2);
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),"\r\nINSTRUCTIONS:\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "Enter commands on your keyboard, using spaces to delineate parameters.\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "You can use quotation marks to toggle space delineation.\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "You can connect multiple times from the same computer.\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "You can direct commands to a parser by prefixing the parser name or number.\r\n"
                  );
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),"COMMANDS:\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "help                                        Show this display.\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "help <ParserName>                           Show help on a particular parser.\r\n"
                  );
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "help <CommandName>                          Show help on a particular command.\r\n"
                  );
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "quit                                        Disconnects from the server.\r\n");
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "[<ParserName>]   <Command> [<Parameters>]   Execute a command\r\n");
        uVar16 = 0x1011;
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*puVar6,*(undefined2 *)(uVar5 + 6),
                   "[<ParserNumber>] <Command> [<Parameters>]   Execute a command\r\n");
        FUN_10024750(*puVar6,CONCAT22(uVar16,*(undefined2 *)(uVar5 + 6)));
        uVar5 = uStack_288;
      }
      else {
        uVar10 = 0;
        uStack_280 = 0;
        uVar11 = uStack_280;
        if (param_1[2] != 0) {
          do {
            pcVar8 = (char *)(**(code **)(**(int **)(param_1[1] + uVar10 * 4) + 4))();
            iVar7 = __stricmp(pcStack_25c,pcVar8);
            uVar16 = (undefined2)((uint)uVar13 >> 0x10);
            if (iVar7 == 0) {
              puVar6 = (undefined4 *)(uVar5 + 2);
              uStack_280 = uVar10;
              (**(code **)(**(int **)(param_1[1] + uVar10 * 4) + 0x10))
                        (*param_1,*puVar6,*(undefined2 *)(uVar5 + 6));
              uVar14 = 0x1011;
              uVar17 = 0x1002;
              (**(code **)(*(int *)*param_1 + 8))
                        (*param_1,*puVar6,CONCAT22(uVar16,*(undefined2 *)(uVar5 + 6)),
                         "COMMAND LIST:\r\n");
              (**(code **)(**(int **)(param_1[1] + uStack_28c * 4) + 0x20))
                        (*param_1,*puVar6,CONCAT22(uVar14,*(undefined2 *)(uVar5 + 6)));
              (**(code **)(*(int *)*param_1 + 8))
                        ((int *)*param_1,*puVar6,CONCAT22(uVar17,*(undefined2 *)(uVar5 + 6)),
                         &DAT_101185d0);
              goto LAB_10025021;
            }
            uVar10 = uVar10 + 1;
            uVar11 = uVar10;
          } while (uVar10 < (uint)param_1[2]);
        }
        uStack_280 = uVar11;
        uVar11 = 0;
        if (param_1[2] != 0) {
          do {
            cVar4 = (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 0x1c))
                              (pcStack_25c,&uStack_26c);
            if (cVar4 != '\0') {
              piVar2 = (int *)*param_1;
              if (cStack_264 == -1) {
                (**(code **)(*piVar2 + 8))
                          (piVar2,*(undefined4 *)(uVar5 + 2),*(undefined2 *)(uVar5 + 6),
                           "(Variable parms): %s %s\r\n",uStack_26c,uStack_268);
              }
              else {
                (**(code **)(*piVar2 + 8))
                          (piVar2,*(undefined4 *)(uVar5 + 2),*(undefined2 *)(uVar5 + 6),
                           "(%i parms): %s %s\r\n",cStack_264,uStack_26c,uStack_268);
              }
              goto LAB_10025021;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < (uint)param_1[2]);
        }
        (**(code **)(*(int *)*param_1 + 8))
                  ((int *)*param_1,*(undefined4 *)(uVar5 + 2),*(undefined2 *)(uVar5 + 6),
                   "Unknown help topic: %s.\r\n",pcStack_25c);
      }
    }
    else {
      iVar7 = __stricmp(pcStack_260,"quit");
      uVar16 = (undefined2)((uint)uVar13 >> 0x10);
      if ((iVar7 == 0) && (uStack_284 == 1)) {
        uVar16 = 0x1011;
        (**(code **)(*(int *)*param_1 + 8))
                  (*param_1,*(undefined4 *)(uVar5 + 2),*(undefined2 *)(uVar5 + 6),"Goodbye!");
        (**(code **)(*(int *)*param_1 + 0xc))
                  (*(undefined4 *)(uVar5 + 2),CONCAT22(uVar16,*(undefined2 *)(uVar5 + 6)));
      }
      else if (uStack_284 < 2) {
LAB_10024e59:
        uStack_280 = 0;
        if (param_1[2] != 0) {
          do {
            uVar11 = uStack_280;
            pcVar8 = pcStack_260;
            cVar4 = (**(code **)(**(int **)(param_1[1] + uStack_280 * 4) + 0x1c))
                              (pcStack_260,&uStack_278);
            uVar17 = (undefined2)((uint)pcVar8 >> 0x10);
            if (cVar4 != '\0') {
              bVar3 = true;
              if ((bStack_270 == 0xff) || ((uint)bStack_270 == uStack_284 - 1)) {
                uVar13 = CONCAT22(uVar17,*(undefined2 *)(uVar5 + 6));
                (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 0x14))
                          (uStack_278,uStack_284 - 1,&pcStack_25c,*param_1,
                           *(undefined4 *)(uVar5 + 2),uVar13,auStack_210);
                uVar17 = (undefined2)((uint)uVar13 >> 0x10);
                uVar11 = uStack_280;
              }
              else {
                uVar13 = uStack_278;
                (**(code **)(*(int *)*param_1 + 8))
                          ((int *)*param_1,*(undefined4 *)(uVar5 + 2),*(undefined2 *)(uVar5 + 6),
                           "Invalid parameter count.\r\n(%i parms): %s %s\r\n",(uint)bStack_270,
                           uStack_278,uStack_274);
                uVar17 = (undefined2)((uint)uVar13 >> 0x10);
                uVar11 = uStack_280;
              }
            }
            uStack_280 = uVar11 + 1;
          } while (uStack_280 < (uint)param_1[2]);
          if (!bVar3) goto LAB_10024ff5;
        }
      }
      else {
        if ((*pcStack_260 < '0') || ('9' < *pcStack_260)) {
          uVar11 = 0;
          if (param_1[2] != 0) {
            do {
              pcVar8 = (char *)(**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 4))();
              iVar7 = __stricmp(pcStack_260,pcVar8);
              uVar16 = (undefined2)((uint)uVar13 >> 0x10);
              if (iVar7 == 0) goto LAB_10024ee7;
              uVar11 = uVar11 + 1;
            } while (uVar11 < (uint)param_1[2]);
          }
          goto LAB_10024e59;
        }
        uVar17 = 0x1002;
        lVar9 = _atol(pcStack_260);
        uVar11 = lVar9 - 1;
        if (uVar11 < (uint)param_1[2]) {
LAB_10024ee7:
          if (uVar11 == 0xffffffff) goto LAB_10024e59;
          pcVar8 = pcStack_25c;
          cVar4 = (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 0x1c))(pcStack_25c,&uStack_278)
          ;
          uVar17 = (undefined2)((uint)pcVar8 >> 0x10);
          if (cVar4 != '\0') {
            if ((bStack_270 == 0xff) || ((uint)bStack_270 == uStack_284 - 2)) {
              (**(code **)(**(int **)(param_1[1] + uVar11 * 4) + 0x14))
                        (uStack_278,uStack_284 - 2,auStack_258,*param_1,*(undefined4 *)(uVar5 + 2),
                         CONCAT22(uVar17,*(undefined2 *)(uVar5 + 6)),auStack_210);
            }
            else {
              (**(code **)(*(int *)*param_1 + 8))
                        ((int *)*param_1,*(undefined4 *)(uVar5 + 2),
                         CONCAT22(uVar16,*(undefined2 *)(uVar5 + 6)),
                         "Invalid parameter count.\r\n(%i parms): %s %s\r\n",(uint)bStack_270,
                         uStack_278,uStack_274);
            }
            goto LAB_10025021;
          }
        }
        else {
          uVar13 = CONCAT22(uVar17,*(undefined2 *)(uVar5 + 6));
          (**(code **)(*(int *)*param_1 + 8))
                    ((int *)*param_1,*(undefined4 *)(uVar5 + 2),uVar13,"Invalid index.\r\n");
          uVar17 = (undefined2)((uint)uVar13 >> 0x10);
        }
LAB_10024ff5:
        if (param_1[2] != 0) {
          (**(code **)(*(int *)*param_1 + 8))
                    ((int *)*param_1,*(undefined4 *)(uVar5 + 2),
                     CONCAT22(uVar17,*(undefined2 *)(uVar5 + 6)),
                     "Unknown command:  Type \'help\' for help.\r\n");
        }
      }
    }
LAB_10025021:
    (**(code **)(*(int *)*param_1 + 0x14))(uVar5);
    uVar5 = (**(code **)(*(int *)*param_1 + 0x10))();
    uStack_288 = uVar5;
  } while( true );
}


/* END FUNCTION 0x10024840 */
