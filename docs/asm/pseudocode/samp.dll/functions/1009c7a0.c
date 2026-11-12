/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c7a0
 * Name: FUN_1009c7a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c7a0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x2c;
  *(undefined4 *)(DAT_101419b4 + 0x114) = (&DAT_10184d90)[param_1 * 0xb];
  *(undefined4 *)(DAT_101419b4 + 0x118) = (&DAT_10184d94)[param_1 * 0xb];
  *(undefined4 *)(DAT_101419b4 + 0x11c) = *(undefined4 *)(&DAT_10184d98 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x120) = *(undefined4 *)(&DAT_10184d9c + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x124) = *(undefined4 *)(&DAT_10184da0 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x128) = *(undefined4 *)(&DAT_10184da4 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 300) = *(undefined4 *)(&DAT_10184da8 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x130) = *(undefined4 *)(&DAT_10184dac + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x134) = *(undefined4 *)(&DAT_10184db0 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x138) = *(undefined4 *)(&DAT_10184db4 + iVar1);
  *(undefined4 *)(DAT_101419b4 + 0x13c) = *(undefined4 *)(&DAT_10184db8 + iVar1);
  return;
}


/* END FUNCTION 0x1009c7a0 */
