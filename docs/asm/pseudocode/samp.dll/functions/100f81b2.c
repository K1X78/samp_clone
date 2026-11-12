/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f81b2
 * Name: operator_new
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      FUN_100f830a();
    }
  }
  return pvVar2;
}


/* END FUNCTION 0x100f81b2 */
