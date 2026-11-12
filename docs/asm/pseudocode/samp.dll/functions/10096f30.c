/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10096f30
 * Name: FUN_10096f30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10096f30(int param_1,HWND param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  short sVar2;
  
  sVar2 = (short)((uint)param_5 >> 0x10);
  switch(param_3) {
  case 0x200:
    if (*(char *)(param_1 + 400) != '\0') {
      FUN_100935d0((int)(short)param_5,(int)sVar2);
      FUN_10095790();
    }
    break;
  case 0x201:
  case 0x204:
  case 0x207:
    uVar1 = *(uint *)(param_1 + 0x84);
    if (((((uVar1 & 1) != 0) && (param_3 == 0x201)) || (((uVar1 & 2) != 0 && (param_3 == 0x207))))
       || (((uVar1 & 4) != 0 && (param_3 == 0x204)))) {
      FUN_10093520((int)(short)param_5,(int)sVar2);
      SetCapture(param_2);
    }
    return 1;
  case 0x202:
  case 0x205:
  case 0x208:
    uVar1 = *(uint *)(param_1 + 0x84);
    if (((((uVar1 & 1) != 0) && (param_3 == 0x202)) || (((uVar1 & 2) != 0 && (param_3 == 0x208))))
       || (((uVar1 & 4) != 0 && (param_3 == 0x205)))) {
      FUN_10093670();
      ReleaseCapture();
    }
    FUN_10095790();
    return 1;
  default:
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x10096f30 */
