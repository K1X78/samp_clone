/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0110
 * Name: FUN_100d0110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d0110(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_20c;
  undefined4 *local_208;
  char *local_204;
  char local_200 [256];
  undefined1 local_100 [256];
  
  puVar6 = *(undefined4 **)(param_1 + 0x714);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x714) = 0;
      return 0;
    }
    pcVar3 = (char *)*puVar6;
    if (pcVar3 != (char *)0x0) {
      local_208 = puVar6;
      if (*pcVar3 == '-') {
        iVar2 = _sscanf(pcVar3 + 1,"%255[^:]:%d",local_100,&local_20c);
        if (iVar2 == 2) {
          pcVar3 = (char *)FUN_100cfbc0();
          if (pcVar3 == (char *)0x0) {
            return 0x1b;
          }
          pcVar4 = pcVar3;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          if (*(int *)(param_1 + 0x6c) != 0) {
            FUN_100dec30(param_1,3,2);
          }
          FUN_100e4340(*(undefined4 *)(param_1 + 0x5c),pcVar3,pcVar4 + (1 - (int)(pcVar3 + 1)));
          if (*(int *)(param_1 + 0x6c) != 0) {
            FUN_100dec70(param_1,3);
          }
          (*(code *)PTR__free_101554bc)(pcVar3);
          puVar6 = local_208;
        }
        else {
          FUN_100d8ae0(param_1,"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",*puVar6);
        }
      }
      else {
        local_204 = local_200;
        iVar2 = _sscanf(pcVar3,"%255[^:]:%d:%255s",local_100,&local_20c,local_204);
        if (iVar2 == 3) {
          if (local_200[0] == '[') {
            pcVar3 = local_200;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (pcVar3[(int)(local_200 + (-1 - (int)(local_200 + 1)))] != ']') goto LAB_100d0370;
            pcVar3[(int)(local_200 + (-1 - (int)(local_200 + 1)))] = '\0';
            local_204 = local_200 + 1;
          }
          iVar2 = FUN_100e0bd0(local_204,local_20c);
          if (iVar2 == 0) {
            FUN_100d8ae0(param_1,"Address in \'%s\' found illegal!\n",*puVar6);
          }
          else {
            pcVar3 = (char *)FUN_100cfbc0();
            if (pcVar3 == (char *)0x0) {
LAB_100d0384:
              FUN_100e07d0(iVar2);
              return 0x1b;
            }
            pcVar4 = pcVar3;
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            if (*(int *)(param_1 + 0x6c) != 0) {
              FUN_100dec30(param_1,3,2);
            }
            iVar5 = FUN_100e43c0(*(undefined4 *)(param_1 + 0x5c),pcVar3,
                                 pcVar4 + (1 - (int)(pcVar3 + 1)));
            (*(code *)PTR__free_101554bc)(pcVar3);
            if (iVar5 == 0) {
              iVar5 = FUN_100cfdf0(param_1,iVar2,local_100,local_20c);
              if (iVar5 != 0) {
                *(undefined4 *)(iVar5 + 4) = 0;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
              }
            }
            else {
              FUN_100e07d0(iVar2);
            }
            if (*(int *)(param_1 + 0x6c) != 0) {
              FUN_100dec70(param_1,3);
            }
            if (iVar5 == 0) goto LAB_100d0384;
            FUN_100d8ae0(param_1,"Added %s:%d:%s to DNS cache\n",local_100,local_20c,local_204);
            puVar6 = local_208;
          }
        }
        else {
          FUN_100d8ae0(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*puVar6);
        }
      }
    }
LAB_100d0370:
    puVar6 = (undefined4 *)puVar6[1];
  } while( true );
}


/* END FUNCTION 0x100d0110 */
