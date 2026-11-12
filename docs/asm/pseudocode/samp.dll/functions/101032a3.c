/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101032a3
 * Name: __RTC_Initialize
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __RTC_Initialize(void)

{
  undefined4 *local_20;
  
  for (local_20 = &DAT_10134538; local_20 < &DAT_10134538; local_20 = local_20 + 1) {
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)();
    }
  }
  return;
}


/* END FUNCTION 0x101032a3 */
