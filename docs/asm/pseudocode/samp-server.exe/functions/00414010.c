/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414010
 * Name: FUN_00414010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00414010(uint *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  int unaff_ESI;
  uint uVar5;
  undefined8 uVar6;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_c = 0;
  if (*(char *)(unaff_ESI + 0x16) != '\0') {
    local_c = *(uint *)(unaff_ESI + 0x18);
    goto LAB_004140d0;
  }
  local_8 = 0;
  local_4 = 0;
  bVar1 = FUN_0040b4a0(unaff_ESI);
  if ((CONCAT31(extraout_var,bVar1) == 0) || (*(char *)(unaff_ESI + 0xe) == '\0')) {
LAB_00414061:
    uVar4 = 0;
    uVar5 = 0;
    if (**(int **)(unaff_ESI + 0x38) != 0) {
      iVar2 = FUN_00407b40();
      if (iVar2 != 0) {
        uVar3 = FUN_0040b4b0(unaff_ESI);
        return uVar3;
      }
      uVar4 = local_8;
      uVar5 = local_4;
      if ((-1 < (int)local_4) && ((0 < (int)local_4 || (local_8 != 0)))) {
        iVar2 = (int)*(uint *)(unaff_ESI + 0x84) >> 0x1f;
        if (((int)local_4 <= iVar2) &&
           (((int)local_4 < iVar2 || (local_8 < *(uint *)(unaff_ESI + 0x84))))) {
          local_c = 1;
          goto LAB_004140bf;
        }
      }
    }
    uVar6 = __alldiv(uVar4,uVar5,*(uint *)(unaff_ESI + 0x84),
                     (int)*(uint *)(unaff_ESI + 0x84) >> 0x1f);
    local_c = (uint)uVar6;
  }
  else {
    FUN_0040c150(extraout_ECX,&local_c);
    if (local_c == 0) goto LAB_00414061;
  }
LAB_004140bf:
  if (*(char *)(unaff_ESI + 0xe) != '\0') {
    *(uint *)(unaff_ESI + 0x18) = local_c;
    *(uint *)(unaff_ESI + 0x20) = local_c;
    *(undefined1 *)(unaff_ESI + 0x16) = 1;
  }
LAB_004140d0:
  if (*(uint *)(unaff_ESI + 0x88) < local_c) {
    *(uint *)(unaff_ESI + 0x88) = local_c;
  }
  *param_1 = local_c;
  return 0;
}


/* END FUNCTION 0x00414010 */
