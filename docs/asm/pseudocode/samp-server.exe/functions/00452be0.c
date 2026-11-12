/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452be0
 * Name: FUN_00452be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452be0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint local_20 [8];
  
  FUN_004528c0(param_1,param_2,param_3);
  uVar1 = 0;
  do {
    if (param_3[uVar1] != 0) {
      FUN_004528c0(param_2,param_3,local_20);
      uVar1 = 0;
      do {
        if (local_20[uVar1] != 0) {
          do {
            FUN_004528c0(param_3,local_20,param_3);
            uVar1 = 0;
            while (param_3[uVar1] == 0) {
              uVar1 = uVar1 + 1;
              if (7 < uVar1) {
                puVar3 = local_20;
                for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *param_3 = *puVar3;
                  puVar3 = puVar3 + 1;
                  param_3 = param_3 + 1;
                }
                return;
              }
            }
            FUN_004528c0(local_20,param_3,local_20);
            uVar1 = 0;
            while (local_20[uVar1] == 0) {
              uVar1 = uVar1 + 1;
              if (7 < uVar1) {
                return;
              }
            }
          } while( true );
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 8);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


/* END FUNCTION 0x00452be0 */
