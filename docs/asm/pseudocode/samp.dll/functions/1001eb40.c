/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001eb40
 * Name: FUN_1001eb40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001eb40(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1134 + (uint)*param_2 * 4) != 0) {
    FUN_10067b60(DAT_102aca10,"Warning: vehicle %u was not deleted",(uint)*param_2);
    FUN_1001e540(*param_2);
  }
  uVar1 = FUN_100a0090(*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 3),
                       *(undefined4 *)(param_2 + 5),*(undefined4 *)(param_2 + 7),
                       *(undefined4 *)(param_2 + 9),*(undefined1 *)((int)param_2 + 0x27));
  *(undefined4 *)(param_1 + 0x1134 + (uint)*param_2 * 4) = uVar1;
  if (*(int *)(param_1 + 0x1134 + (uint)*param_2 * 4) != 0) {
    if (((char)param_2[0xb] != -1) || (*(char *)((int)param_2 + 0x17) != -1)) {
      FUN_100b6e20((int)(char)param_2[0xb],(int)*(char *)((int)param_2 + 0x17));
    }
    FUN_100b6e00(*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(param_1 + 0x4fb4 + (uint)*param_2 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x1134 + (uint)*param_2 * 4) + 0x4c);
    *(undefined4 *)(param_1 + 0x3074 + (uint)*param_2 * 4) = 1;
    *(undefined4 *)(param_1 + 0x11ad4 + (uint)*param_2 * 0xc) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_1 + (*param_2 + 0x1792) * 0xc) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x11adc + (uint)*param_2 * 0xc) = *(undefined4 *)(param_2 + 7);
    if (((char)param_2[0xe] != '\0') && (*(int *)(param_1 + 0x3074 + (uint)*param_2 * 4) != 0)) {
      FUN_100b6bd0((char)param_2[0xe]);
    }
    if (((*(int *)((int)param_2 + 0x21) != 0) || (*(int *)((int)param_2 + 0x1d) != 0)) ||
       (*(char *)((int)param_2 + 0x25) != '\0')) {
      FUN_100b7600(*(int *)((int)param_2 + 0x21),*(undefined4 *)((int)param_2 + 0x1d),
                   *(undefined1 *)((int)param_2 + 0x25));
    }
    FUN_100b7480((char)param_2[0x13]);
    *(undefined4 *)(param_1 + 0xbd14 + (uint)*param_2 * 4) = 1;
    *(undefined4 *)(param_1 + 0xdc54 + (uint)*param_2 * 4) = 0;
    *(undefined4 *)(param_1 + 0xfb94 + (uint)*param_2 * 4) = 0;
    FUN_1001e470();
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1001eb40 */
