/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8bb0
 * Name: FUN_100c8bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c8bb0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (iVar3 != 0) goto LAB_100c8c8d;
    local_8 = iVar3;
    uVar4 = FUN_100d8500();
    iVar3 = FUN_100d6d10(param_1,0,0,1000,&local_4);
    if (iVar3 != 0) goto LAB_100c8c8d;
    if (local_4 == 0) {
      uVar5 = FUN_100d8500();
      iVar3 = FUN_100d8520(uVar5,uVar4);
      if (10 < iVar3) goto LAB_100c8c46;
      iVar2 = iVar1 + 1;
      if (2 < iVar2) {
        if (iVar2 < 10) {
          FUN_100cd720(1 << ((byte)iVar1 & 0x1f));
        }
        else {
          FUN_100cd720(1000);
        }
      }
    }
    else {
LAB_100c8c46:
      iVar2 = 0;
    }
    iVar3 = FUN_100d81f0(param_1,&local_8);
    if (iVar3 != 0) {
LAB_100c8c8d:
      return ((iVar3 != 3) - 1 & 0xfffffff0) + 0x2b;
    }
    iVar1 = iVar2;
    if ((local_8 == 0) && (iVar2 = FUN_100d5e90(param_1,&local_4), iVar2 != 0)) {
      return *(int *)(iVar2 + 8);
    }
  } while( true );
}


/* END FUNCTION 0x100c8bb0 */
