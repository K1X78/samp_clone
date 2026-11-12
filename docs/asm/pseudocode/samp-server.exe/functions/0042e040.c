/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042e040
 * Name: FUN_0042e040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042e040(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  void *in_EAX;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_0040ce30();
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = (byte *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar3 = FUN_0042db80(in_EAX,0,1);
  pbVar1 = local_3c;
  if (uVar3 == 0) {
    if (*local_3c < 0x80) {
      uVar3 = (uint)*local_3c;
    }
    else {
      FUN_00408ed0(local_3c);
      uVar3 = 0;
    }
    uVar2 = local_38;
    if ((2 < uVar3) && ((int)uVar3 <= (int)local_38)) {
      bVar5 = pbVar1[uVar3 - 1];
      if (0x7f < bVar5) {
        FUN_00408ed0(pbVar1 + (uVar3 - 1));
        bVar5 = 0;
      }
      if ((((bVar5 != 0) && (bVar5 < 10)) && (bVar5 != 7)) &&
         (uVar4 = FUN_0040d9a0(), uVar4 + uVar3 <= uVar2)) {
        FUN_0040da70((char *)(pbVar1 + (uVar2 - uVar4)));
        *param_1 = local_28;
        param_1[1] = local_24;
        FUN_0040d250((int)&local_50);
        return 0;
      }
    }
    FUN_0040d250((int)&local_50);
    uVar3 = FUN_0041d790();
  }
  return uVar3;
}


/* END FUNCTION 0x0042e040 */
