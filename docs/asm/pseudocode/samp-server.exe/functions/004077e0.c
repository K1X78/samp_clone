/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004077e0
 * Name: FUN_004077e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004077e0(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = *param_1;
  if (bVar1 == 0x2d) {
    param_1 = param_1 + 1;
  }
  iVar2 = FUN_004073f0(param_1);
  if (iVar2 == 3) {
    for (pbVar3 = param_1 + 10; (((&DAT_004b29c8)[*pbVar3] & 1) != 0 || (*pbVar3 == 0x54));
        pbVar3 = pbVar3 + 1) {
    }
    iVar2 = FUN_00407580();
    if (iVar2 != 0) {
      if (*pbVar3 != 0) {
        return 1;
      }
      *(undefined1 *)(in_EAX + 0x29) = 0;
    }
    *(undefined1 *)(in_EAX + 0x2a) = 0;
    *(undefined1 *)(in_EAX + 0x28) = 1;
    if (bVar1 == 0x2d) {
      local_c = -local_c;
    }
    *(int *)(in_EAX + 8) = local_c;
    *(undefined4 *)(in_EAX + 0x10) = local_4;
    *(undefined4 *)(in_EAX + 0xc) = local_8;
    if (*(char *)(in_EAX + 0x2b) != '\0') {
      FUN_004076b0();
    }
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x004077e0 */
