/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100426c0
 * Name: FUN_100426c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall
FUN_100426c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_100400e0(0x1e,0);
  uVar1 = FUN_10042260(param_2,param_5,param_4,param_6);
  FUN_10037ed0(param_2);
  uVar2 = FUN_1002e2b0();
  FUN_10043570(uVar2);
  uVar3 = FUN_100436c0();
  *(uint *)(param_1 + 0xde2) = uVar3;
  if ((uVar3 & 1) == 0) {
    *(uint *)(param_1 + 0xde2) = uVar3 - 1;
  }
  uVar3 = FUN_100436c0();
  *(uint *)(param_1 + 0xde6) = uVar3;
  if ((uVar3 & 1) == 0) {
    *(uint *)(param_1 + 0xde6) = uVar3 - 1;
  }
  return uVar1;
}


/* END FUNCTION 0x100426c0 */
