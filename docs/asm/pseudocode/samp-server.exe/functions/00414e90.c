/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414e90
 * Name: FUN_00414e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00414e90(undefined4 param_1)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = in_EAX[6];
  in_EAX[6] = iVar1 + 1;
  if (in_EAX[7] <= iVar1) {
    puVar2 = FUN_00412a50(param_1,(in_EAX[7] * 2 + 5) * 4);
    in_EAX[8] = (int)puVar2;
    uVar3 = FUN_004080b0(*in_EAX);
    in_EAX[7] = uVar3 >> 2;
  }
  if (in_EAX[8] != 0) {
    *(undefined4 *)(in_EAX[8] + iVar1 * 4) = 0xffffffff;
  }
  return -1 - iVar1;
}


/* END FUNCTION 0x00414e90 */
