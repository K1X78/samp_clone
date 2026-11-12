/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455c60
 * Name: FUN_00455c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __thiscall
FUN_00455c60(void *this,undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined4 local_c;
  undefined2 local_8;
  uint local_4;
  
  uVar7 = FUN_0044e910();
  uVar1 = (undefined4)uVar7;
  uVar5 = 0;
  if (*(ushort *)((int)this + 8) != 0) {
    pcVar6 = *(char **)((int)this + 0x33c);
    pcVar2 = pcVar6;
    do {
      if (*pcVar2 == '\0') {
        pcVar6 = pcVar6 + uVar5 * 0xcb8;
        FUN_00460a80((int)(pcVar6 + 0x8b0));
        *(undefined4 *)(pcVar6 + 1) = param_1;
        *(undefined2 *)(pcVar6 + 5) = param_2;
        *pcVar6 = '\x01';
        pcVar2 = pcVar6 + 0x10;
        FUN_0045b1c0(pcVar2,*(undefined4 *)((int)this + 0xdc8));
        FUN_0045b1d0(pcVar2,*(uint *)((int)this + 0xdcc));
        FUN_0045b030(pcVar2,0);
        pcVar3 = pcVar6 + 0x750;
        iVar4 = 5;
        do {
          pcVar3[-0xffffffff00000004] = -1;
          pcVar3[-0xffffffff00000003] = -1;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(pcVar6 + 0xcb0) = param_3;
        pcVar6[0x774] = '\0';
        pcVar6[0x775] = '\0';
        pcVar6[0x776] = '\0';
        pcVar6[0x777] = '\0';
        pcVar6[0x778] = -1;
        pcVar6[0x779] = -1;
        pcVar6[0x77c] = '\0';
        pcVar6[0x77d] = '\0';
        pcVar6[0x77e] = '\0';
        pcVar6[0x77f] = '\0';
        pcVar6[0x748] = '\0';
        FUN_0044d9d0((undefined4 *)(pcVar6 + 0x784));
        *(undefined4 *)(pcVar6 + 0x898) = uVar1;
        *(undefined4 *)(pcVar6 + 7) = DAT_004cac3c;
        *(undefined2 *)(pcVar6 + 0xb) = DAT_004cac40;
        pcVar6[0x8ac] = '\0';
        *(undefined4 *)(pcVar6 + 0x780) = uVar1;
        pcVar6[0xcb4] = '\0';
        pcVar6[0xcb5] = '\0';
        pcVar6[0xcb6] = '\0';
        FUN_00460a40(pcVar2,'\x01');
        local_c = param_1;
        local_8 = param_2;
        local_4 = uVar5;
        FUN_00453e30((void *)((int)this + 0x340),&param_1,&local_c);
        return CONCAT44(extraout_EDX,pcVar6);
      }
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + 0xcb8;
      uVar7 = CONCAT44(pcVar6,pcVar2);
    } while (uVar5 < *(ushort *)((int)this + 8));
  }
  return uVar7 & 0xffffffff00000000;
}


/* END FUNCTION 0x00455c60 */
