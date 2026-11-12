/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414260
 * Name: FUN_00414260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00414260(int param_1,undefined1 param_2)

{
  bool bVar1;
  int in_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  
  *(undefined1 *)(in_EAX + 0x17) = param_2;
  if (*(char *)(in_EAX + 0xe) != '\x01') {
    return 0;
  }
  bVar1 = FUN_0040b4a0(in_EAX);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iVar2 = FUN_00407b50();
    if (iVar2 != 0) goto LAB_00414317;
    *(undefined1 *)(in_EAX + 0xe) = 2;
    if (param_1 != 0) {
      iVar2 = FUN_0040b6c0();
    }
  }
  else {
    if ((*(char *)(in_EAX + 4) != '\0') &&
       (bVar1 = FUN_0040c220(), CONCAT31(extraout_var_00,bVar1) != 0)) {
      iVar2 = FUN_00407b50();
      *(undefined1 *)(in_EAX + 0xe) = 1;
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_0040c220();
    }
    iVar2 = FUN_0040c160();
    if (iVar2 != 0) goto LAB_00414317;
    *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EAX + 0x18);
    *(undefined1 *)(in_EAX + 0xe) = 2;
    *(undefined4 *)(in_EAX + 0x48) = 0;
    *(undefined4 *)(in_EAX + 0x4c) = 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_00414317:
  FUN_00413bd0(0);
  return iVar2;
}


/* END FUNCTION 0x00414260 */
