/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004abc2c
 * Name: __setenvp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  if (DAT_0051ca50 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  puVar4 = DAT_0051c234;
  if (DAT_0051c234 != (uint *)0x0) {
    for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + sVar2 + 1)) {
      if ((char)*puVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen((char *)puVar4);
    }
    puVar1 = _malloc(iVar5 * 4 + 4);
    puVar4 = DAT_0051c234;
    DAT_0051c210 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if ((char)*puVar4 == '\0') {
          _free(DAT_0051c234);
          DAT_0051c234 = (uint *)0x0;
          *puVar1 = 0;
          DAT_0051ca44 = 1;
          return 0;
        }
        sVar2 = _strlen((char *)puVar4);
        if ((char)*puVar4 != '=') {
          puVar3 = _malloc(sVar2 + 1);
          *puVar1 = puVar3;
          if (puVar3 == (uint *)0x0) {
            _free(DAT_0051c210);
            DAT_0051c210 = (undefined4 *)0x0;
            return -1;
          }
          FUN_004a68f0(puVar3,puVar4);
          puVar1 = puVar1 + 1;
        }
        puVar4 = (uint *)((int)puVar4 + sVar2 + 1);
      } while( true );
    }
  }
  return -1;
}


/* END FUNCTION 0x004abc2c */
