/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487fe0
 * Name: FUN_00487fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00487fe0(void *this,uint param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  
  if (((ushort)param_1 < 0x400) && (*(int *)((int)this + (param_1 & 0xffff) * 4 + 0x8400) != 0)) {
    puVar1 = (undefined4 *)((param_1 & 0xffff) * 0x21 + (int)this);
    if ((void *)*puVar1 != (void *)0x0) {
      _free((void *)*puVar1);
    }
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
    *puVar1 = pcVar3;
    do {
      cVar2 = *param_3;
      param_3 = param_3 + 1;
      *pcVar3 = cVar2;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    puVar1[1] = param_2;
    FUN_00487c30(this,param_1);
    FUN_00487ce0(this,param_1);
  }
  return;
}


/* END FUNCTION 0x00487fe0 */
