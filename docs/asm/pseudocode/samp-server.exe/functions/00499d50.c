/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00499d50
 * Name: FUN_00499d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00499e82) */
/* WARNING: Removing unreachable block (ram,0x00499e86) */

void __cdecl FUN_00499d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_EBX;
  short *psVar6;
  byte bVar7;
  short asStack_24c [2];
  ushort auStack_248 [2];
  uint uStack_244;
  undefined1 auStack_240 [280];
  short asStack_128 [134];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_004b1c4b;
  pvStack_14 = ExceptionList;
  puVar1 = (undefined4 *)*param_1;
  iVar5 = param_1[1];
  ExceptionList = &pvStack_14;
  uVar3 = (**(code **)(*DAT_0051c18c + 0xe4))(param_1[2],*(undefined2 *)(param_1 + 3));
  if ((puVar1 != (undefined4 *)0x0) && (iVar5 != 0)) {
    FUN_0044d930(auStack_240,puVar1,((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + 1,'\0');
    pvVar2 = (void *)DAT_004fc438[2];
    pvStack_14 = (void *)0x0;
    if ((pvVar2 != (void *)0x0) &&
       (((uVar3 < 1000 &&
         (uStack_244 = (uint)uVar3, *(int *)((int)pvVar2 + uStack_244 * 4 + 0x24de4) != 0)) &&
        (uVar4 = FUN_00466120(pvVar2,uVar3), (char)uVar4 != '\0')))) {
      psVar6 = asStack_128;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        psVar6[0] = 0;
        psVar6[1] = 0;
        psVar6 = psVar6 + 2;
      }
      *(undefined1 *)psVar6 = 0;
      bVar7 = (byte)((uint)unaff_EBX >> 0x18);
      FUN_0044da70(auStack_240,(byte *)auStack_248,0x10,'\x01');
      FUN_0044da70(auStack_240,&stack0xfffffdb3,8,'\x01');
      FUN_0044da70(auStack_240,(byte *)asStack_24c,0x10,'\x01');
      FUN_0044da70(auStack_240,&stack0xfffffdb2,8,'\x01');
      iVar5 = FUN_00463d80(pvVar2,uVar3);
      if ((iVar5 != 0) && (*(ushort *)(iVar5 + 0x2d45) == auStack_248[0])) {
        pvVar2 = (void *)*DAT_004fc438;
        if ((void *)DAT_004fc438[1] != (void *)0x0) {
          FUN_0046c2a0((void *)DAT_004fc438[1],uStack_244,(uint)auStack_248[0],(uint)bVar7,
                       (int)asStack_24c[0],asStack_128);
        }
        if (pvVar2 != (void *)0x0) {
          FUN_0046ee60(pvVar2,uStack_244,(uint)auStack_248[0],(uint)bVar7,(int)asStack_24c[0],
                       asStack_128);
        }
      }
    }
    pvStack_14 = (void *)0xffffffff;
    FUN_0044d9b0((int)auStack_240);
    ExceptionList = pvStack_1c;
    return;
  }
  FUN_00491fa0("Warning: PlayerDialogResponse crash exploit from PlayerId: %u");
  ExceptionList = pvStack_1c;
  return;
}


/* END FUNCTION 0x00499d50 */
