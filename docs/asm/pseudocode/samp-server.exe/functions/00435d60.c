/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435d60
 * Name: FUN_00435d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00435d60(int param_1,int param_2,undefined1 param_3,int param_4,int *param_5,int *param_6)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  int local_8;
  uint local_4;
  
  iVar2 = 0;
  local_8 = 0;
  piVar1 = FUN_00417b70();
  if (piVar1 == (int *)0x0) {
    local_c = 7;
  }
  else {
    piVar1[0x76] = param_4;
    if (0 < *(int *)(in_EAX + 4)) {
      local_4 = 0;
      do {
        if ((*(int *)(local_4 + 4 + *(int *)(in_EAX + 8)) != 0) &&
           (local_c = FUN_0040d090(), local_c != 0)) {
          FUN_0042f990(local_c,(undefined **)"database schema is locked: %s");
          goto LAB_0043603d;
        }
        iVar2 = iVar2 + 1;
        local_4 = local_4 + 0x10;
      } while (iVar2 < *(int *)(in_EAX + 4));
    }
    FUN_00410450();
    piVar1[0x70] = 0;
    piVar1[0x71] = 0x3ff00000;
    *piVar1 = in_EAX;
    if ((param_2 < 0) || ((param_2 != 0 && (*(char *)(param_1 + -1 + param_2) == '\0')))) {
      FUN_0044d340(piVar1,param_1,&local_8);
    }
    else {
      if (*(int *)(in_EAX + 0x4c) < param_2) {
        FUN_0042f990(0x12,(undefined **)"statement too long");
        local_c = FUN_004340c0(0x12);
        goto LAB_0043603d;
      }
      iVar2 = FUN_00412ab0();
      if (iVar2 == 0) {
        piVar1[0x7f] = param_1 + param_2;
      }
      else {
        FUN_0044d340(piVar1,iVar2,&local_8);
        FUN_00408130(in_EAX);
        piVar1[0x7f] = piVar1[0x7f] + (param_1 - iVar2);
      }
    }
    if (*(char *)(in_EAX + 0x1e) != '\0') {
      piVar1[1] = 7;
    }
    if (piVar1[1] == 0x65) {
      piVar1[1] = 0;
    }
    if (*(char *)((int)piVar1 + 0x12) != '\0') {
      FUN_0042ce00(piVar1);
    }
    if (piVar1[1] == 0x11) {
      FUN_00420a50(0);
    }
    if (*(char *)(in_EAX + 0x1e) != '\0') {
      piVar1[1] = 7;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = piVar1[0x7f];
    }
    local_c = piVar1[1];
    if (((local_c == 0) && (piVar1[3] != 0)) && ((char)piVar1[0x7a] != '\0')) {
      if ((char)piVar1[0x7a] == '\x02') {
        FUN_00419d70(3);
        uVar3 = 8;
        local_4 = 0xb;
      }
      else {
        FUN_00419d70(8);
        uVar3 = 0;
        local_4 = 8;
      }
      if (uVar3 < local_4) {
        iVar2 = 0;
        do {
          FUN_0042e910((void *)piVar1[3],iVar2,0,(&PTR_DAT_004b3674)[uVar3]);
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
        } while ((int)uVar3 < (int)local_4);
      }
    }
    if (*(char *)(in_EAX + 0x7c) == '\0') {
      FUN_00414d50(param_3);
    }
    if ((piVar1[3] == 0) || ((local_c == 0 && (*(char *)(in_EAX + 0x1e) == '\0')))) {
      *param_5 = piVar1[3];
    }
    else {
      FUN_0042fc30();
    }
    if (local_8 == 0) {
      FUN_0042f990(local_c,(undefined **)0x0);
    }
    else {
      FUN_0042f990(local_c,(undefined **)&DAT_004b23ac);
      FUN_00408130(in_EAX);
    }
    iVar2 = piVar1[0x8a];
    while (iVar2 != 0) {
      piVar1[0x8a] = *(int *)(piVar1[0x8a] + 0x14);
      FUN_0040d6b0();
      FUN_00408130(in_EAX);
      iVar2 = piVar1[0x8a];
    }
  }
LAB_0043603d:
  FUN_00408130(in_EAX);
  FUN_004340c0(local_c);
  return;
}


/* END FUNCTION 0x00435d60 */
