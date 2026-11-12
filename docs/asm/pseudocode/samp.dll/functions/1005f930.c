/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005f930
 * Name: FUN_1005f930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall
FUN_1005f930(undefined4 *param_1,char *param_2,uint param_3,undefined4 *param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint local_328;
  undefined4 local_324 [99];
  uint local_198 [101];
  
  puVar4 = local_324;
  for (iVar2 = 99; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  local_328 = param_3;
  iVar2 = 0;
  puVar5 = local_198;
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; (((cVar1 = *param_2, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\r')) ||
         (cVar1 == '\n')); param_2 = param_2 + 1) {
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_2;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if ((param_3 < 2) || (0x10 < param_3)) {
    return true;
  }
  do {
    local_198[0] = (uint)*param_2;
    if ((local_198[0] < 0x30) || (0x39 < local_198[0])) {
      if ((local_198[0] < 0x61) || (0x7a < local_198[0])) {
        if ((local_198[0] < 0x41) || (0x5a < local_198[0])) {
LAB_1005fa28:
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = param_2;
          }
          return iVar2 != 0;
        }
        local_198[0] = local_198[0] - 0x37;
      }
      else {
        local_198[0] = local_198[0] - 0x57;
      }
    }
    else {
      local_198[0] = local_198[0] - 0x30;
    }
    if ((param_3 <= local_198[0]) || (local_198[0] == 0xffffffff)) goto LAB_1005fa28;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 1;
    }
    if (iVar2 == 0) {
      iVar3 = FUN_1005f880(&local_328);
      iVar2 = FUN_10057630(local_198,0);
      iVar2 = iVar2 + iVar3;
    }
    param_2 = param_2 + 1;
  } while( true );
}


/* END FUNCTION 0x1005f930 */
