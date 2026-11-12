/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c7dd0
 * Name: FUN_100c7dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100c7dd0(char *param_1)

{
  int iVar1;
  DWORD dwErrCode;
  int *piVar2;
  char *_Source;
  DWORD DVar3;
  size_t unaff_EBX;
  int unaff_ESI;
  
  dwErrCode = GetLastError();
  piVar2 = (int *)FUN_100fdc77();
  iVar1 = *piVar2;
  if (unaff_ESI < 0x2748) {
    if (unaff_ESI == 0x2747) {
      _Source = "No buffer space";
    }
    else {
      switch(unaff_ESI) {
      case 0x2714:
        _Source = "Call interrupted";
        break;
      default:
        goto switchD_100c7e10_caseD_2715;
      case 0x2719:
        _Source = "Bad file";
        break;
      case 0x271d:
        _Source = "Bad access";
        break;
      case 0x271e:
        _Source = "Bad argument";
        break;
      case 0x2726:
        _Source = "Invalid arguments";
        break;
      case 0x2728:
        _Source = "Out of file descriptors";
        break;
      case 0x2733:
        _Source = "Call would block";
        break;
      case 0x2734:
      case 0x2735:
        _Source = "Blocking call in progress";
        break;
      case 0x2736:
        _Source = "Descriptor is not a socket";
        break;
      case 0x2737:
        _Source = "Need destination address";
        break;
      case 0x2738:
        _Source = "Bad message size";
        break;
      case 0x2739:
        _Source = "Bad protocol";
        break;
      case 0x273a:
        _Source = "Protocol option is unsupported";
        break;
      case 0x273b:
        _Source = "Protocol is unsupported";
        break;
      case 0x273c:
        _Source = "Socket is unsupported";
        break;
      case 0x273d:
        _Source = "Operation not supported";
        break;
      case 0x273e:
        _Source = "Protocol family not supported";
        break;
      case 0x273f:
        _Source = "Address family not supported";
        break;
      case 0x2740:
        _Source = "Address already in use";
        break;
      case 0x2741:
        _Source = "Address not available";
        break;
      case 0x2742:
        _Source = "Network down";
        break;
      case 0x2743:
        _Source = "Network unreachable";
        break;
      case 0x2744:
        _Source = "Network has been reset";
        break;
      case 0x2745:
        _Source = "Connection was aborted";
        break;
      case 0x2746:
        _Source = "Connection was reset";
      }
    }
  }
  else if (unaff_ESI < 0x2776) {
    if (unaff_ESI == 0x2775) {
      _Source = "Disconnected";
    }
    else {
      switch(unaff_ESI) {
      case 0x2748:
        _Source = "Socket is already connected";
        break;
      case 0x2749:
        _Source = "Socket is not connected";
        break;
      case 0x274a:
        _Source = "Socket has been shut down";
        break;
      case 0x274b:
        _Source = "Too many references";
        break;
      case 0x274c:
        _Source = "Timed out";
        break;
      case 0x274d:
        _Source = "Connection refused";
        break;
      case 0x274e:
        _Source = "Loop??";
        break;
      case 0x274f:
        _Source = "Name too long";
        break;
      case 0x2750:
        _Source = "Host down";
        break;
      case 0x2751:
        _Source = "Host unreachable";
        break;
      case 0x2752:
        _Source = "Not empty";
        break;
      case 0x2753:
        _Source = "Process limit reached";
        break;
      case 0x2754:
        _Source = "Too many users";
        break;
      case 0x2755:
        _Source = "Bad quota";
        break;
      case 0x2756:
        _Source = "Something is stale";
        break;
      case 0x2757:
        _Source = "Remote error";
        break;
      default:
        goto switchD_100c7e10_caseD_2715;
      case 0x276b:
        _Source = "Winsock library is not ready";
        break;
      case 0x276c:
        _Source = "Winsock version not supported";
        break;
      case 0x276d:
        _Source = "Winsock library not initialised";
      }
    }
  }
  else {
    switch(unaff_ESI) {
    case 0x2af9:
      _Source = "Host not found";
      break;
    case 0x2afa:
      _Source = "Host not found, try again";
      break;
    case 0x2afb:
      _Source = "Unrecoverable error in call to nameserver";
      break;
    case 0x2afc:
      _Source = "No data record of requested type";
      break;
    default:
switchD_100c7e10_caseD_2715:
      return (char *)0x0;
    }
  }
  _strncpy(param_1,_Source,unaff_EBX);
  param_1[unaff_EBX - 1] = '\0';
  piVar2 = (int *)FUN_100fdc77();
  if (*piVar2 != iVar1) {
    piVar2 = (int *)FUN_100fdc77();
    *piVar2 = iVar1;
  }
  DVar3 = GetLastError();
  if (dwErrCode != DVar3) {
    SetLastError(dwErrCode);
  }
  return param_1;
}


/* END FUNCTION 0x100c7dd0 */
