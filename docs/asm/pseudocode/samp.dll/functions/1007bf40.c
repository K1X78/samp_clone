/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007bf40
 * Name: FUN_1007bf40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007bf40(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  HWND pHVar4;
  LPCSTR lpCaption;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  UINT uType;
  char local_200 [512];
  
  bVar1 = true;
  switch(param_1) {
  case 0x80040901:
    uVar7 = 2;
    iVar5 = 0x200;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)
                 "Could not initialize Direct3D. You may want to check that the latest version of DirectX is correctly installed on your system.  Also make sure that this program was compiled with header files that match the installed DirectX DLLs."
                 - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)
                       "Could not initialize Direct3D. You may want to check that the latest version of DirectX is correctly installed on your system.  Also make sure that this program was compiled with header files that match the installed DirectX DLLs."
                       - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040902:
    uVar7 = 3;
    iVar5 = GetSystemMetrics(0x1000);
    iVar6 = 0x200;
    if (iVar5 == 0) {
      pcVar8 = local_200;
      do {
        pcVar3 = pcVar8;
        if (pcVar3[(int)"Could not find any compatible Direct3D devices." - (int)local_200] == '\0')
        {
          if (iVar6 == 0) {
            pcVar3 = pcVar3 + -1;
          }
          *pcVar3 = '\0';
          goto LAB_1007c1cb;
        }
        *pcVar3 = pcVar3[(int)"Could not find any compatible Direct3D devices." - (int)local_200];
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar3 + 1;
      } while (iVar6 != 0);
      *pcVar3 = '\0';
    }
    else {
      pcVar8 = local_200;
      do {
        pcVar3 = pcVar8;
        if (pcVar3[(int)"Direct3D does not work over a remote session." - (int)local_200] == '\0') {
          if (iVar6 == 0) {
            pcVar3 = pcVar3 + -1;
          }
          *pcVar3 = '\0';
          goto LAB_1007c1cb;
        }
        *pcVar3 = pcVar3[(int)"Direct3D does not work over a remote session." - (int)local_200];
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar3 + 1;
      } while (iVar6 != 0);
      *pcVar3 = '\0';
    }
    break;
  case 0x80040903:
    uVar7 = 4;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)
                 "Could not find required media. Ensure that the DirectX SDK is correctly installed."
                 - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)
                       "Could not find required media. Ensure that the DirectX SDK is correctly installed."
                       - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040904:
    uVar7 = 5;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)
                 "The D3D device has a non-zero reference count, meaning some objects were not released."
                 - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)
                       "The D3D device has a non-zero reference count, meaning some objects were not released."
                       - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040905:
    uVar7 = 6;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)"Failed creating the Direct3D device." - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)"Failed creating the Direct3D device." - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040906:
    uVar7 = 7;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)"Failed resetting the Direct3D device." - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)"Failed resetting the Direct3D device." - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040907:
    uVar7 = 8;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)"Failed creating Direct3D device objects." - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)"Failed creating Direct3D device objects." - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040908:
    uVar7 = 9;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)"Failed resetting Direct3D device objects." - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)"Failed resetting Direct3D device objects." - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  case 0x80040909:
    uVar7 = 10;
    iVar5 = 0x200;
    bVar1 = true;
    pcVar8 = local_200;
    do {
      pcVar3 = pcVar8;
      if (pcVar3[(int)"Incorrect version of Direct3D and/or D3DX." - (int)local_200] == '\0') {
        if (iVar5 == 0) {
          pcVar3 = pcVar3 + -1;
        }
        *pcVar3 = '\0';
        goto LAB_1007c1cb;
      }
      *pcVar3 = pcVar3[(int)"Incorrect version of Direct3D and/or D3DX." - (int)local_200];
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar3 + 1;
    } while (iVar5 != 0);
    *pcVar3 = '\0';
    break;
  default:
    bVar1 = false;
    uVar7 = 1;
  }
LAB_1007c1cb:
  FUN_1007cbc0(uVar7);
  FUN_100796c0(uVar7);
  FUN_1007cbc0();
  cVar2 = FUN_10079340();
  pcVar8 = local_200;
  if ((bVar1) && (cVar2 != '\0')) {
    pcVar3 = (char *)FUN_1007b4b0();
    uType = 0x10;
    if (*pcVar3 == '\0') {
      pcVar3 = "DirectX Application";
      pHVar4 = (HWND)FUN_1007bed0();
      MessageBoxA(pHVar4,pcVar8,pcVar3,uType);
      return;
    }
    lpCaption = (LPCSTR)FUN_1007b4b0();
    pcVar8 = local_200;
    pHVar4 = (HWND)FUN_1007bed0();
    MessageBoxA(pHVar4,pcVar8,lpCaption,uType);
  }
  return;
}


/* END FUNCTION 0x1007bf40 */
