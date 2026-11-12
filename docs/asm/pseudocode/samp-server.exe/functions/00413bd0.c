/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413bd0
 * Name: FUN_00413bd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00413bd0(int param_1)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  if (*(byte *)(in_EAX + 0xe) < 2) {
    return 0;
  }
  FUN_00413a60();
  if (**(int **)(in_EAX + 0x3c) != 0) {
    bVar2 = FUN_0040e2a0(*(int **)(in_EAX + 0x3c));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      cVar1 = *(char *)(in_EAX + 5);
      if (cVar1 == '\x03') {
        if (*(int *)(in_EAX + 0x48) == 0 && *(int *)(in_EAX + 0x4c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00407b10();
        }
      }
      else {
        if ((cVar1 != '\x01') && ((*(char *)(in_EAX + 4) == '\0' || (cVar1 == '\x05')))) {
          FUN_00407ab0();
          if (*(char *)(in_EAX + 0xb) == '\0') {
            iVar3 = FUN_00407c40();
          }
          goto LAB_00413c75;
        }
        iVar3 = FUN_0040b240(param_1);
        FUN_0040b4b0(in_EAX);
      }
      *(undefined4 *)(in_EAX + 0x48) = 0;
      *(undefined4 *)(in_EAX + 0x4c) = 0;
      *(undefined1 *)(in_EAX + 0x11) = 0;
    }
    else {
      FUN_00407ab0();
    }
  }
LAB_00413c75:
  FUN_0040a000(*(int *)(in_EAX + 0x34));
  *(undefined4 *)(in_EAX + 0x34) = 0;
  *(undefined4 *)(in_EAX + 0x28) = 0;
  FUN_0040a3b0();
  bVar2 = FUN_0040b4a0(in_EAX);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    if (*(char *)(in_EAX + 4) == '\0') {
      local_4 = FUN_0040b0d0();
      *(undefined1 *)(in_EAX + 0xe) = 1;
      *(undefined1 *)(in_EAX + 0x12) = 0;
    }
    else if (*(char *)(in_EAX + 0xe) == '\x05') {
      *(undefined1 *)(in_EAX + 0xe) = 4;
    }
  }
  else {
    local_4 = FUN_0040c1c0();
    *(undefined1 *)(in_EAX + 0xe) = 1;
    if ((*(char *)(in_EAX + 4) == '\0') &&
       (bVar2 = FUN_0040c220(), CONCAT31(extraout_var_01,bVar2) != 0)) {
      local_4 = FUN_0040b0d0();
    }
  }
  *(undefined1 *)(in_EAX + 0x13) = 0;
  *(undefined1 *)(in_EAX + 0x10) = 0;
  *(undefined1 *)(in_EAX + 0xf) = 0;
  *(undefined4 *)(in_EAX + 0x1c) = 0;
  FUN_0040a440();
  if (*(char *)(in_EAX + 0xd) == '\0') {
    *(undefined1 *)(in_EAX + 0x16) = 0;
  }
  if (iVar3 != 0) {
    local_4 = iVar3;
  }
  return local_4;
}


/* END FUNCTION 0x00413bd0 */
