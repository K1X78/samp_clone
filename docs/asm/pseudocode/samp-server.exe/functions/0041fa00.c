/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041fa00
 * Name: FUN_0041fa00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041fa00(int param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *in_EAX;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int local_20 [7];
  uint local_4;
  
  if (param_3 == '\x04') {
    puVar8 = *(undefined1 **)(in_EAX + 0x40);
    iVar4 = FUN_00408f80();
    if (iVar4 == param_1) {
      FUN_00408fa0(puVar8);
      return 0;
    }
    uVar5 = FUN_0041d790();
    return uVar5;
  }
  uVar1 = *in_EAX;
  FUN_0041f780();
  uVar6 = (uint)*(ushort *)(in_EAX + 0x10);
  uVar9 = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = (uint)*(ushort *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x40);
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(iVar4 + uVar9 * 2),
                                *(undefined1 *)(iVar4 + uVar9 * 2 + 1)) & *(ushort *)(in_EAX + 0x12)
                      ) + *(int *)(in_EAX + 0x40));
      if (param_3 == '\x03') {
        FUN_0040c7d0((int)in_EAX,(int)puVar8,local_20);
        uVar3 = local_4;
        if (((short)local_4 != 0) && (iVar4 = FUN_00408f80(), param_1 == iVar4)) {
          puVar8 = puVar8 + (uVar3 & 0xffff);
LAB_0041face:
          FUN_00408fa0(puVar8);
          break;
        }
      }
      else {
        iVar4 = FUN_00408f80();
        if (iVar4 == param_1) goto LAB_0041face;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar6);
  }
  if (uVar9 != uVar6) {
LAB_0041fb09:
    *in_EAX = uVar1;
    return 0;
  }
  if (param_3 == '\x05') {
    bVar2 = in_EAX[5];
    iVar4 = *(int *)(in_EAX + 0x40);
    iVar7 = FUN_00408f80();
    if (iVar7 == param_1) {
      FUN_00408fa0((undefined1 *)(bVar2 + 8 + iVar4));
      goto LAB_0041fb09;
    }
  }
  uVar5 = FUN_0041d790();
  return uVar5;
}


/* END FUNCTION 0x0041fa00 */
