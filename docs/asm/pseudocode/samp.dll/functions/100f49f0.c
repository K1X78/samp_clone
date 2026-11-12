/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f49f0
 * Name: FUN_100f49f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f49f0(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = 0;
  local_8 = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_4 = (int)pcVar2 - (int)(param_2 + 1);
  if ((local_4 != 0) && (*param_2 != '=')) {
    iVar3 = FUN_100e3c50(param_2,&local_c,&local_8);
    if (iVar3 == 0) {
      if (local_c == 0) goto LAB_100f4a43;
      *(int *)(param_3 + 0x34) = local_c;
      *(undefined4 *)(param_3 + 0x38) = local_8;
    }
    return iVar3;
  }
LAB_100f4a43:
  FUN_100d8ae0(param_1,"NTLM handshake failure (empty type-2 message)\n");
  return 0x3d;
}


/* END FUNCTION 0x100f49f0 */
