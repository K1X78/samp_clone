/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a740
 * Name: FUN_0046a740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0046a740(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  char local_208 [259];
  char cStack_105;
  CHAR local_104 [260];
  
  iVar3 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_208 + iVar3)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  pcVar2 = local_208;
  do {
    pcVar8 = pcVar2;
    pcVar2 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  if (pcVar8[-1] != '\\') {
    puVar7 = (undefined2 *)&stack0xfffffdf7;
    do {
      pcVar2 = (char *)((int)puVar7 + 1);
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    } while (*pcVar2 != '\0');
    *puVar7 = 0x5c;
  }
  FUN_00491fa0("");
  FUN_00491fa0("Server Plugins");
  FUN_00491fa0("--------------");
  pcVar8 = " ";
  pcVar2 = (char *)FUN_00490ba0(DAT_004fc43c,"plugins");
  pcVar2 = _strtok(pcVar2,pcVar8);
  while (pcVar2 != (char *)0x0) {
    FUN_00491fa0(" Loading plugin: %s");
    iVar3 = 0;
    do {
      pcVar8 = local_208 + iVar3;
      local_104[iVar3] = *pcVar8;
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar2;
    } while (*pcVar8 != '\0');
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)pcVar2;
    pcVar8 = &cStack_105;
    do {
      pcVar4 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar4 != '\0');
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar3 = FUN_0046a5d0(this,local_104);
    if (iVar3 == 0) {
      pcVar2 = "  Failed.";
    }
    else {
      pcVar2 = "  Loaded.";
    }
    FUN_00491fa0(pcVar2);
    pcVar2 = _strtok((char *)0x0," ");
  }
  FUN_004699b0((int)this);
  FUN_00491fa0(" Loaded %d plugins.\n");
  return;
}


/* END FUNCTION 0x0046a740 */
