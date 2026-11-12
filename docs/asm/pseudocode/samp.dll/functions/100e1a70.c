/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e1a70
 * Name: FUN_100e1a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e1a70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  PCCERT_CONTEXT unaff_EDI;
  undefined4 local_8;
  int local_4;
  
  iVar3 = *unaff_ESI;
  param_1 = param_1 + 0x1e;
  local_8 = 0;
  if ((unaff_ESI[0x3c] == 2) && (unaff_ESI[(uint)(unaff_ESI[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar2 = unaff_ESI[0x39];
  }
  else {
    iVar2 = unaff_ESI[0x28];
  }
  FUN_100d8ae0(iVar3,"schannel: SSL/TLS connection with %s port %hu (step 3/3)\n",iVar2,
               unaff_ESI[0x40]);
  piVar1 = (int *)unaff_ESI[param_1 * 4 + 3];
  if (*piVar1 == 0) {
    return 0x23;
  }
  if (piVar1[0xf] != piVar1[0xe]) {
    if ((piVar1[0xf] & 8U) == 0) {
      FUN_100d8ba0(iVar3,"schannel: failed to setup sequence detection");
    }
    if ((*(byte *)(unaff_ESI[param_1 * 4 + 3] + 0x3c) & 4) == 0) {
      FUN_100d8ba0(iVar3,"schannel: failed to setup replay detection");
    }
    if ((*(byte *)(unaff_ESI[param_1 * 4 + 3] + 0x3c) & 0x10) == 0) {
      FUN_100d8ba0(iVar3,"schannel: failed to setup confidentiality");
    }
    if ((*(uint *)(unaff_ESI[param_1 * 4 + 3] + 0x3c) & 0x100) == 0) {
      FUN_100d8ba0(iVar3,"schannel: failed to setup memory allocation");
    }
    if ((char)((uint)*(undefined4 *)(unaff_ESI[param_1 * 4 + 3] + 0x3c) >> 8) < '\0') {
      return 0x23;
    }
    FUN_100d8ba0(iVar3,"schannel: failed to setup stream orientation");
    return 0x23;
  }
  if ((unaff_ESI[0x3c] == 2) && (unaff_ESI[(uint)(unaff_ESI[0x67] != -1) * 4 + 0x81] != 2)) {
    iVar2 = *(int *)(iVar3 + 0x470);
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x408);
  }
  if (iVar2 == 0) goto LAB_100e1c56;
  local_4 = 0;
  FUN_100cea10();
  iVar2 = FUN_100cea50();
  if (iVar2 == 0) {
    if (local_4 != *(int *)unaff_ESI[param_1 * 4 + 3]) {
      FUN_100d8ae0(iVar3,"schannel: old credential handle is stale, removing\n");
      FUN_100cecc0();
      goto LAB_100e1bfe;
    }
  }
  else {
LAB_100e1bfe:
    iVar2 = FUN_100ced40();
    if (iVar2 != 0) {
      FUN_100cea30();
      FUN_100d8ba0(iVar3,"schannel: failed to store credential handle");
      return iVar2;
    }
    *(int *)(*(int *)unaff_ESI[param_1 * 4 + 3] + 0x10) =
         *(int *)(*(int *)unaff_ESI[param_1 * 4 + 3] + 0x10) + 1;
    FUN_100d8ae0(iVar3,"schannel: stored credential handle in session cache\n");
  }
  FUN_100cea30();
LAB_100e1c56:
  if (*(int *)(iVar3 + 0x440) != 0) {
    iVar2 = (**(code **)(DAT_102acadc + 0x2c))
                      (*(undefined4 *)(unaff_ESI[param_1 * 4 + 3] + 4),0x53,&local_8);
    if ((iVar2 != 0) || (unaff_EDI == (PCCERT_CONTEXT)0x0)) {
      FUN_100d8ba0(iVar3,"schannel: failed to retrieve remote cert context");
      return 0x23;
    }
    iVar3 = FUN_100cf220(iVar3,1);
    if (((iVar3 == 0) && ((unaff_EDI->dwCertEncodingType & 1) != 0)) &&
       (unaff_EDI->cbCertEncoded != 0)) {
      iVar3 = FUN_100f3080();
    }
    CertFreeCertificateContext(unaff_EDI);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  unaff_ESI[param_1 * 4 + 2] = 5;
  return 0;
}


/* END FUNCTION 0x100e1a70 */
