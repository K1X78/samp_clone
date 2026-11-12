/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db510
 * Name: FUN_100db510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100db510(void)

{
  int iVar1;
  int unaff_ESI;
  SOCKET unaff_EDI;
  uint local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_14 = (uint)(*(int *)(unaff_ESI + 0x6c0) != 0);
  iVar1 = setsockopt(unaff_EDI,0xffff,8,(char *)&local_14,4);
  if (iVar1 < 0) {
    FUN_100d8ae0();
    return;
  }
  local_c = 1;
  iVar1 = FUN_100d9a30(*(undefined4 *)(unaff_ESI + 0x6c4));
  local_14 = iVar1 * 1000;
  local_8 = local_14;
  iVar1 = FUN_100d9a30(*(undefined4 *)(unaff_ESI + 0x6c8));
  local_14 = iVar1 * 1000;
  local_4 = local_14;
  iVar1 = WSAIoctl(unaff_EDI,0x98000004,&local_c,0xc,0,0,local_10,0,0);
  if (iVar1 != 0) {
    WSAGetLastError();
    FUN_100d8ae0();
  }
  return;
}


/* END FUNCTION 0x100db510 */
