/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10094cc0
 * Name: FUN_10094cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10094cc0(int param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  char *_Str;
  
  if (param_1 < 0x44) {
    if (param_1 == 0x43) {
      _Str = "D3DFMT_A2W10V10U10";
      goto LAB_10094f75;
    }
    switch(param_1) {
    case 0:
      _Str = "D3DFMT_UNKNOWN";
      break;
    default:
      goto switchD_10094ce4_caseD_1;
    case 0x14:
      _Str = "D3DFMT_R8G8B8";
      break;
    case 0x15:
      _Str = "D3DFMT_A8R8G8B8";
      break;
    case 0x16:
      _Str = "D3DFMT_X8R8G8B8";
      break;
    case 0x17:
      _Str = "D3DFMT_R5G6B5";
      break;
    case 0x18:
      _Str = "D3DFMT_X1R5G5B5";
      break;
    case 0x19:
      _Str = "D3DFMT_A1R5G5B5";
      break;
    case 0x1a:
      _Str = "D3DFMT_A4R4G4B4";
      break;
    case 0x1b:
      _Str = "D3DFMT_R3G3B2";
      break;
    case 0x1c:
      _Str = "D3DFMT_A8";
      break;
    case 0x1d:
      _Str = "D3DFMT_A8R3G3B2";
      break;
    case 0x1e:
      _Str = "D3DFMT_X4R4G4B4";
      break;
    case 0x1f:
      _Str = "D3DFMT_A2B10G10R10";
      break;
    case 0x20:
      _Str = "D3DFMT_A8B8G8R8";
      break;
    case 0x21:
      _Str = "D3DFMT_X8B8G8R8";
      break;
    case 0x22:
      _Str = "D3DFMT_G16R16";
      break;
    case 0x23:
      _Str = "D3DFMT_A2R10G10B10";
      break;
    case 0x24:
      _Str = "D3DFMT_A16B16G16R16";
      break;
    case 0x28:
      _Str = "D3DFMT_A8P8";
      break;
    case 0x29:
      _Str = "D3DFMT_P8";
      break;
    case 0x32:
      _Str = "D3DFMT_L8";
      break;
    case 0x33:
      _Str = "D3DFMT_A8L8";
      break;
    case 0x34:
      _Str = "D3DFMT_A4L4";
      break;
    case 0x3c:
      _Str = "D3DFMT_V8U8";
      break;
    case 0x3d:
      _Str = "D3DFMT_L6V5U5";
      break;
    case 0x3e:
      _Str = "D3DFMT_X8L8V8U8";
      break;
    case 0x3f:
      _Str = "D3DFMT_Q8W8V8U8";
      break;
    case 0x40:
      _Str = "D3DFMT_V16U16";
    }
    goto LAB_10094f75;
  }
  if (param_1 < 0x65) {
    if (param_1 == 100) {
      _Str = "D3DFMT_VERTEXDATA";
      goto LAB_10094f75;
    }
    switch(param_1) {
    case 0x46:
      _Str = "D3DFMT_D16_LOCKABLE";
      break;
    case 0x47:
      _Str = "D3DFMT_D32";
      break;
    default:
      goto switchD_10094ce4_caseD_1;
    case 0x49:
      _Str = "D3DFMT_D15S1";
      break;
    case 0x4b:
      _Str = "D3DFMT_D24S8";
      break;
    case 0x4d:
      _Str = "D3DFMT_D24X8";
      break;
    case 0x4f:
      _Str = "D3DFMT_D24X4S4";
      break;
    case 0x50:
      _Str = "D3DFMT_D16";
      break;
    case 0x51:
      _Str = "D3DFMT_L16";
    }
    goto LAB_10094f75;
  }
  if (param_1 < 0x76) {
    if (param_1 == 0x75) {
      _Str = "D3DFMT_CxV8U8";
      goto LAB_10094f75;
    }
    switch(param_1) {
    case 0x65:
      _Str = "D3DFMT_INDEX16";
      break;
    case 0x66:
      _Str = "D3DFMT_INDEX32";
      break;
    default:
      goto switchD_10094ce4_caseD_1;
    case 0x6e:
      _Str = "D3DFMT_Q16W16V16U16";
      break;
    case 0x6f:
      _Str = "D3DFMT_R16F";
      break;
    case 0x70:
      _Str = "D3DFMT_G16R16F";
      break;
    case 0x71:
      _Str = "D3DFMT_A16B16G16R16F";
      break;
    case 0x72:
      _Str = "D3DFMT_R32F";
      break;
    case 0x73:
      _Str = "D3DFMT_G32R32F";
      break;
    case 0x74:
      _Str = "D3DFMT_A32B32G32R32F";
    }
  }
  else {
    if (param_1 < 0x33545845) {
      if (param_1 == 0x33545844) {
        _Str = "D3DFMT_DXT3";
        goto LAB_10094f75;
      }
      if (param_1 < 0x32545845) {
        if (param_1 == 0x32545844) {
          _Str = "D3DFMT_DXT2";
          goto LAB_10094f75;
        }
        if (param_1 == 0x3154454d) {
          _Str = "D3DFMT_MULTI2_ARGB8";
          goto LAB_10094f75;
        }
        if (param_1 == 0x31545844) {
          _Str = "D3DFMT_DXT1";
          goto LAB_10094f75;
        }
      }
      else if (param_1 == 0x32595559) {
        _Str = "D3DFMT_YUY2";
        goto LAB_10094f75;
      }
    }
    else {
      if (param_1 == 0x34545844) {
        _Str = "D3DFMT_DXT4";
        goto LAB_10094f75;
      }
      if (param_1 == 0x35545844) {
        _Str = "D3DFMT_DXT5";
        goto LAB_10094f75;
      }
      if (param_1 == 0x59565955) {
        _Str = "D3DFMT_UYVY";
        goto LAB_10094f75;
      }
    }
switchD_10094ce4_caseD_1:
    _Str = "Unknown format";
  }
LAB_10094f75:
  if ((param_2 == '\0') && (pcVar1 = _strstr(_Str,"D3DFMT_"), pcVar1 != (char *)0x0)) {
    iVar2 = lstrlenA("D3DFMT_");
    return _Str + iVar2;
  }
  return _Str;
}


/* END FUNCTION 0x10094cc0 */
