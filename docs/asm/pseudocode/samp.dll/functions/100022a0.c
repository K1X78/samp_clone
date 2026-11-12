/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100022a0
 * Name: FUN_100022a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100022a0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  
  DVar2 = GetTickCount();
  if (499 < (int)(DVar2 - DAT_101569a4)) {
    DAT_101569a0 = ~DAT_101569a0;
    DAT_101569a4 = DVar2;
  }
  iVar5 = 0x400;
  bVar3 = DAT_101569a0;
  do {
    if (param_1[0x400] != 0) {
      iVar1 = *param_1;
      if (bVar3 == 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x10);
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
      }
      FUN_100a1260(iVar1,uVar4);
      bVar3 = DAT_101569a0;
    }
    param_1 = param_1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


/* END FUNCTION 0x100022a0 */
