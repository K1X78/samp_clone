/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419f00
 * Name: FUN_00419f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_00419f00(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  uint local_4;
  
  local_8 = 0;
  local_4 = 0;
  if ((unaff_EBX != (undefined4 *)0x0) &&
     (((param_2 != 0x81 || ((char *)*unaff_EBX == (char *)0x0)) ||
      (iVar2 = FUN_00408b60((char *)*unaff_EBX,&local_4), iVar2 == 0)))) {
    local_8 = unaff_EBX[1] + 1;
  }
  puVar3 = FUN_00417b70();
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined1 *)puVar3 = (undefined1)param_2;
    *(undefined2 *)((int)puVar3 + 0x1e) = 0xffff;
    if (unaff_EBX != (undefined4 *)0x0) {
      if (local_8 == 0) {
        *(byte *)((int)puVar3 + 3) = *(byte *)((int)puVar3 + 3) | 4;
        puVar3[1] = local_4;
        puVar3[0xb] = 1;
        return puVar3;
      }
      puVar3[1] = puVar3 + 0xc;
      uVar5 = unaff_EBX[1];
      puVar6 = (undefined4 *)*unaff_EBX;
      puVar7 = puVar3 + 0xc;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)(unaff_EBX[1] + puVar3[1]) = 0;
      if ((((param_3 != 0) && (2 < local_8)) &&
          (((cVar1 = *(char *)*unaff_EBX, cVar1 == '\'' || ((cVar1 == '\"' || (cVar1 == '[')))) ||
           (cVar1 == '`')))) && (FUN_004083a0(), cVar1 == '\"')) {
        *(byte *)((int)puVar3 + 2) = *(byte *)((int)puVar3 + 2) | 0x40;
      }
    }
    puVar3[0xb] = 1;
  }
  return puVar3;
}


/* END FUNCTION 0x00419f00 */
