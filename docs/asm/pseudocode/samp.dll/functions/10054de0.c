/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054de0
 * Name: FUN_10054de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_10054de0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cStack_10005;
  int iStack_10004;
  undefined1 local_10000 [65532];
  undefined4 uStack_4;
  
  uStack_4 = 0x10054dea;
  FUN_10026ed0();
  cVar1 = FUN_10008110(&cStack_10005);
  if (cVar1 != '\0') {
    if (cStack_10005 != '\0') {
      return 1;
    }
    if (param_3 == 0) {
      cVar1 = FUN_1001f470(&iStack_10004,0x20,1);
      if (cVar1 != '\0') {
        FUN_10026d30(iStack_10004);
        return 1;
      }
    }
    else if (param_3 == 1) {
      uVar4 = 0;
      puVar2 = local_10000;
      uVar3 = 0xffff;
      FUN_100536f0(puVar2,0xffff,param_1,0);
      cVar1 = FUN_10053d90(puVar2,uVar3,param_1,uVar4);
      if (cVar1 != '\0') {
        FUN_10026d50(local_10000);
        return 1;
      }
    }
    else {
      cVar1 = FUN_1001f470(&iStack_10004,0x20,1);
      if ((cVar1 != '\0') && (iStack_10004 < 0x989681)) {
        FUN_1001f440();
        if (iStack_10004 <= (*param_1 - param_1[2]) + 7 >> 3) {
          FUN_10026db0((param_1[2] + 7 >> 3) + param_1[3],iStack_10004);
          FUN_1001f7b0(iStack_10004 * 8);
          return 1;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x10054de0 */
