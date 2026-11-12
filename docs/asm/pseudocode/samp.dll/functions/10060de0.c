/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10060de0
 * Name: FUN_10060de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10060de0(undefined4 param_1)

{
  char cVar1;
  
  switch(param_1) {
  case 0xd:
    if ((DAT_102ac9e0 != 0) && (*(int *)(DAT_102ac9e0 + 0x28) != 0)) {
      FUN_100700d0(1);
      return 0;
    }
    break;
  case 0x1b:
    if ((*(int *)(DAT_102aca14 + 0x14e0) != 0) && (cVar1 = FUN_10069250(), cVar1 == '\0'))
    goto LAB_10060f1d;
    break;
  case 0x21:
    if (((DAT_102aca24 != 0) && (DAT_102aca10 != 0)) && (cVar1 = FUN_10069250(), cVar1 == '\0')) {
      FUN_10066d40();
      return 0;
    }
    break;
  case 0x22:
    if (((DAT_102aca24 != 0) && (DAT_102aca10 != 0)) && (cVar1 = FUN_10069250(), cVar1 == '\0')) {
      FUN_10066da0();
      return 0;
    }
    break;
  case 0x26:
    if ((*(int *)(DAT_102aca14 + 0x14e0) != 0) && (cVar1 = FUN_10069250(), cVar1 == '\0')) {
      FUN_10069070();
      return 0;
    }
    break;
  case 0x28:
    if ((*(int *)(DAT_102aca14 + 0x14e0) != 0) && (cVar1 = FUN_10069250(), cVar1 == '\0')) {
      FUN_100690e0();
    }
    break;
  case 0x6d:
    if (DAT_102abe78 != 0) {
      FUN_100685c0(&DAT_10117a39);
      return 0;
    }
    break;
  case 0x75:
    if (*(int *)(DAT_102aca14 + 0x14e0) == 0) {
      FUN_10068ec0();
      return 0;
    }
LAB_10060f1d:
    FUN_10068fc0();
    return 0;
  case 0x76:
    FUN_10060d40();
    return 0;
  case 0x77:
    DAT_1016be7c = 1;
    return 0;
  case 0x78:
    *DAT_102aca18 = (uint)(*DAT_102aca18 == 0);
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x10060de0 */
