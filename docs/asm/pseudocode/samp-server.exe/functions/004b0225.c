/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004b0225
 * Name: _strncnt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


size_t __cdecl _strncnt(char *_String,size_t _Cnt)

{
  char *pcVar1;
  char *in_EAX;
  
  pcVar1 = _String;
  for (; (pcVar1 != (char *)0x0 && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    pcVar1 = pcVar1 + -1;
  }
  return (size_t)(_String + (-1 - (int)(pcVar1 + -1)));
}


/* END FUNCTION 0x004b0225 */
