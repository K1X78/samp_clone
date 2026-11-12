/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004010d0
 * Name: FUN_004010d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004010d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + 0xc) + iVar2;
  iVar5 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc);
  iVar2 = 0;
  param_1[10] = 0x4000;
  param_1[0x19] = 0x87;
  if (0 < iVar5) {
    do {
      if (0xff < *(int *)(iVar2 + iVar1)) {
switchD_0040111e_default:
        param_1[10] = param_1[10] & 0xffffbfff;
        return 6;
      }
      iVar3 = iVar2 + 4;
      switch(*(int *)(iVar2 + iVar1)) {
      case 9:
      case 0x17:
      case 0x19:
      case 0x1b:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x2a:
      case 0x2b:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x32:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x59:
      case 0x5a:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6b:
      case 0x6c:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x74:
      case 0x7a:
      case 0x80:
      case 0x83:
      case 0x84:
      case 0x86:
      case 0x89:
        break;
      case 0x31:
      case 0x33:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x81:
        *(int *)(iVar3 + iVar1) = *(int *)(iVar3 + iVar1) + iVar1;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x1a:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2c:
      case 0x2d:
      case 0x34:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x57:
      case 0x58:
      case 0x5b:
      case 0x5c:
      case 0x69:
      case 0x6a:
      case 0x6d:
      case 0x6e:
      case 0x72:
      case 0x73:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7b:
      case 0x85:
      case 0x87:
      case 0x88:
        iVar3 = iVar2 + 8;
        break;
      case 0x7c:
      case 0x7e:
        iVar3 = iVar2 + 8 + *(int *)(iVar3 + iVar1);
        break;
      case 0x7d:
      case 0x7f:
        iVar3 = iVar2 + 0xc;
        break;
      case 0x82:
        iVar3 = *(int *)(iVar3 + iVar1);
        if (-1 < iVar3) {
          piVar4 = (int *)(iVar2 + 8 + iVar1);
          iVar6 = iVar3 + 1;
          do {
            *piVar4 = *piVar4 + iVar1;
            piVar4 = piVar4 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar3 = iVar2 + 0xc + iVar3 * 8;
        break;
      default:
        goto switchD_0040111e_default;
      }
      iVar2 = iVar3;
    } while (iVar3 < iVar5);
  }
  param_1[10] = param_1[10] & 0xffffbfffU | 0x8000;
  return 0;
}


/* END FUNCTION 0x004010d0 */
