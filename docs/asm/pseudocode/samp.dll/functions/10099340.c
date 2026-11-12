/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099340
 * Name: FUN_10099340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10099340(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_1007d370();
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  uVar1 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x122) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x126) = uVar1;
  FUN_10084820(0xff628ace,0xff3669c0,0xff3669c0,0xff0a49b3);
  piVar3 = (int *)FUN_1007b4a0();
  (**(code **)(*piVar3 + 0xf0))(piVar3);
  (**(code **)(*piVar3 + 0xe4))(piVar3,8,3);
  (**(code **)(*piVar3 + 0xf4))(piVar3,param_1);
  return 0;
}


/* END FUNCTION 0x10099340 */
