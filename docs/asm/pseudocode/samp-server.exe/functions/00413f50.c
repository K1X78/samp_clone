/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00413f50
 * Name: FUN_00413f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00413f50(undefined2 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort extraout_CX;
  int extraout_EDX;
  int unaff_EBX;
  int local_4;
  
  iVar1 = *(int *)(unaff_EBX + 0x24);
  local_4 = iVar1;
  if (iVar1 == 0) {
    if ((((*(char *)(unaff_EBX + 0xd) == '\0') || (*(int *)(unaff_EBX + 0x18) == 0)) &&
        (iVar2 = FUN_0040d5c0(), local_4 = extraout_EDX, iVar2 == 0)) &&
       ((local_4 = extraout_EDX, extraout_CX != 0 &&
        (local_4 = extraout_EDX, (uint)extraout_CX != *(uint *)(unaff_EBX + 0x84))))) {
      puVar3 = FUN_00413690();
      if (puVar3 == (undefined4 *)0x0) {
        local_4 = 7;
      }
      else {
        FUN_00413a30();
        *(uint *)(unaff_EBX + 0x84) = (uint)extraout_CX;
        FUN_0040a700();
        *(undefined4 **)(unaff_EBX + 0xa0) = puVar3;
        FUN_0040a150();
        local_4 = iVar1;
      }
    }
    *param_1 = *(undefined2 *)(unaff_EBX + 0x84);
    if (param_2 < 0) {
      param_2 = (int)*(short *)(unaff_EBX + 0x7e);
    }
    *(undefined2 *)(unaff_EBX + 0x7e) = (undefined2)param_2;
  }
  return local_4;
}


/* END FUNCTION 0x00413f50 */
