/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100606b0
 * Name: FUN_100606b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall FUN_100606b0(int *param_1,undefined4 param_2)

{
  FILE *_File;
  void *_DstBuf;
  int iStack_c;
  int iStack_8;
  undefined2 uStack_4;
  
  if ((char)param_1[1] != '\0') {
    (**(code **)(*param_1 + 8))();
  }
  _File = (FILE *)FUN_100f9cc9(param_2,&DAT_10118e1c);
  if (_File != (FILE *)0x0) {
    _fread(&iStack_c,1,10,_File);
    if (iStack_c != 0x32414153) {
      _fclose(_File);
      return 0;
    }
    *(int *)((int)param_1 + 5) = iStack_8;
    *(undefined2 *)((int)param_1 + 9) = uStack_4;
    _DstBuf = _malloc(iStack_8 * 0x26);
    *(void **)((int)param_1 + 0xb) = _DstBuf;
    _fread(_DstBuf,1,*(int *)((int)param_1 + 5) * 0x26,_File);
    FUN_10060640(*(undefined4 *)((int)param_1 + 0xb),*(int *)((int)param_1 + 5) * 0x26,
                 *(undefined2 *)((int)param_1 + 9));
    *(undefined4 *)((int)param_1 + 5) = 0;
    _fclose(_File);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return (char)param_1[1];
}


/* END FUNCTION 0x100606b0 */
