/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004680f0
 * Name: FUN_004680f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004680f0(char *param_1)

{
  FILE *_File;
  char local_108 [264];
  
  _File = (FILE *)FUN_0049fbe9(param_1,"a");
  if (_File != (FILE *)0x0) {
    _fputs("\r\n--------------------------\r\n",_File);
    FUN_00467e90(*(uint *)(DAT_004f72f4 + 0xb8),local_108);
    _sprintf(&DAT_004f72f8,
             "SA-MP Server: %s\r\n\r\nException At Address: 0x%08X Module: %s\r\n\r\nRegisters:\r\nEAX: 0x%08X\tEBX: 0x%08X\tECX: 0x%08X\tEDX: 0x%08X\r\nESI: 0x%08X\tEDI: 0x%08X\tEBP: 0x%08X\tESP: 0x%08X\r\nEFLAGS: 0x%08X\r\n\r\nStack:\r\n"
             ,"0.3.DL-R1",*(undefined4 *)(DAT_004f72f4 + 0xb8),local_108,
             *(undefined4 *)(DAT_004f72f4 + 0xb0),*(undefined4 *)(DAT_004f72f4 + 0xa4),
             *(undefined4 *)(DAT_004f72f4 + 0xac),*(undefined4 *)(DAT_004f72f4 + 0xa8),
             *(undefined4 *)(DAT_004f72f4 + 0xa0),*(undefined4 *)(DAT_004f72f4 + 0x9c),
             *(undefined4 *)(DAT_004f72f4 + 0xb4),*(undefined4 *)(DAT_004f72f4 + 0xc4),
             *(undefined4 *)(DAT_004f72f4 + 0xc0));
    FUN_00467f60(*(int *)(DAT_004f72f4 + 0xc4),0x140,0x4f72f8,1);
    _fputs(&DAT_004f72f8,_File);
    _fputs("\r\n--------------------------\r\n",_File);
    FUN_00467d00((undefined4 *)&DAT_004f72f8);
    _fputs(&DAT_004f72f8,_File);
    _fclose(_File);
  }
  return;
}


/* END FUNCTION 0x004680f0 */
