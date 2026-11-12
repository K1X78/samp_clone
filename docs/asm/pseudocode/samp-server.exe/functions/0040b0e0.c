/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b0e0
 * Name: FUN_0040b0e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040b0e0(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8 [2];
  
  *param_2 = 0;
  iVar1 = FUN_00407b40();
  if (((iVar1 == 0) && (-1 < local_c)) && ((0 < local_c || (0xf < local_10)))) {
    iVar1 = FUN_0040b060();
    if ((iVar1 == 0) && (local_14 < param_3)) {
      iVar1 = FUN_0040b060();
      if (iVar1 == 0) {
        iVar1 = FUN_00407ad0();
        if (iVar1 == 0) {
          iVar3 = 2;
          bVar7 = true;
          piVar5 = local_8;
          piVar6 = &DAT_004b2fcc;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            iVar1 = FUN_00407ad0();
            if (iVar1 == 0) {
              uVar4 = 0;
              if (local_14 != 0) {
                uVar2 = 0;
                uVar4 = local_14;
                do {
                  uVar4 = uVar4 - (int)(char)param_2[uVar2];
                  uVar2 = uVar2 + 1;
                } while (uVar2 < local_14);
              }
              if (uVar4 != 0) {
                local_14 = 0;
              }
              param_2[local_14] = 0;
              iVar1 = 0;
            }
          }
        }
      }
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0040b0e0 */
