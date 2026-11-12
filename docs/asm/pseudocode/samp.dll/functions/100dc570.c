/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc570
 * Name: FUN_100dc570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dc570(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int local_8;
  
  iVar2 = *(int *)(in_EAX + 0x1a0 + param_2 * 4);
  puVar1 = (undefined4 *)(in_EAX + 0x1a0 + param_2 * 4);
  local_8 = 7;
  *puVar1 = 0xffffffff;
  if ((param_1 == 0) && (iVar4 = *(int *)(in_EAX + 0x58 + param_2 * 4), iVar4 != 0)) {
    iVar3 = *(int *)(iVar4 + 4);
    for (iVar4 = *(int *)(iVar4 + 0x1c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
      if (*(int *)(in_EAX + 0x58 + (param_2 ^ 1) * 4) != 0) {
        while (*(int *)(iVar4 + 4) != iVar3) {
          iVar4 = *(int *)(iVar4 + 0x1c);
          if (iVar4 == 0) goto LAB_100dc603;
        }
      }
      if (iVar4 == 0) break;
      local_8 = FUN_100dc120(iVar4,puVar1);
      if (local_8 != 7) {
        *(int *)(in_EAX + 0x58 + param_2 * 4) = iVar4;
        break;
      }
    }
  }
LAB_100dc603:
  if (iVar2 != -1) {
    FUN_100dbf60();
  }
  return local_8;
}


/* END FUNCTION 0x100dc570 */
