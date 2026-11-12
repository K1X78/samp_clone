/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004310e0
 * Name: FUN_004310e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004310e0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  pbVar2 = (byte *)FUN_00424060(*param_3);
  uVar3 = FUN_0041ff70();
  lVar7 = __allmul(uVar3,(int)uVar3 >> 0x1f,2,0);
  puVar4 = (undefined1 *)FUN_0042f250((uint)(lVar7 + 1),(int)((ulonglong)(lVar7 + 1) >> 0x20));
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    uVar6 = uVar3;
    if (0 < (int)uVar3) {
      do {
        bVar1 = *pbVar2;
        *puVar5 = (&DAT_004b3158)[bVar1 >> 4];
        puVar5[1] = (&DAT_004b3158)[bVar1 & 0xf];
        puVar5 = puVar5 + 2;
        pbVar2 = pbVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *puVar5 = 0;
    FUN_0042fcb0(param_1,puVar4,(void *)(uVar3 * 2));
  }
  return;
}


/* END FUNCTION 0x004310e0 */
