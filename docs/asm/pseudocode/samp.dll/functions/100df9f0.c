/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df9f0
 * Name: FUN_100df9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100df9f0(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  _OSVERSIONINFOA *p_Var4;
  bool bVar5;
  _OSVERSIONINFOA local_a0;
  
  p_Var4 = &local_a0;
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var4->dwOSVersionInfoSize = 0;
    p_Var4 = (_OSVERSIONINFOA *)&p_Var4->dwMajorVersion;
  }
  uVar3 = 0;
  local_a0.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_a0);
  if (BVar1 != 0) {
    switch(param_4) {
    case 0:
      if (param_1 <= local_a0.dwMajorVersion) {
        if (local_a0.dwMajorVersion != param_1) {
          return 0;
        }
        if (param_2 <= local_a0.dwMinorVersion) {
          return 0;
        }
      }
      break;
    case 1:
      if (param_1 < local_a0.dwMajorVersion) {
        return 0;
      }
      if (param_2 < local_a0.dwMinorVersion) {
        return 0;
      }
      break;
    case 2:
      if (local_a0.dwMajorVersion != param_1) {
        return 0;
      }
      if (local_a0.dwMinorVersion != param_2) {
        return 0;
      }
      break;
    case 3:
      if (local_a0.dwMajorVersion < param_1) {
        return 0;
      }
      if (local_a0.dwMinorVersion < param_2) {
        return 0;
      }
      break;
    case 4:
      if (local_a0.dwMajorVersion <= param_1) {
        if (local_a0.dwMajorVersion != param_1) {
          return 0;
        }
        if (local_a0.dwMinorVersion <= param_2) {
          return 0;
        }
      }
      break;
    default:
      goto switchD_100dfa34_default;
    }
    uVar3 = 1;
    if (param_3 == 1) {
      bVar5 = local_a0.dwPlatformId == 1;
    }
    else {
      if (param_3 != 2) {
        return 1;
      }
      bVar5 = local_a0.dwPlatformId == 2;
    }
    if (!bVar5) {
      uVar3 = 0;
    }
  }
switchD_100dfa34_default:
  return uVar3;
}


/* END FUNCTION 0x100df9f0 */
