/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043aa70
 * Name: FUN_0043aa70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0043aa70(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)FUN_0043aa50(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar3 = FUN_00408380(*(char **)(param_1 + 0x1c));
  piVar4 = (int *)FUN_0043aa50(uVar3 + 0x53);
  if (piVar4 == (int *)0x0) {
    FUN_004080d0((int)puVar2);
    return 7;
  }
  piVar6 = piVar4;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  piVar4[1] = (int)(piVar4 + 0x11);
  FUN_004189f0(uVar3 + 0xf,piVar4 + 0x11,(undefined **)"%s-shm");
  FUN_00409840();
  if (DAT_004ed554 != (int *)0x0) {
    pbVar1 = (byte *)piVar4[1];
    piVar6 = DAT_004ed554;
    do {
      iVar5 = FUN_00408450((byte *)piVar6[1],pbVar1);
      if (iVar5 == 0) {
        FUN_004080d0((int)piVar4);
        goto LAB_0043ab60;
      }
      piVar6 = (int *)piVar6[0x10];
    } while (piVar6 != (int *)0x0);
  }
  piVar4[4] = -1;
  piVar4[0x10] = (int)DAT_004ed554;
  DAT_004ed554 = piVar4;
  iVar5 = FUN_00407df0();
  *piVar4 = iVar5;
  if (iVar5 == 0) {
    iVar5 = 7;
  }
  else {
    iVar5 = FUN_0041e070(*(int *)(param_1 + 4),(undefined1 *)piVar4[1],piVar4 + 2,6,(int *)0x0);
    if (iVar5 == 0) {
      iVar5 = FUN_00409880(3,1,0x80);
      if (iVar5 == 0) {
        iVar5 = FUN_00409600((int)(piVar4 + 2),0,0);
        if (iVar5 != 0) {
          iVar5 = 0x120a;
          goto LAB_0043ac25;
        }
      }
      FUN_00409880(1,1,0x80);
      iVar5 = FUN_00409880(2,1,0x80);
      piVar6 = piVar4;
      if (iVar5 == 0) {
LAB_0043ab60:
        *puVar2 = piVar6;
        piVar6[0xe] = piVar6[0xe] + 1;
        *(undefined4 **)(param_1 + 0x18) = puVar2;
        FUN_00409860();
        FUN_00407e50(*piVar6);
        puVar2[1] = piVar6[0xf];
        piVar6[0xf] = (int)puVar2;
        FUN_00407e90(*piVar6);
        return 0;
      }
    }
    else {
      iVar5 = FUN_0041d7f0();
    }
  }
LAB_0043ac25:
  FUN_00409880(1,1,0x80);
  FUN_00413320(*(undefined4 *)(param_1 + 4),0);
  FUN_004080d0((int)puVar2);
  FUN_004080d0(0);
  FUN_00409860();
  return iVar5;
}


/* END FUNCTION 0x0043aa70 */
