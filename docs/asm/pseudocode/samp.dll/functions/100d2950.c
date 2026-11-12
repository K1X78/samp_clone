/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2950
 * Name: FUN_100d2950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d2950(void)

{
  uint in_EAX;
  
  if (in_EAX < 0x4001) {
    if (in_EAX == 0x4000) {
      return 0x4000;
    }
    if (in_EAX < 0x81) {
      if (in_EAX == 0x80) {
        return 0x80;
      }
      switch(in_EAX) {
      case 1:
      case 2:
        return 1;
      case 4:
      case 8:
        return 4;
      case 0x10:
        return 0x10;
      case 0x20:
        return 0x20;
      case 0x40:
        return 0x40;
      }
    }
    else if (in_EAX < 0x801) {
      if (in_EAX == 0x800) {
        return 0x800;
      }
      if (in_EAX == 0x100) {
        return 0x80;
      }
      if (in_EAX == 0x200) {
        return 0x200;
      }
      if (in_EAX == 0x400) {
        return 0x400;
      }
    }
    else if ((in_EAX == 0x1000) || (in_EAX == 0x2000)) {
      return 0x1000;
    }
  }
  else if (in_EAX < 0x200001) {
    if (in_EAX == 0x200000) {
      return 0x200000;
    }
    if (0x40000 < in_EAX) {
      if (in_EAX == 0x80000) {
        return 0x80000;
      }
      if (in_EAX == 0x100000) {
        return 0x100000;
      }
      return 0;
    }
    if (in_EAX == 0x40000) {
      return 0x40000;
    }
    if (in_EAX == 0x8000) {
      return 0x4000;
    }
    if ((in_EAX == 0x10000) || (in_EAX == 0x20000)) {
      return 0x10000;
    }
  }
  else if (in_EAX < 0x2000001) {
    if (in_EAX == 0x2000000) {
      return 0x2000000;
    }
    if (in_EAX == 0x400000) {
      return 0x400000;
    }
    if (in_EAX == 0x800000) {
      return 0x80000;
    }
    if (in_EAX == 0x1000000) {
      return 0x100000;
    }
  }
  else if ((in_EAX == 0x4000000) || (in_EAX == 0x8000000)) {
    return 0x4000000;
  }
  return 0;
}


/* END FUNCTION 0x100d2950 */
