/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ac70
 * Name: FUN_1008ac70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ac70(uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  LSTATUS LVar3;
  int iVar4;
  int iVar5;
  HKEY local_114;
  byte local_110 [4];
  DWORD local_10c;
  DWORD local_108;
  char local_104 [260];
  
  if (((_DAT_10180600 == -0x1ff1f7fc) || (_DAT_10180600 == -0x1ff6fbfc)) || (param_1 == 0)) {
    DAT_101803ba = 1;
    return;
  }
  DAT_101803ba = 0;
  if ((param_1 & 0xffff) == 0x404) {
    param_1 = param_1 & 0xffff0000;
    pcVar1 = local_104;
    iVar5 = 0x104;
    iVar4 = (int)"software\\microsoft\\windows\\currentversion\\" - (int)pcVar1;
    do {
      if (pcVar1[iVar4] == '\0') {
        if (iVar5 != 0) goto LAB_1008acf2;
        break;
      }
      *pcVar1 = pcVar1[iVar4];
      pcVar1 = pcVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar1 = pcVar1 + -1;
LAB_1008acf2:
    *pcVar1 = '\0';
    pcVar1 = "MSTCIPH";
    if (param_1 < 0x5010000) {
      pcVar1 = "TINTLGNT";
    }
    iVar4 = 0x104;
    pcVar2 = local_104;
    do {
      if (*pcVar2 == '\0') {
        if (iVar4 != 0) {
          FUN_10077b90(&stack0x00000000 + -iVar4,0x104 - (-iVar4 + 0x104),pcVar1);
        }
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    LVar3 = RegOpenKeyExA((HKEY)0x80000001,local_104,0,0x20019,&local_114);
    if (LVar3 == 0) {
      local_10c = 4;
      LVar3 = RegQueryValueExA(local_114,"Keyboard Mapping",(LPDWORD)0x0,&local_108,local_110,
                               &local_10c);
      if ((LVar3 == 0) &&
         (((param_1 < 0x5000001 && ((local_110[0] == 0x22 || (local_110[0] == 0x23)))) ||
          (((param_1 == 0x5010000 || (param_1 == 0x5020000)) &&
           ((0x21 < local_110[0] && (local_110[0] < 0x25)))))))) {
        DAT_101803ba = 1;
      }
      RegCloseKey(local_114);
    }
  }
  return;
}


/* END FUNCTION 0x1008ac70 */
