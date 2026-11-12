/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a4bbe
 * Name: ___sbh_alloc_new_region
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_0051c918 == DAT_0051c928) {
    pvVar2 = HeapReAlloc(DAT_0051c930,0,DAT_0051c91c,(DAT_0051c928 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_0051c928 = DAT_0051c928 + 0x10;
    DAT_0051c91c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_0051c91c + DAT_0051c918 * 0x14);
  pvVar2 = HeapAlloc(DAT_0051c930,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_0051c918 = DAT_0051c918 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_0051c930,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x004a4bbe */
