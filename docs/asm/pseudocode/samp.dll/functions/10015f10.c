/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10015f10
 * Name: FUN_10015f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10015f10(int param_1,char param_2,char param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  if ((((param_2 == '\x13') && (param_3 == '\x11')) && (iVar2 = FUN_10001010(), iVar2 != 0)) &&
     ((iVar2 = FUN_100aba90(), iVar2 != 0 && (iVar2 = FUN_100abbe0(), iVar2 == 0)))) {
    uVar3 = FUN_100abc20();
    sVar1 = FUN_1001e650(uVar3);
    if (sVar1 == *(short *)(param_1 + 2)) {
      FUN_1009e950(local_40);
      FUN_100ac190(local_10,local_c,local_8 + 1.0);
      FUN_100a0b20("~r~Car Jacked~w~!",1000,5);
    }
  }
  return;
}


/* END FUNCTION 0x10015f10 */
