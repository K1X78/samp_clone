/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004880f0
 * Name: FUN_004880f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __fastcall FUN_004880f0(int param_1)

{
  int *piVar1;
  FILE *_File;
  size_t sVar2;
  int iVar3;
  uint local_100c;
  char local_1008 [8];
  undefined1 local_1000 [4092];
  undefined4 uStack_4;
  
  uStack_4 = 0x4880fa;
  _File = *(FILE **)(param_1 + 4);
  local_100c = 5;
  if ((_File->_flag & 0x10) != 0) {
    _fclose(_File);
    *(undefined4 *)(param_1 + 4) = 0;
    return -1;
  }
  sVar2 = _fread(local_1000,1,0x1000,_File);
  *(size_t *)(param_1 + 0x1b) = sVar2;
  piVar1 = (int *)(param_1 + 0x17);
  *piVar1 = 0x1000;
  iVar3 = FUN_0048ecc0(param_1 + 0x20,piVar1,local_1000,sVar2,local_1008,&local_100c,1,0x10000,3,0,2
                       ,0x20,1);
  if (iVar3 != 0) {
    FUN_00491fa0("Compress error: %d");
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return *piVar1;
}


/* END FUNCTION 0x004880f0 */
