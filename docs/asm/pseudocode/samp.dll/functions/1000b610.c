/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000b610
 * Name: FUN_1000b610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1000b610(int param_1,char *param_2,undefined4 param_3,char *param_4,undefined4 param_5)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pvVar2 = _calloc(1,0x3a);
  *(void **)(param_1 + 0x3d5) = pvVar2;
  puVar7 = (undefined4 *)(param_1 + 0x131);
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  pcVar4 = (char *)(param_1 + 0x30);
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  *(undefined4 *)(param_1 + 0x131) = 0x4d2d4153;
  *(undefined2 *)(param_1 + 0x135) = 0x50;
  _strncpy((char *)(param_1 + 0x30),param_2,0x101);
  *(undefined4 *)(param_1 + 0x235) = param_3;
  uVar3 = FUN_10037370();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_10008230();
  pcVar4 = param_4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_1000b490(param_4,(int)pcVar4 - (int)(param_4 + 1));
  FUN_1001f1d0(param_3);
  FUN_10012310(*(undefined4 *)(param_1 + 0x2c));
  FUN_1001dbf0(*(undefined4 *)(param_1 + 0x2c));
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(param_5);
  puVar7 = (undefined4 *)(param_1 + 0x23d);
  for (iVar6 = 100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  FUN_100a1280(0);
  FUN_100a1340(0);
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 1) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x23) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2f) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x1f) = 1;
  **(undefined1 **)(param_1 + 0x3d5) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x1a) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x21) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x27) = 0x42700000;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x22) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2c) = 0xc;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2d) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2e) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x16) = 0x3c03126f;
  *(undefined1 *)(param_1 + 0x234) = 1;
  if (DAT_102aca0c != 0) {
    iVar6 = FUN_10065890("nonametagstatus");
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0x234) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x232) = 0;
  *(undefined1 *)(param_1 + 0x233) = 0;
  DVar5 = GetTickCount();
  *(DWORD *)(param_1 + 0x3d1) = DVar5;
  *(undefined4 *)(param_1 + 0x3cd) = 1;
  *(undefined4 *)(param_1 + 0x239) = 0;
  *(undefined1 *)(param_1 + 0x3d9) = 0;
  if (DAT_102aca10 != 0) {
    FUN_10067b60(DAT_102aca10,"{FFFFFF}SA-MP {B9C9BF}0.3.DL-R1 {FFFFFF}Started");
  }
  return param_1;
}


/* END FUNCTION 0x1000b610 */
