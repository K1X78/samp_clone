/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4ab0
 * Name: FUN_100e4ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4ab0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = *param_1;
  iVar8 = *(int *)(iVar1 + 0x140);
  if (iVar8 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 1000);
  if (iVar2 != 1) {
    if (iVar2 == 6) {
      return 0;
    }
    uVar3 = *(uint *)(iVar8 + 0x28);
    iVar4 = *(int *)(iVar8 + 0x2c);
    if (param_1[0xb2] == 0) {
      if (param_1[0xaf] == 0) {
        uVar5 = 0;
        uVar7 = 0;
      }
      else {
        uVar5 = 0xffffffff;
        uVar7 = 0xffffffff;
        switch(iVar2) {
        case 2:
        case 5:
          if ((*(uint *)(iVar1 + 0x4b00) & *(uint *)(iVar1 + 0x4b04)) != 0xffffffff) {
            uVar5 = *(uint *)(iVar1 + 0x4b00);
            uVar7 = *(uint *)(iVar1 + 0x4b04);
          }
          break;
        case 3:
        case 4:
          uVar5 = *(uint *)(iVar8 + 8);
          uVar7 = *(uint *)(iVar8 + 0xc);
        }
      }
    }
    else {
      uVar5 = 0;
      uVar7 = 0;
    }
    param_1[0xb3] = 0;
    if (((uVar5 & uVar7) == 0xffffffff) ||
       ((iVar4 <= (int)uVar7 && ((iVar4 < (int)uVar7 || (uVar3 < uVar5)))))) {
      if ((*(int *)(iVar1 + 0x4978) == 8) ||
         (((*(int *)(iVar1 + 0x4960) == 8 || (*(int *)(iVar1 + 0x4978) == 0x20)) ||
          (*(int *)(iVar1 + 0x4960) == 0x20)))) {
        iVar8 = (uVar7 - iVar4) - (uint)(uVar5 < uVar3);
        if ((((iVar8 < 0) ||
             ((iVar8 == 0 || SBORROW4(uVar7,iVar4) != SBORROW4(uVar7 - iVar4,(uint)(uVar5 < uVar3))
              && (uVar5 - uVar3 < 2000)))) || (param_1[0xf3] != 0)) || (param_1[0x102] != 0)) {
          if (param_1[0xb2] != 0) {
            return 0;
          }
          param_1[0xb3] = 1;
          FUN_100d8ae0(iVar1,"Rewind stream after send\n");
          return 0;
        }
        if (param_1[0xa1] != 0) {
          return 0;
        }
        FUN_100d8ae0(iVar1,"NTLM send, close instead of sending %I64d bytes\n",uVar5 - uVar3,iVar8);
      }
      FUN_100dc080(param_1,2);
      *(undefined4 *)(iVar1 + 0x70) = 0;
      *(undefined4 *)(iVar1 + 0x74) = 0;
    }
    if (uVar3 == 0 && iVar4 == 0) {
      return 0;
    }
    uVar6 = FUN_100ec7a0(param_1);
    return uVar6;
  }
  return 0;
}


/* END FUNCTION 0x100e4ab0 */
