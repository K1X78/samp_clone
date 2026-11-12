/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100935d0
 * Name: FUN_100935d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100935d0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_20 [4];
  undefined1 local_10 [16];
  
  if (*(char *)(param_1 + 0x100) != '\0') {
    puVar1 = (undefined4 *)FUN_100933d0(local_20,(float)param_2,(float)param_3);
    *(undefined4 *)(param_1 + 0x115) = *puVar1;
    *(undefined4 *)(param_1 + 0x119) = puVar1[1];
    *(undefined4 *)(param_1 + 0x11d) = puVar1[2];
    uVar2 = FUN_100934a0(local_10,param_1 + 0x109,(undefined4 *)(param_1 + 0x115));
    D3DXQuaternionMultiply(local_20,param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xf0) = uVar2;
    *(undefined4 *)(param_1 + 0xf4) = unaff_EDI;
    *(undefined4 *)(param_1 + 0xf8) = unaff_ESI;
    *(undefined4 *)(param_1 + 0xfc) = local_20[0];
  }
  return;
}


/* END FUNCTION 0x100935d0 */
