/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464060
 * Name: FUN_00464060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00464060(void *this,uint param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  void *_Memory;
  uint uVar2;
  char *pcVar3;
  
  if (((ushort)param_1 < 0x400) && (uVar2 = param_1 & 0xffff, *(int *)((int)this + uVar2 * 4) != 0))
  {
    _Memory = *(void **)((int)this + uVar2 * 0x21 + 0x1000);
    if (_Memory != (void *)0x0) {
      _free(_Memory);
    }
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *(char **)((int)this + uVar2 * 0x21 + 0x1000) = pcVar3;
    do {
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)this + uVar2 * 0x21 + 0x1004) = param_2;
    FUN_00463ff0(param_1);
  }
  return;
}


/* END FUNCTION 0x00464060 */
