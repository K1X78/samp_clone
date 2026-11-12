/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8280
 * Name: FUN_100c8280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100c8280(int param_1,DWORD param_2)

{
  int iVar1;
  DWORD dwErrCode;
  int *piVar2;
  char *pcVar3;
  DWORD DVar4;
  char *_Dest;
  char local_150 [79];
  undefined1 local_101;
  CHAR local_100 [255];
  undefined1 local_1;
  
  dwErrCode = GetLastError();
  piVar2 = (int *)FUN_100fdc77();
  iVar1 = *piVar2;
  _Dest = (char *)(param_1 + 0x444);
  *_Dest = '\0';
  if ((int)param_2 < -0x7ff6dfef) {
    if (param_2 == 0x80092010) {
      pcVar3 = "CRYPT_E_REVOKED";
      goto LAB_100c859a;
    }
    switch(param_2) {
    case 0x80090300:
      pcVar3 = "SEC_E_INSUFFICIENT_MEMORY";
      break;
    case 0x80090301:
      pcVar3 = "SEC_E_INVALID_HANDLE";
      break;
    case 0x80090302:
      pcVar3 = "SEC_E_UNSUPPORTED_FUNCTION";
      break;
    case 0x80090303:
      pcVar3 = "SEC_E_TARGET_UNKNOWN";
      break;
    case 0x80090304:
      pcVar3 = "SEC_E_INTERNAL_ERROR";
      break;
    case 0x80090305:
      pcVar3 = "SEC_E_SECPKG_NOT_FOUND";
      break;
    case 0x80090306:
      pcVar3 = "SEC_E_NOT_OWNER";
      break;
    case 0x80090307:
      pcVar3 = "SEC_E_CANNOT_INSTALL";
      break;
    case 0x80090308:
      pcVar3 = "SEC_E_INVALID_TOKEN";
      break;
    case 0x80090309:
      pcVar3 = "SEC_E_CANNOT_PACK";
      break;
    case 0x8009030a:
      pcVar3 = "SEC_E_QOP_NOT_SUPPORTED";
      break;
    case 0x8009030b:
      pcVar3 = "SEC_E_NO_IMPERSONATION";
      break;
    case 0x8009030c:
      pcVar3 = "SEC_E_LOGON_DENIED";
      break;
    case 0x8009030d:
      pcVar3 = "SEC_E_UNKNOWN_CREDENTIALS";
      break;
    case 0x8009030e:
      pcVar3 = "SEC_E_NO_CREDENTIALS";
      break;
    case 0x8009030f:
      pcVar3 = "SEC_E_MESSAGE_ALTERED";
      break;
    case 0x80090310:
      pcVar3 = "SEC_E_OUT_OF_SEQUENCE";
      break;
    case 0x80090311:
      pcVar3 = "SEC_E_NO_AUTHENTICATING_AUTHORITY";
      break;
    default:
switchD_100c82d2_caseD_80090312:
      pcVar3 = "Unknown error";
      break;
    case 0x80090316:
      pcVar3 = "SEC_E_BAD_PKGID";
      break;
    case 0x80090317:
      pcVar3 = "SEC_E_CONTEXT_EXPIRED";
      break;
    case 0x80090318:
      pcVar3 = "SEC_E_INCOMPLETE_MESSAGE";
      break;
    case 0x80090320:
      pcVar3 = "SEC_E_INCOMPLETE_CREDENTIALS";
      break;
    case 0x80090321:
      pcVar3 = "SEC_E_BUFFER_TOO_SMALL";
      break;
    case 0x80090322:
      pcVar3 = "SEC_E_WRONG_PRINCIPAL";
      break;
    case 0x80090324:
      pcVar3 = "SEC_E_TIME_SKEW";
      break;
    case 0x80090325:
      pcVar3 = "SEC_E_UNTRUSTED_ROOT";
      break;
    case 0x80090326:
      pcVar3 = "SEC_E_ILLEGAL_MESSAGE";
      break;
    case 0x80090327:
      pcVar3 = "SEC_E_CERT_UNKNOWN";
      break;
    case 0x80090328:
      pcVar3 = "SEC_E_CERT_EXPIRED";
      break;
    case 0x80090329:
      pcVar3 = "SEC_E_ENCRYPT_FAILURE";
      break;
    case 0x80090330:
      pcVar3 = "SEC_E_DECRYPT_FAILURE";
      break;
    case 0x80090331:
      pcVar3 = "SEC_E_ALGORITHM_MISMATCH";
      break;
    case 0x80090332:
      pcVar3 = "SEC_E_SECURITY_QOS_FAILED";
      break;
    case 0x80090333:
      pcVar3 = "SEC_E_UNFINISHED_CONTEXT_DELETED";
      break;
    case 0x80090334:
      pcVar3 = "SEC_E_NO_TGT_REPLY";
      break;
    case 0x80090335:
      pcVar3 = "SEC_E_NO_IP_ADDRESSES";
      break;
    case 0x80090336:
      pcVar3 = "SEC_E_WRONG_CREDENTIAL_HANDLE";
      break;
    case 0x80090337:
      pcVar3 = "SEC_E_CRYPTO_SYSTEM_INVALID";
      break;
    case 0x80090338:
      pcVar3 = "SEC_E_MAX_REFERRALS_EXCEEDED";
      break;
    case 0x80090339:
      pcVar3 = "SEC_E_MUST_BE_KDC";
      break;
    case 0x8009033a:
      pcVar3 = "SEC_E_STRONG_CRYPTO_NOT_SUPPORTED";
      break;
    case 0x8009033b:
      pcVar3 = "SEC_E_TOO_MANY_PRINCIPALS";
      break;
    case 0x8009033c:
      pcVar3 = "SEC_E_NO_PA_DATA";
      break;
    case 0x8009033d:
      pcVar3 = "SEC_E_PKINIT_NAME_MISMATCH";
      break;
    case 0x8009033e:
      pcVar3 = "SEC_E_SMARTCARD_LOGON_REQUIRED";
      break;
    case 0x8009033f:
      pcVar3 = "SEC_E_SHUTDOWN_IN_PROGRESS";
      break;
    case 0x80090340:
      pcVar3 = "SEC_E_KDC_INVALID_REQUEST";
      break;
    case 0x80090341:
      pcVar3 = "SEC_E_KDC_UNABLE_TO_REFER";
      break;
    case 0x80090342:
      pcVar3 = "SEC_E_KDC_UNKNOWN_ETYPE";
      break;
    case 0x80090343:
      pcVar3 = "SEC_E_UNSUPPORTED_PREAUTH";
      break;
    case 0x80090345:
      pcVar3 = "SEC_E_DELEGATION_REQUIRED";
      break;
    case 0x80090346:
      pcVar3 = "SEC_E_BAD_BINDINGS";
      break;
    case 0x80090347:
      pcVar3 = "SEC_E_MULTIPLE_ACCOUNTS";
      break;
    case 0x80090348:
      pcVar3 = "SEC_E_NO_KERB_KEY";
      break;
    case 0x80090349:
      pcVar3 = "SEC_E_CERT_WRONG_USAGE";
      break;
    case 0x80090350:
      pcVar3 = "SEC_E_DOWNGRADE_DETECTED";
      break;
    case 0x80090351:
      pcVar3 = "SEC_E_SMARTCARD_CERT_REVOKED";
      break;
    case 0x80090352:
      pcVar3 = "SEC_E_ISSUING_CA_UNTRUSTED";
      break;
    case 0x80090353:
      pcVar3 = "SEC_E_REVOCATION_OFFLINE_C";
      break;
    case 0x80090354:
      pcVar3 = "SEC_E_PKINIT_CLIENT_FAILURE";
      break;
    case 0x80090355:
      pcVar3 = "SEC_E_SMARTCARD_CERT_EXPIRED";
      break;
    case 0x80090356:
      pcVar3 = "SEC_E_NO_S4U_PROT_SUPPORT";
      break;
    case 0x80090357:
      pcVar3 = "SEC_E_CROSSREALM_DELEGATION_FAILURE";
      break;
    case 0x80090358:
      pcVar3 = "SEC_E_REVOCATION_OFFLINE_KDC";
      break;
    case 0x80090359:
      pcVar3 = "SEC_E_ISSUING_CA_UNTRUSTED_KDC";
      break;
    case 0x8009035a:
      pcVar3 = "SEC_E_KDC_CERT_EXPIRED";
      break;
    case 0x8009035b:
      pcVar3 = "SEC_E_KDC_CERT_REVOKED";
      break;
    case 0x8009035d:
      pcVar3 = "SEC_E_INVALID_PARAMETER";
      break;
    case 0x8009035e:
      pcVar3 = "SEC_E_DELEGATION_POLICY";
      break;
    case 0x8009035f:
      pcVar3 = "SEC_E_POLICY_NLTM_ONLY";
    }
LAB_100c86f5:
    if (param_2 != 0) {
      if (param_2 == 0x80090326) {
        FUN_100cc780(_Dest,0xff,
                     "SEC_E_ILLEGAL_MESSAGE (0x%08X) - This error usually occurs when a fatal SSL/TLS alert is received (e.g. handshake failed). More detail may be available in the Windows System event log."
                     ,0x80090326);
        goto LAB_100c8736;
      }
LAB_100c859a:
      FUN_100cc780(local_150,0x50,"%s (0x%08X)",pcVar3,param_2);
      local_101 = 0;
      DVar4 = FormatMessageA(0x1200,(LPCVOID)0x0,param_2,0,local_100,0xff,(va_list *)0x0);
      if (DVar4 != 0) {
        local_1 = 0;
        pcVar3 = _strrchr(local_100,10);
        if ((pcVar3 != (char *)0x0) && (1 < (int)pcVar3 - (int)local_100)) {
          *pcVar3 = '\0';
        }
        pcVar3 = _strrchr(local_100,0xd);
        if ((pcVar3 != (char *)0x0) && (0 < (int)pcVar3 - (int)local_100)) {
          *pcVar3 = '\0';
        }
        FUN_100cc780(_Dest,0xff,"%s - %s",local_150,local_100);
        goto LAB_100c8736;
      }
      pcVar3 = local_150;
    }
  }
  else {
    if (0x90317 < (int)param_2) {
      switch(param_2) {
      case 0x90320:
        pcVar3 = "SEC_I_INCOMPLETE_CREDENTIALS";
        break;
      case 0x90321:
        pcVar3 = "SEC_I_RENEGOTIATE";
        break;
      default:
        goto switchD_100c82d2_caseD_80090312;
      case 0x90323:
        pcVar3 = "SEC_I_NO_LSA_CONTEXT";
        break;
      case 0x9035c:
        pcVar3 = "SEC_I_SIGNATURE_NEEDED";
      }
      goto LAB_100c86f5;
    }
    if (param_2 == 0x90317) {
      pcVar3 = "SEC_I_CONTEXT_EXPIRED";
      goto LAB_100c859a;
    }
    if (0x90313 < (int)param_2) {
      if (param_2 == 0x90314) {
        pcVar3 = "SEC_I_COMPLETE_AND_CONTINUE";
      }
      else {
        if (param_2 != 0x90315) goto switchD_100c82d2_caseD_80090312;
        pcVar3 = "SEC_I_LOCAL_LOGON";
      }
      goto LAB_100c859a;
    }
    if (param_2 == 0x90313) {
      pcVar3 = "SEC_I_COMPLETE_NEEDED";
      goto LAB_100c859a;
    }
    if (param_2 != 0) {
      if (param_2 != 0x90312) goto switchD_100c82d2_caseD_80090312;
      pcVar3 = "SEC_I_CONTINUE_NEEDED";
      goto LAB_100c859a;
    }
    pcVar3 = "No error";
  }
  _strncpy(_Dest,pcVar3,0xff);
LAB_100c8736:
  *(undefined1 *)(param_1 + 0x543) = 0;
  piVar2 = (int *)FUN_100fdc77();
  if (*piVar2 != iVar1) {
    piVar2 = (int *)FUN_100fdc77();
    *piVar2 = iVar1;
  }
  DVar4 = GetLastError();
  if (dwErrCode != DVar4) {
    SetLastError(dwErrCode);
  }
  return _Dest;
}


/* END FUNCTION 0x100c8280 */
