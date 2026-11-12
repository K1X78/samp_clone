/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042aae0
 * Name: FUN_0042aae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_0042aae0(void)

{
  ushort uVar1;
  int *in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  local_c = 0;
  FUN_0040c670();
  if (*(char *)((int)in_EAX + 0x15) != '\0') {
    return 0;
  }
  uVar2 = FUN_0040ca90();
  uVar3 = FUN_0040c740(uVar2);
  if ((uVar3 == uVar2) ||
     (uVar3 = DAT_004ca204 / (int)(uint)*(ushort *)((int)in_EAX + 0x16) + 1, uVar2 == uVar3)) {
    uVar2 = FUN_0041d790();
    return uVar2;
  }
  iVar4 = FUN_00408f80();
  uVar1 = *(ushort *)(in_EAX + 6);
  iVar5 = FUN_0040c740(uVar2);
  uVar7 = (uVar2 - ((uVar1 / 5 - uVar2) + iVar5 + iVar4) / (uVar1 / 5)) - iVar4;
  if (uVar2 <= uVar3) goto LAB_0042ab90;
  if (uVar3 <= uVar7) goto LAB_0042ab90;
  do {
    uVar7 = uVar7 - 1;
LAB_0042ab90:
    uVar6 = FUN_0040c740(uVar7);
  } while ((uVar6 == uVar7) || (uVar7 == uVar3));
  if (uVar2 < uVar7) {
    uVar2 = FUN_0041d790();
    return uVar2;
  }
  if (uVar7 < uVar2) {
    do {
      if (local_c != 0) break;
      local_c = FUN_0042a860(in_EAX,uVar7);
      uVar2 = uVar2 - 1;
    } while (uVar7 < uVar2);
    if ((local_c != 0x65) && (local_c != 0)) goto LAB_0042ac48;
  }
  if (iVar4 != 0) {
    local_c = FUN_00423650(*(int *)(in_EAX[3] + 0x44));
    FUN_00408fa0((undefined1 *)(*(int *)(in_EAX[3] + 0x40) + 0x20));
    FUN_00408fa0((undefined1 *)(*(int *)(in_EAX[3] + 0x40) + 0x24));
    FUN_00408fa0((undefined1 *)(*(int *)(in_EAX[3] + 0x40) + 0x1c));
    FUN_0040b710(*in_EAX);
    in_EAX[10] = uVar7;
  }
  if (local_c == 0) {
    return 0;
  }
LAB_0042ac48:
  FUN_00426e90();
  return local_c;
}


/* END FUNCTION 0x0042aae0 */
