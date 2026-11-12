/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e0e90
 * Name: FUN_100e0e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e0e90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  
  uVar2 = *in_EAX;
  if ((in_EAX[0x3c] == 2) && (in_EAX[(uint)(in_EAX[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar4 = in_EAX[0x94];
  }
  else {
    iVar4 = in_EAX[0x88];
  }
  if ((in_EAX[0x3c] == 2) && (in_EAX[(uint)(in_EAX[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar3 = in_EAX[0x95];
  }
  else {
    iVar3 = in_EAX[0x89];
  }
  if (iVar3 == 0) {
    iVar3 = iVar4 << 0x10;
  }
  else if (iVar3 == 0x10000) {
    iVar3 = 0x60000;
  }
  if (iVar4 <= iVar3 >> 0x10) {
    iVar4 = iVar4 + -4;
    do {
      switch(iVar4) {
      case 0:
        uVar5 = *(uint *)(unaff_ESI + 0x20) | 0x80;
        break;
      case 1:
        uVar5 = *(uint *)(unaff_ESI + 0x20) | 0x200;
        break;
      case 2:
        uVar5 = *(uint *)(unaff_ESI + 0x20) | 0x800;
        break;
      case 3:
        FUN_100d8ba0(uVar2,"Schannel: TLS 1.3 is not yet supported");
        return 0x23;
      default:
        goto switchD_100e0f25_default;
      }
      *(uint *)(unaff_ESI + 0x20) = uVar5;
switchD_100e0f25_default:
      iVar1 = iVar4 + 5;
      iVar4 = iVar4 + 1;
    } while (iVar1 <= iVar3 >> 0x10);
  }
  return 0;
}


/* END FUNCTION 0x100e0e90 */
