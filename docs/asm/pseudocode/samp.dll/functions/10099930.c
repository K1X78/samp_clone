/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099930
 * Name: FUN_10099930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10099930(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "D3DMULTISAMPLE_NONE";
  case 1:
    return "D3DMULTISAMPLE_NONMASKABLE";
  case 2:
    return "D3DMULTISAMPLE_2_SAMPLES";
  case 3:
    return "D3DMULTISAMPLE_3_SAMPLES";
  case 4:
    return "D3DMULTISAMPLE_4_SAMPLES";
  case 5:
    return "D3DMULTISAMPLE_5_SAMPLES";
  case 6:
    return "D3DMULTISAMPLE_6_SAMPLES";
  case 7:
    return "D3DMULTISAMPLE_7_SAMPLES";
  case 8:
    return "D3DMULTISAMPLE_8_SAMPLES";
  case 9:
    return "D3DMULTISAMPLE_9_SAMPLES";
  case 10:
    return "D3DMULTISAMPLE_10_SAMPLES";
  case 0xb:
    return "D3DMULTISAMPLE_11_SAMPLES";
  case 0xc:
    return "D3DMULTISAMPLE_12_SAMPLES";
  case 0xd:
    return "D3DMULTISAMPLE_13_SAMPLES";
  case 0xe:
    return "D3DMULTISAMPLE_14_SAMPLES";
  case 0xf:
    return "D3DMULTISAMPLE_15_SAMPLES";
  case 0x10:
    return "D3DMULTISAMPLE_16_SAMPLES";
  default:
    return "Unknown Multisample Type";
  }
}


/* END FUNCTION 0x10099930 */
