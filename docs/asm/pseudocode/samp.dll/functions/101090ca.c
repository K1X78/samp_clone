/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101090ca
 * Name: __getdrive
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x10109192) */

int __cdecl __getdrive(void)

{
  undefined1 *puVar1;
  DWORD DVar2;
  int iVar3;
  byte *pbVar4;
  byte local_128 [264];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10131a30;
  uStack_c = 0x101090d9;
  local_20 = DAT_10155bc4;
  DVar2 = GetCurrentDirectoryA(0x105,(LPSTR)local_128);
  pbVar4 = local_128;
  puVar1 = local_1c;
  if (0x104 < (int)DVar2) {
    local_1c = &stack0xfffffec0;
    local_8 = (undefined *)0xffffffff;
    pbVar4 = &stack0xfffffec0;
    puVar1 = &stack0xfffffec0;
    if (DVar2 != 0) {
      DVar2 = GetCurrentDirectoryA(DVar2 + 1,&stack0xfffffec0);
      pbVar4 = &stack0xfffffec0;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  iVar3 = 0;
  if ((DVar2 != 0) && (pbVar4[1] == 0x3a)) {
    iVar3 = _toupper((uint)*pbVar4);
    iVar3 = iVar3 + -0x40;
  }
  return iVar3;
}


/* END FUNCTION 0x101090ca */
