/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4c40
 * Name: FUN_100e4c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e4c40(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int unaff_EDI;
  
  iVar1 = *in_EAX;
  pcVar5 = (char *)0x0;
  if (unaff_EDI == 0) {
    puVar6 = (undefined4 *)(iVar1 + 0x48dc);
  }
  else {
    puVar6 = (undefined4 *)(iVar1 + 0x491c);
  }
  *puVar6 = 0;
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 4) && (puVar6[3] != 0)) && (-1 < (int)puVar6[1])) {
    pcVar5 = "Negotiate";
    iVar2 = FUN_100f3c50();
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
    *puVar6 = 2;
    goto LAB_100e4d65;
  }
  if (iVar2 == 8) {
    pcVar5 = "NTLM";
    iVar2 = FUN_100ec010();
    if (iVar2 != 0) {
      return iVar2;
    }
    goto LAB_100e4d65;
  }
  if (iVar2 == 2) {
    pcVar5 = "Digest";
    iVar2 = FUN_100eb6e0();
    if (iVar2 != 0) {
      return iVar2;
    }
    goto LAB_100e4d65;
  }
  if (iVar2 != 1) goto LAB_100e4dcd;
  if (unaff_EDI == 0) {
    if (in_EAX[0xa8] != 0) {
      iVar2 = FUN_100ec550();
      goto joined_r0x100e4d3c;
    }
  }
  else if (in_EAX[0xa9] != 0) {
    iVar2 = FUN_100e47d0();
joined_r0x100e4d3c:
    if (iVar2 == 0) {
      pcVar5 = "Basic";
      iVar2 = FUN_100e4910();
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (pcVar5 == (char *)0x0) {
LAB_100e4dcd:
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 0;
  }
LAB_100e4d65:
  if (unaff_EDI == 0) {
    puVar3 = (undefined1 *)in_EAX[0x5c];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_10117a39;
    }
    pcVar4 = "Server";
  }
  else {
    puVar3 = (undefined1 *)in_EAX[0x3d];
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_10117a39;
      pcVar4 = "Proxy";
    }
    else {
      pcVar4 = "Proxy";
    }
  }
  FUN_100d8ae0(iVar1,"%s auth using %s with user \'%s\'\n",pcVar4,pcVar5,puVar3);
  *(uint *)(param_1 + 0x10) = (uint)(*(int *)(param_1 + 0xc) == 0);
  return 0;
}


/* END FUNCTION 0x100e4c40 */
