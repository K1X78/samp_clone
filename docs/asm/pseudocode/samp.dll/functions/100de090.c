/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de090
 * Name: FUN_100de090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_100de090(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    uVar8 = FUN_100de020();
    *(undefined8 *)(param_1 + 0x40) = uVar8;
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar9 = (**(code **)(*(int *)(param_1 + 0x58) + 8))(param_1);
  }
  iVar6 = (int)lVar9;
  if ((-1 < lVar9) && ((*(byte *)(param_1 + 0x48) & 2) == 0)) {
    pcVar7 = (char *)0x0;
    for (puVar3 = *(undefined4 **)(param_1 + 0x28); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[1]) {
      pcVar4 = (char *)*puVar3;
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      pcVar7 = pcVar4 + (int)(pcVar7 + (2 - (int)pcVar1));
    }
    iVar5 = FUN_100ddfa0(2);
    iVar6 = iVar6 + (int)(pcVar7 + iVar5 + 2);
  }
  return iVar6;
}


/* END FUNCTION 0x100de090 */
