/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10080210
 * Name: FUN_10080210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10080210(void)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  undefined4 *puVar3;
  undefined4 *puVar4;
  tagRECT *lpRect;
  tagRECT local_a0;
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_48 [72];
  
  lpRect = &local_a0;
  FUN_1007cbc0();
  cVar1 = FUN_10078c20();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079880();
    if (cVar1 != '\0') {
      FUN_1007cbc0();
      iVar2 = FUN_10078460();
      if (*(int *)(iVar2 + 0x30) != 0) {
        hWnd = (HWND)FUN_1007bed0();
        GetClientRect(hWnd,lpRect);
        FUN_1007cbc0();
        iVar2 = FUN_10078460();
        if (local_a0.right == *(int *)(iVar2 + 0x10)) {
          FUN_1007cbc0();
          iVar2 = FUN_10078460();
          if (local_a0.bottom == *(int *)(iVar2 + 0x14)) {
            return;
          }
        }
        puVar3 = (undefined4 *)FUN_1007d630(local_48);
        puVar4 = local_90;
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_80 = 0;
        local_7c = 0;
        FUN_1007f770(local_90,0,0,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x10080210 */
