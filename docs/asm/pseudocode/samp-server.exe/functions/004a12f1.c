/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a12f1
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
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}


/* END FUNCTION 0x004a12f1 */
