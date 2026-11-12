/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e5900
 * Name: FUN_100e5900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e5900(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  char local_50 [80];
  
  if (*(int *)(param_1 + 0x3e0) == 0) {
    return 0;
  }
  iVar2 = FUN_100eef20(*(undefined4 *)(param_1 + 0x3e4),&local_74);
  if (iVar2 != 0) {
    FUN_100d8ba0(param_1,"Invalid TIMEVALUE");
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x3e0);
  if (iVar2 == 1) {
    pcVar3 = "If-Modified-Since";
  }
  else if (iVar2 == 2) {
    pcVar3 = "If-Unmodified-Since";
  }
  else {
    if (iVar2 != 3) {
      return 0x2b;
    }
    pcVar3 = "Last-Modified";
  }
  if (local_5c == 0) {
    local_5c = 6;
  }
  else {
    local_5c = local_5c + -1;
  }
  FUN_100cc780(local_50,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",pcVar3,
               (&PTR_DAT_10128e90)[local_5c],local_68,(&PTR_DAT_10128ec8)[local_64],local_60 + 0x76c
               ,local_6c,local_70,local_74);
  pcVar3 = local_50;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_100e5510(param_2,local_50,(int)pcVar3 - (int)(local_50 + 1));
  return iVar2;
}


/* END FUNCTION 0x100e5900 */
