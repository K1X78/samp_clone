/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100663e0
 * Name: FUN_100663e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100663e0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  if (*param_1 != '\0') {
    FUN_10065fe0(1);
    if (DAT_1016c7cc != 0) {
      BASS_ChannelStop(DAT_1016c7cc);
      DAT_1016c7cc = 0;
    }
    fVar3 = (float10)FUN_100a20a0();
    if (fVar3 < (float10)0.0 == (fVar3 == (float10)0.0)) {
      puVar2 = &DAT_1016c4b8;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)puVar2 = 0;
      _strncpy((char *)&DAT_1016c4b8,param_2,0x100);
      puVar2 = (undefined4 *)&DAT_1016c5c0;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)puVar2 = 0;
      puVar2 = &DAT_1016c3b0;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)puVar2 = 0;
      puVar2 = &DAT_1016c6c8;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)puVar2 = 0;
      DAT_1016c7d4 = param_3;
      DAT_1016c7d8 = param_4;
      DAT_1016c7dc = param_5;
      _DAT_101407bc = param_6;
      DAT_1016c7e0 = param_7;
      iVar1 = FUN_10065890("audiomsgoff");
      if (iVar1 == 0) {
        FUN_10067ae0(DAT_102aca10,"Audio stream: %s",&DAT_1016c4b8);
      }
      DAT_101407ba = 0;
      __beginthread((_StartAddress *)&LAB_10066180,0,(void *)0x0);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100663e0 */
