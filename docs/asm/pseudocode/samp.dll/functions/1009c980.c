/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c980
 * Name: FUN_1009c980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c980(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_40 [64];
  
  iVar5 = 0;
  puVar6 = &DAT_101871a8;
  do {
    local_40[0x20] = '\0';
    local_40[0x21] = '\0';
    local_40[0x22] = '\0';
    local_40[0x23] = '\0';
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[0x24] = '\0';
    local_40[0x25] = '\0';
    local_40[0x26] = '\0';
    local_40[0x27] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[0x28] = '\0';
    local_40[0x29] = '\0';
    local_40[0x2a] = '\0';
    local_40[0x2b] = '\0';
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0x2c] = '\0';
    local_40[0x2d] = '\0';
    local_40[0x2e] = '\0';
    local_40[0x2f] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0x30] = '\0';
    local_40[0x31] = '\0';
    local_40[0x32] = '\0';
    local_40[0x33] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x34] = '\0';
    local_40[0x35] = '\0';
    local_40[0x36] = '\0';
    local_40[0x37] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    local_40[0x38] = '\0';
    local_40[0x39] = '\0';
    local_40[0x3a] = '\0';
    local_40[0x3b] = '\0';
    local_40[0x18] = '\0';
    local_40[0x19] = '\0';
    local_40[0x1a] = '\0';
    local_40[0x1b] = '\0';
    local_40[0x3c] = '\0';
    local_40[0x3d] = '\0';
    local_40[0x3e] = '\0';
    local_40[0x3f] = '\0';
    local_40[0x1c] = '\0';
    local_40[0x1d] = '\0';
    local_40[0x1e] = '\0';
    local_40[0x1f] = '\0';
    pcVar3 = _strchr(s_AIRPORT_THRW_BARL_THRW_101419d0 + iVar5,0x3a);
    if (pcVar3 != (char *)0x0) {
      _strncpy(local_40 + 0x20,s_AIRPORT_THRW_BARL_THRW_101419d0 + iVar5,
               (size_t)(pcVar3 + (-0x101419d0 - iVar5)));
      pcVar3 = pcVar3 + 1;
      iVar2 = -(int)pcVar3;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)(local_40 + iVar2)] = cVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = FUN_100b4080(local_40);
      *puVar6 = uVar4;
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 0x24;
  } while (puVar6 != &DAT_10188df8);
  return;
}


/* END FUNCTION 0x1009c980 */
