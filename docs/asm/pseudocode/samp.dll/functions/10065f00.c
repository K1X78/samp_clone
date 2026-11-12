/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065f00
 * Name: FUN_10065f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10065f00(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_1016c7cc = 0;
  BASS_Free();
  iVar2 = BASS_Init(0xffffffff,0xac44,0,0,0);
  if (iVar2 != 0) {
    BASS_SetConfigPtr(0x10,s_SA_MP_0_3_101407b0);
    FUN_100a20a0();
    uVar3 = FUN_100f9324();
    BASS_SetConfig(5,uVar3);
    BASS_SetConfig(0x15,1);
    BASS_SetConfig(0xb,10000);
    cVar1 = FUN_100657b0("audioproxyoff");
    if (cVar1 == '\0') {
      FUN_10065b00("audioproxyoff",0,0);
    }
    iVar2 = FUN_10065890("audioproxyoff");
    if (iVar2 != 0) {
      BASS_SetConfigPtr(0x11,0);
    }
    BASS_SetEAXParameters(0xffffffff,0,0xbf800000,0xbf800000);
    *param_1 = 1;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10065f00 */
