/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000a230
 * Name: FUN_1000a230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000a230(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    if (((uVar3 < 0x3ed) &&
        (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x3de) + 8) + 0x26 + iVar2), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0x19) = 0xff;
      FUN_10015c60();
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x3ec);
  FUN_10002ec0();
  FUN_10004080(0);
  FUN_1009c710();
  *(undefined4 *)(param_1 + 0x3cd) = 0xb;
  FUN_100139f0();
  FUN_100136c0();
  FUN_10008d70();
  FUN_10009180();
  FUN_10008e10();
  FUN_10008f50();
  FUN_100090e0();
  FUN_10009fb0();
  FUN_10008ff0();
  FUN_10008eb0();
  FUN_10009050();
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x1a) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x27) = 0x42700000;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2c) = 0xc;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2d) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2e) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x1f) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x2f) = 1;
  **(undefined1 **)(param_1 + 0x3d5) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x16) = 0x3c03126f;
  *(undefined4 *)(*(int *)(param_1 + 0x3d5) + 1) = 0;
  *(undefined4 *)(DAT_102aca3c + 0x4d) = 0;
  uVar5 = 1;
  *(undefined4 *)(DAT_102aca3c + 0x29) = 0;
  uVar4 = 0;
  FUN_10001010(0,1);
  FUN_100acf60(uVar4,uVar5);
  FUN_100a1ee0();
  FUN_10001010();
  FUN_100afbd0();
  uVar4 = 0;
  FUN_10001010(0);
  FUN_100ab9d0(uVar4);
  FUN_100a1340(0);
  *(undefined1 *)(*(int *)(param_1 + 0x3d5) + 0x21) = 0;
  FUN_100a6fc0();
  FUN_100a1220(*(undefined4 *)(*(int *)(param_1 + 0x3d5) + 0x16));
  FUN_100a1240(0);
  FUN_100a1280(0);
  FUN_10067ae0(DAT_102aca10,"The server is restarting..");
  return;
}


/* END FUNCTION 0x1000a230 */
