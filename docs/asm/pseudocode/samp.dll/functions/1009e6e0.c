/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e6e0
 * Name: FUN_1009e6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e6e0(char *param_1)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,"CreateObject",0xc);
  if (iVar1 == 0) {
    FUN_1009e2f0(param_1);
    FUN_1009e340();
    return;
  }
  iVar1 = _strncmp(param_1,"CreateVehicle",0xd);
  if (iVar1 != 0) {
    iVar1 = _strncmp(param_1,"AddStaticVehicle",0x10);
    if (iVar1 != 0) {
      iVar1 = _strncmp(param_1,"SetPlayerCameraPos",0x12);
      if (iVar1 == 0) {
        FUN_1009e2f0(param_1);
        FUN_1009e560();
        return;
      }
      iVar1 = _strncmp(param_1,"SetPlayerCameraLookAt",0x15);
      if (iVar1 == 0) {
        FUN_1009e2f0(param_1);
      }
      else {
        iVar1 = _strncmp(param_1,"RemoveBuildingForPlayer",0x17);
        if (iVar1 == 0) {
          FUN_1009e2f0(param_1);
          FUN_1009e5d0();
          return;
        }
        iVar1 = _strncmp(param_1,"SetPlayerInterior",0x11);
        if (iVar1 == 0) {
          FUN_1009e2f0(param_1);
          FUN_1009e690();
          return;
        }
      }
      return;
    }
  }
  FUN_1009e2f0(param_1);
  FUN_1009e450();
  return;
}


/* END FUNCTION 0x1009e6e0 */
