/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004053d0
 * Name: FUN_004053d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_004053d0(char *param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_4;
  
  pcVar2 = (char *)FUN_004053a0("AMXFILE");
  if ((((pcVar2 == (char *)0x0) && (pcVar2 = (char *)FUN_004053a0("tmp"), pcVar2 == (char *)0x0)) &&
      (pcVar2 = (char *)FUN_004053a0("temp"), pcVar2 == (char *)0x0)) &&
     (pcVar2 = (char *)FUN_004053a0("tmpdir"), pcVar2 == (char *)0x0)) {
    return (char *)0x0;
  }
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 + (1 - (int)(pcVar2 + 1)) < param_2) {
    iVar7 = (int)param_1 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar7] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar2 - (int)(param_1 + 1);
    if (iVar7 != 0) {
      if (((param_1[iVar7 + -1] != '\\') && (param_1[iVar7 + -1] != '/')) &&
         ((char *)(iVar7 + 1U) < param_2)) {
        param_1[iVar7] = '\\';
        param_1[iVar7 + 1] = '\0';
      }
      pcVar2 = _strrchr(in_EAX,0x3a);
      if (pcVar2 != (char *)0x0) {
        in_EAX = pcVar2 + 1;
        pcVar2 = _strchr(in_EAX,0x7c);
        if (pcVar2 != (char *)0x0) {
          in_EAX = pcVar2 + 1;
        }
        for (; (*in_EAX == '\\' || (*in_EAX == '/')); in_EAX = in_EAX + 1) {
        }
      }
      cVar1 = *in_EAX;
      if (((cVar1 == '\\') || (cVar1 == '/')) && ((in_EAX[1] == '\\' || (in_EAX[1] == '/')))) {
        in_EAX = in_EAX + 2;
        local_4 = CONCAT13(local_4._3_1_,0x2f5c);
        pcVar2 = _strpbrk(in_EAX,(char *)&local_4);
        if (pcVar2 != (char *)0x0) {
          in_EAX = pcVar2 + 1;
        }
      }
      else if ((cVar1 == '\\') || (cVar1 == '/')) {
        in_EAX = in_EAX + 1;
      }
      cVar1 = *in_EAX;
      pcVar2 = in_EAX;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '.') {
          if (*pcVar2 == '\\') {
            return (char *)0x0;
          }
          if (*pcVar2 == '/') {
            return (char *)0x0;
          }
        }
        cVar1 = *pcVar2;
      }
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar5 = in_EAX;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar3 = in_EAX;
      if (pcVar2 + (int)(pcVar5 + (-(int)(in_EAX + 1) - (int)(param_1 + 1))) < param_2) {
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar3 - (int)in_EAX;
        pcVar2 = param_1 + -1;
        do {
          pcVar5 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar5 != '\0');
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)in_EAX;
          in_EAX = in_EAX + 4;
          pcVar2 = pcVar2 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar2 = *in_EAX;
          in_EAX = in_EAX + 1;
          pcVar2 = pcVar2 + 1;
        }
        pcVar2 = _strchr(param_1,0x2f);
        while (pcVar2 != (char *)0x0) {
          *pcVar2 = '\\';
          pcVar2 = _strchr(param_1,0x2f);
        }
        return param_1;
      }
    }
  }
  return (char *)0x0;
}


/* END FUNCTION 0x004053d0 */
