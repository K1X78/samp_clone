/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496890
 * Name: FUN_00496890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00496890(void *param_1)

{
  char cVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(**(code **)(**(int **)((int)param_1 + 0x40) + 0x28))();
  while (puVar2 != (ushort *)0x0) {
    cVar1 = FUN_00493380((int)puVar2);
    switch(cVar1) {
    case '\x18':
      FUN_00493f50(param_1,puVar2);
      break;
    case ' ':
      FUN_00493fd0(param_1,puVar2);
      break;
    case '!':
      FUN_00493ff0(param_1,puVar2);
      break;
    case '&':
      FUN_00494010((int)puVar2);
      break;
    case -0x38:
      FUN_00494fd0(param_1,puVar2);
      break;
    case -0x37:
      FUN_00496450(param_1,puVar2);
      break;
    case -0x35:
      FUN_00494f00(param_1,puVar2);
      break;
    case -0x34:
      FUN_00495940(param_1,puVar2);
      break;
    case -0x33:
      FUN_00495860(param_1,puVar2);
      break;
    case -0x32:
      FUN_004956d0(param_1,puVar2);
      break;
    case -0x31:
      FUN_00494dc0(param_1,puVar2);
      break;
    case -0x2f:
      FUN_00495490(param_1,puVar2);
      break;
    case -0x2e:
      FUN_004953a0(param_1,puVar2);
      break;
    case -0x2d:
      FUN_00495140(param_1,puVar2);
      break;
    case -0x2c:
      FUN_00495280(param_1,puVar2);
    }
    (**(code **)(**(int **)((int)param_1 + 0x40) + 0x30))(puVar2);
    puVar2 = (ushort *)(**(code **)(**(int **)((int)param_1 + 0x40) + 0x28))();
  }
  return;
}


/* END FUNCTION 0x00496890 */
