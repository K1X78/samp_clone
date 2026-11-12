/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100111c0
 * Name: FUN_100111c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100111c0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  char local_134;
  char local_133;
  char local_132;
  char local_131;
  char local_130;
  char local_12f;
  char local_12e;
  char local_12d;
  char local_12c;
  char local_12b;
  char local_12a;
  char local_129;
  undefined4 local_128;
  undefined2 uStack_126;
  ushort local_124 [140];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011316b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) == 0) goto LAB_10011470;
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f960(&local_134,0x10);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (((1999 < local_124[0]) || (*(int *)(iVar1 + 0x3074 + (uint)local_124[0] * 4) == 0)) ||
     (iVar1 = *(int *)(iVar1 + 0x1134 + (uint)local_124[0] * 4), iVar1 == 0)) goto LAB_10011470;
  if (local_134 == '\0') {
    uVar3 = 0;
LAB_10011293:
    FUN_100b7d40(uVar3);
  }
  else if (local_134 == '\x01') {
    uVar3 = 1;
    goto LAB_10011293;
  }
  if (local_133 == '\0') {
    uVar3 = 0;
LAB_100112ac:
    FUN_100b7d60(uVar3);
  }
  else if (local_133 == '\x01') {
    uVar3 = 1;
    goto LAB_100112ac;
  }
  if (local_131 == '\0') {
    uVar3 = 0;
LAB_100112c5:
    FUN_100b7380(uVar3);
  }
  else if (local_131 == '\x01') {
    uVar3 = 1;
    goto LAB_100112c5;
  }
  if (local_12e == '\0') {
    *(undefined1 *)(iVar1 + 100) = 0;
  }
  else if (local_12e == '\x01') {
    *(undefined1 *)(iVar1 + 100) = 1;
  }
  if (local_12f == '\0') {
    uVar3 = 0;
LAB_100112f5:
    FUN_100b7d80(1,0x11,uVar3);
  }
  else if (local_12f == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_100112f5;
  }
  if (local_130 == '\0') {
    uVar3 = 0;
LAB_10011315:
    FUN_100b7d80(0,0x10,uVar3);
  }
  else if (local_130 == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_10011315;
  }
  if (local_132 == '\0') {
    FUN_100b7080(0);
    uVar3 = 0;
LAB_10011347:
    FUN_100b70c0(uVar3);
  }
  else if (local_132 == '\x01') {
    FUN_100b7080(1);
    uVar3 = 20000;
    goto LAB_10011347;
  }
  if (local_12d == '\0') {
    uVar3 = 0;
LAB_10011360:
    FUN_100b7080(uVar3);
  }
  else if (local_12d == '\x01') {
    uVar3 = 1;
    goto LAB_10011360;
  }
  if (local_12c == '\0') {
    uVar3 = 0;
LAB_1001137c:
    FUN_100b7d80(2,10,uVar3);
  }
  else if (local_12c == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_1001137c;
  }
  if (local_12b == '\0') {
    uVar3 = 0;
LAB_1001139c:
    FUN_100b7d80(3,8,uVar3);
  }
  else if (local_12b == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_1001139c;
  }
  if (local_12a == '\0') {
    uVar3 = 0;
LAB_100113bc:
    FUN_100b7d80(4,0xb,uVar3);
  }
  else if (local_12a == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_100113bc;
  }
  if (local_129 == '\0') {
    uVar3 = 0;
LAB_100113dc:
    FUN_100b7d80(5,9,uVar3);
  }
  else if (local_129 == '\x01') {
    uVar3 = 0x3f800000;
    goto LAB_100113dc;
  }
  if ((char)local_128 == '\0') {
    FUN_100b7ea0(10);
  }
  else if ((char)local_128 == '\x01') {
    FUN_100b7ed0(10);
  }
  cVar2 = (char)((uint)local_128 >> 8);
  if (cVar2 == '\0') {
    FUN_100b7ea0(8);
  }
  else if (cVar2 == '\x01') {
    FUN_100b7ed0(8);
  }
  if ((char)uStack_126 == '\0') {
    FUN_100b7ea0(0xb);
  }
  else if ((char)uStack_126 == '\x01') {
    FUN_100b7ed0(0xb);
  }
  cVar2 = (char)((ushort)uStack_126 >> 8);
  if (cVar2 == '\0') {
    FUN_100b7ea0(9);
  }
  else if (cVar2 == '\x01') {
    FUN_100b7ed0(9);
  }
LAB_10011470:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100111c0 */
