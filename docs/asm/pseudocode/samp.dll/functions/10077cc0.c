/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10077cc0
 * Name: FUN_10077cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10077cc0(void)

{
  HMODULE hModule;
  
  if (DAT_1017ee54 != 0) {
    return DAT_1017ee48 != (FARPROC)0x0;
  }
  _DAT_1017ee58 = FUN_10077c80();
  hModule = GetModuleHandleA("USER32");
  if (hModule != (HMODULE)0x0) {
    _DAT_1017ee38 = GetProcAddress(hModule,"GetSystemMetrics");
    if (_DAT_1017ee38 != (FARPROC)0x0) {
      DAT_1017ee3c = GetProcAddress(hModule,"MonitorFromWindow");
      if (DAT_1017ee3c != (FARPROC)0x0) {
        _DAT_1017ee40 = GetProcAddress(hModule,"MonitorFromRect");
        if (_DAT_1017ee40 != (FARPROC)0x0) {
          _DAT_1017ee44 = GetProcAddress(hModule,"MonitorFromPoint");
          if (_DAT_1017ee44 != (FARPROC)0x0) {
            DAT_1017ee4c = GetProcAddress(hModule,"EnumDisplayMonitors");
            if (DAT_1017ee4c != (FARPROC)0x0) {
              DAT_1017ee48 = GetProcAddress(hModule,"GetMonitorInfoA");
              if (DAT_1017ee48 != (FARPROC)0x0) {
                _DAT_1017ee50 = GetProcAddress(hModule,"EnumDisplayDevicesA");
                if (_DAT_1017ee50 != (FARPROC)0x0) {
                  DAT_1017ee54 = 1;
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  _DAT_1017ee38 = (FARPROC)0x0;
  DAT_1017ee3c = (FARPROC)0x0;
  _DAT_1017ee40 = (FARPROC)0x0;
  _DAT_1017ee44 = (FARPROC)0x0;
  DAT_1017ee48 = (FARPROC)0x0;
  DAT_1017ee4c = (FARPROC)0x0;
  _DAT_1017ee50 = (FARPROC)0x0;
  DAT_1017ee54 = 1;
  return false;
}


/* END FUNCTION 0x10077cc0 */
