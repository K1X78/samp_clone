/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af2fe
 * Name: ___security_error_handler
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ___security_error_handler(int param_1)

{
  DWORD DVar1;
  size_t sVar2;
  uint *_Str;
  char *pcVar3;
  uint *local_12c;
  uint local_128 [65];
  undefined1 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004c5270;
  uStack_c = 0x4af30d;
  local_20 = DAT_004ec7b4;
  if (DAT_0051c690 == (code *)0x0) {
    if (param_1 == 1) {
      pcVar3 = "Buffer overrun detected!";
      local_12c = (uint *)0x4c50d8;
    }
    else {
      pcVar3 = "Unknown security failure detected!";
      local_12c = (uint *)0x4c5198;
    }
    local_24 = 0;
    DVar1 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_128,0x104);
    if (DVar1 == 0) {
      FUN_004a68f0(local_128,(uint *)"<program name unknown>");
    }
    _Str = local_128;
    sVar2 = _strlen((char *)_Str);
    if (0x3c < sVar2 + 0xb) {
      sVar2 = _strlen((char *)_Str);
      _Str = (uint *)(&stack0xfffffea7 + sVar2);
      _strncpy((char *)_Str,"...",3);
    }
    _strlen((char *)_Str);
    local_1c = &stack0xfffffec8;
    FUN_004a68f0((uint *)&stack0xfffffec8,(uint *)pcVar3);
    FUN_004a6900((uint *)&stack0xfffffec8,(uint *)&DAT_004bb588);
    FUN_004a6900((uint *)&stack0xfffffec8,(uint *)"Program: ");
    FUN_004a6900((uint *)&stack0xfffffec8,_Str);
    FUN_004a6900((uint *)&stack0xfffffec8,(uint *)&DAT_004bb588);
    FUN_004a6900((uint *)&stack0xfffffec8,local_12c);
    ___crtMessageBoxA(&stack0xfffffec8,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*DAT_0051c690)();
    local_8 = (undefined *)0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


/* END FUNCTION 0x004af2fe */
