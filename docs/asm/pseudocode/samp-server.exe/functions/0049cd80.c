/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049cd80
 * Name: FUN_0049cd80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall
FUN_0049cd80(void *this,char *param_1,uint param_2,undefined4 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint local_328;
  undefined4 local_324 [99];
  uint local_198 [101];
  
  puVar4 = local_324;
  for (iVar2 = 99; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = this;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_328 = param_2;
  iVar2 = 0;
  puVar5 = local_198;
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (; (((cVar1 = *param_1, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\r')) ||
         (cVar1 == '\n')); param_1 = param_1 + 1) {
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if ((param_2 < 2) || (0x10 < param_2)) {
    return true;
  }
  do {
    local_198[0] = (uint)*param_1;
    if ((local_198[0] < 0x30) || (0x39 < local_198[0])) {
      if ((local_198[0] < 0x61) || (0x7a < local_198[0])) {
        if ((local_198[0] < 0x41) || (0x5a < local_198[0])) {
LAB_0049ce78:
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_1;
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
    if ((param_2 <= local_198[0]) || (local_198[0] == 0xffffffff)) goto LAB_0049ce78;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    if (iVar2 == 0) {
      iVar2 = FUN_0049cd20(this,(int)&local_328);
      uVar6 = FUN_00497e70((int)this,extraout_EDX,(int)local_198,0);
      iVar2 = (int)uVar6 + iVar2;
    }
    param_1 = param_1 + 1;
  } while( true );
}


/* END FUNCTION 0x0049cd80 */
