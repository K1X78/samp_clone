/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403420
 * Name: FUN_00403420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00403420(byte *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_2 != (int *)0x0) {
    *param_2 = (int)param_1;
  }
  if ((int)param_4 < 0x80) {
    if (param_3 < 1) {
      return 0x19;
    }
  }
  else {
    bVar1 = (byte)((int)param_4 >> 6);
    if ((int)param_4 < 0x800) {
      if (param_3 < 2) {
        return 0x19;
      }
      bVar1 = bVar1 & 0x1f | 0xc0;
    }
    else {
      bVar2 = (byte)((int)param_4 >> 0xc);
      if ((int)param_4 < 0x10000) {
        if (param_3 < 3) {
          return 0x19;
        }
        if ((0xd7ff < (int)param_4) && ((int)param_4 < 0xe000)) {
          return 0x19;
        }
        if (param_4 == 0xfffe) {
          return 0x19;
        }
        if (param_4 == 0xffff) {
          return 0x19;
        }
        bVar2 = bVar2 & 0xf | 0xe0;
      }
      else {
        bVar3 = (byte)((int)param_4 >> 0x12);
        if ((int)param_4 < 0x200000) {
          if (param_3 < 4) {
            return 0x19;
          }
          bVar3 = bVar3 & 7 | 0xf0;
        }
        else {
          bVar4 = (byte)(param_4 >> 0x18);
          if ((int)param_4 < 0x4000000) {
            if (param_3 < 5) {
              return 0x19;
            }
            bVar4 = bVar4 & 3 | 0xf8;
          }
          else {
            if (param_3 < 6) {
              return 0x19;
            }
            *param_1 = (char)bVar4 >> 6 & 1U | 0xfc;
            param_1 = param_1 + 1;
            bVar4 = bVar4 & 0x3f | 0x80;
          }
          *param_1 = bVar4;
          param_1 = param_1 + 1;
          bVar3 = bVar3 & 0x3f | 0x80;
        }
        *param_1 = bVar3;
        param_1 = param_1 + 1;
        bVar2 = bVar2 & 0x3f | 0x80;
      }
      *param_1 = bVar2;
      param_1 = param_1 + 1;
      bVar1 = bVar1 & 0x3f | 0x80;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
    param_4 = (uint)((byte)param_4 & 0x3f | 0x80);
  }
  *param_1 = (byte)param_4;
  if (param_2 != (int *)0x0) {
    *param_2 = (int)(param_1 + 1);
  }
  return 0;
}


/* END FUNCTION 0x00403420 */
