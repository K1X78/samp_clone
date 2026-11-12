/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000af40
 * Name: FUN_1000af40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000af40(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
  do {
    if (iVar2 == 0) {
      return;
    }
    cVar1 = **(char **)(iVar2 + 0x10);
    if (cVar1 == '(') {
      cVar1 = (*(char **)(iVar2 + 0x10))[5];
    }
    switch(cVar1) {
    case '\f':
      FUN_10009df0(iVar2);
      break;
    case '\x1d':
      pcVar3 = "The server didn\'t respond. Retrying..";
      goto LAB_1000b069;
    case '\x1f':
      pcVar3 = "The server is full. Retrying...";
LAB_1000b069:
      FUN_10067b60(DAT_102aca10,pcVar3);
      *(undefined4 *)(param_1 + 0x3cd) = 1;
      break;
    case ' ':
      FUN_10008ad0(iVar2);
      break;
    case '!':
      FUN_1000a9d0(iVar2);
      break;
    case '\"':
      FUN_1000aa60(iVar2);
      break;
    case '#':
      FUN_10067b60(DAT_102aca10,"Failed to initialize encryption.");
      break;
    case '$':
      FUN_10067b60(DAT_102aca10,"You are banned from this server.");
      break;
    case '%':
      FUN_10067b60(DAT_102aca10,"Wrong server password.");
      (**(code **)(**(int **)(param_1 + 0x2c) + 8))(0,0);
      break;
    case -0x38:
      FUN_1000a6f0(iVar2);
      break;
    case -0x35:
      FUN_10009930(iVar2);
      break;
    case -0x32:
      FUN_10009830(iVar2);
      break;
    case -0x31:
      FUN_1000a420(iVar2);
      break;
    case -0x30:
      FUN_10009c00(iVar2);
      break;
    case -0x2f:
      FUN_10009730(iVar2);
      break;
    case -0x2e:
      FUN_10009b10(iVar2);
      break;
    case -0x2d:
      FUN_10009a20(iVar2);
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(iVar2);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
  } while( true );
}


/* END FUNCTION 0x1000af40 */
