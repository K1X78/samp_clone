/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007ed80
 * Name: FUN_1007ed80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007ed80(void)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char local_12c [100];
  undefined1 local_c8 [100];
  char local_64 [100];
  
  FUN_1007cbc0();
  puVar1 = (undefined4 *)FUN_10078460();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_1007e000(0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10082a60(*puVar1,puVar1[1],puVar1[2],puVar1[6],puVar1[0xc]);
  if (iVar2 == 0) {
    return;
  }
  iVar7 = *(int *)(iVar2 + 8);
  if (iVar7 == *(int *)(iVar2 + 0xc)) {
    pcVar3 = (char *)FUN_10094cc0(iVar7,0);
    iVar2 = 100;
    pcVar5 = local_64;
    do {
      pcVar6 = pcVar5;
      if (*pcVar3 == '\0') {
        if (iVar2 == 0) {
          pcVar6 = pcVar6 + -1;
        }
        *pcVar6 = '\0';
        goto LAB_1007ee3f;
      }
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + -1;
      pcVar5 = pcVar6 + 1;
    } while (iVar2 != 0);
    *pcVar6 = '\0';
  }
  else {
    uVar4 = FUN_10094cc0(iVar7,0);
    uVar4 = FUN_10094cc0(*(undefined4 *)(iVar2 + 0xc),0,uVar4);
    FUN_1007bc80(local_64,100,"backbuf %s, adapter %s",uVar4);
  }
LAB_1007ee3f:
  if (puVar1[0xd] == 0) {
    local_c8[0] = 0;
  }
  else {
    uVar4 = FUN_10094cc0(puVar1[0xe],0);
    FUN_1007bc80(local_c8,100," (%s)",uVar4);
  }
  iVar2 = puVar1[8];
  if (iVar2 == 0) {
    pcVar5 = local_12c;
    iVar7 = 100;
    iVar2 = (int)&DAT_10117a39 - (int)pcVar5;
    do {
      if (pcVar5[iVar2] == '\0') goto LAB_1007eed1;
      *pcVar5 = pcVar5[iVar2];
      pcVar5 = pcVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  else {
    pcVar5 = local_12c;
    if (iVar2 != 1) {
      FUN_1007bc80(pcVar5,100," (%dx Multisample)",iVar2);
      goto LAB_1007eed9;
    }
    iVar7 = 100;
    do {
      if (pcVar5[(int)" (Nonmaskable Multisample)" - (int)local_12c] == '\0') goto LAB_1007eed1;
      *pcVar5 = pcVar5[(int)" (Nonmaskable Multisample)" - (int)local_12c];
      pcVar5 = pcVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
LAB_1007eed5:
  pcVar5 = pcVar5 + -1;
LAB_1007eed6:
  *pcVar5 = '\0';
LAB_1007eed9:
  FUN_1007cbc0();
  uVar4 = FUN_1007b380();
  FUN_1007bc80(uVar4,0x100,"%%.02f fps (%dx%d), %s%s%s",puVar1[4],puVar1[5],local_64,local_c8,
               local_12c);
  return;
LAB_1007eed1:
  if (iVar7 == 0) goto LAB_1007eed5;
  goto LAB_1007eed6;
}


/* END FUNCTION 0x1007ed80 */
