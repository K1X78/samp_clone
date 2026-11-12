/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404200
 * Name: FUN_00404200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00404284) */
/* WARNING: Removing unreachable block (ram,0x0040428c) */
/* WARNING: Removing unreachable block (ram,0x0040434c) */
/* WARNING: Removing unreachable block (ram,0x0040434e) */
/* WARNING: Removing unreachable block (ram,0x00404359) */
/* WARNING: Removing unreachable block (ram,0x00404332) */

int __cdecl FUN_00404200(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  FUN_00403990();
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 < 2) || (0x24 < iVar1)) {
    return 0;
  }
  local_c = 0;
  iVar2 = __getch();
  if (iVar2 == -1) {
    return 0;
  }
  do {
    if (iVar2 == 0x2d) {
      FUN_00404150();
      iVar2 = __getch();
      local_8 = -1;
    }
    else {
      local_8 = 1;
    }
    if ((iVar2 < 0x30) || (0x39 < iVar2)) {
      if ((0x60 < iVar2) && (iVar2 < 0x7b)) {
        iVar2 = iVar2 + -0x57;
        goto LAB_004042bc;
      }
      if ((0x40 < iVar2) && (iVar2 < 0x5b)) {
        iVar2 = iVar2 + -0x37;
        goto LAB_004042bc;
      }
    }
    else {
      iVar2 = iVar2 + -0x30;
LAB_004042bc:
      if (iVar2 < iVar1) {
        FUN_00404150();
        local_c = local_c * iVar1 + iVar2;
      }
    }
    iVar2 = __getch();
    if (iVar2 == -1) {
      return local_8 * local_c;
    }
  } while( true );
}


/* END FUNCTION 0x00404200 */
