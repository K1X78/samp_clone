/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00438640
 * Name: FUN_00438640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00438640(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  
  puVar4 = param_3;
  piVar3 = param_1;
  iVar8 = param_1[1];
  iVar2 = *param_1;
  iVar5 = iVar8 * 0x10;
  pbVar1 = (byte *)(*(int *)(*(int *)(iVar2 + 8) + 0xc + iVar5) + 0x4a);
  *pbVar1 = *pbVar1 & 0xfb;
  if (*(char *)(iVar2 + 0x1e) != '\0') {
    FUN_00421a90(0);
    return 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_3[1] == 0) {
      FUN_00421a90(0);
      return 0;
    }
    if (((char *)param_3[2] != (char *)0x0) && (*(char *)param_3[2] != '\0')) {
      *(int *)(iVar2 + 0x74) = iVar8;
      lVar6 = _atol((char *)param_3[1]);
      *(long *)(iVar2 + 0x78) = lVar6;
      *(undefined1 *)(iVar2 + 0x7d) = 0;
      FUN_00436170(iVar2,puVar4[2],-1,&param_1,(int *)0x0);
      iVar8 = *(int *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x74) = 0;
      if ((iVar8 != 0) && (*(char *)(iVar2 + 0x7d) == '\0')) {
        piVar3[3] = iVar8;
        if (iVar8 == 7) {
          *(undefined1 *)(iVar2 + 0x1e) = 1;
          FUN_00434350(param_1);
          return 0;
        }
        if ((iVar8 != 9) && ((char)iVar8 != '\x06')) {
          pcVar7 = FUN_00423080(iVar2);
          FUN_00421a90((int)pcVar7);
        }
      }
      FUN_00434350(param_1);
      return 0;
    }
    if ((char *)*param_3 == (char *)0x0) {
      FUN_00421a90(0);
      return 0;
    }
    iVar8 = FUN_0040ee60((char *)*param_3,*(byte **)(*(int *)(iVar2 + 8) + iVar5));
    if (iVar8 != 0) {
      iVar8 = FUN_00408b60((char *)puVar4[1],(uint *)(iVar8 + 0x14));
      if (iVar8 == 0) {
        FUN_00421a90(0x4b89ac);
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00438640 */
