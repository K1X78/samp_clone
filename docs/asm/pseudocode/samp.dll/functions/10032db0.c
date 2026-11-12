/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032db0
 * Name: FUN_10032db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10032db0(int param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  do {
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
    if (param_2[1] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10032be0(param_2[1]);
    }
    iVar1 = param_2[2];
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_10032be0(iVar1);
    }
    if (iVar4 - iVar5 == 2) {
      cVar3 = FUN_10032c00(iVar1);
      if (cVar3 == '\0') {
        FUN_100327d0(param_2);
      }
      else {
        FUN_10032740(iVar1);
      }
LAB_10032e33:
      if (param_3 != '\0') {
        return;
      }
    }
    else if (iVar4 - iVar5 == -2) {
      uVar2 = param_2[1];
      cVar3 = FUN_10032c40(uVar2);
      if (cVar3 == '\0') {
        FUN_100327a0(param_2);
      }
      else {
        FUN_100326e0(uVar2);
      }
      goto LAB_10032e33;
    }
    if (param_2 == *(undefined4 **)(param_1 + 4)) {
      return;
    }
    param_2 = (undefined4 *)FUN_100326c0(*param_2);
    param_2 = (undefined4 *)*param_2;
  } while( true );
}


/* END FUNCTION 0x10032db0 */
