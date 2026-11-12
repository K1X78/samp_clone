/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1a40
 * Name: FUN_100f1a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte * FUN_100f1a40(undefined4 *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 local_14 [20];
  
  if ((((param_2 == (byte *)0x0) || (param_3 == (byte *)0x0)) || (param_3 <= param_2)) ||
     ((*param_2 == 0 || (0x40000 < (uint)((int)param_3 - (int)param_2))))) {
    return (byte *)0x0;
  }
  *param_1 = param_2;
  bVar2 = *param_2;
  param_1[4] = (bVar2 & 0x20) >> 5;
  *(byte *)(param_1 + 3) = bVar2 >> 6;
  if (((bVar2 & 0x1f) == 0x1f) ||
     (*(byte *)((int)param_1 + 0xd) = bVar2 & 0x1f, param_3 <= param_2 + 1)) {
    return (byte *)0x0;
  }
  bVar2 = param_2[1];
  param_2 = param_2 + 2;
  if ((char)bVar2 < '\0') {
    bVar2 = bVar2 & 0x7f;
    if (bVar2 == 0) {
      if (param_1[4] == 0) {
        return (byte *)0x0;
      }
      param_1[1] = param_2;
      if (param_3 <= param_2) {
        return (byte *)0x0;
      }
      do {
        if (*param_2 == 0) {
          if (param_3 <= param_2) {
            return (byte *)0x0;
          }
          param_1[2] = param_2;
          return param_2 + 1;
        }
        param_2 = (byte *)FUN_100f1a40(local_14,param_2,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (param_2 < param_3);
      return (byte *)0x0;
    }
    if ((uint)((int)param_3 - (int)param_2) < (uint)bVar2) {
      return (byte *)0x0;
    }
    uVar1 = 0;
    do {
      if ((uVar1 & 0xff000000) != 0) {
        return (byte *)0x0;
      }
      uVar1 = uVar1 << 8 | (uint)*param_2;
      param_2 = param_2 + 1;
      bVar2 = bVar2 - 1;
    } while (bVar2 != 0);
  }
  else {
    uVar1 = (uint)bVar2;
  }
  if ((uint)((int)param_3 - (int)param_2) < uVar1) {
    return (byte *)0x0;
  }
  param_1[1] = param_2;
  param_1[2] = param_2 + uVar1;
  return param_2 + uVar1;
}


/* END FUNCTION 0x100f1a40 */
