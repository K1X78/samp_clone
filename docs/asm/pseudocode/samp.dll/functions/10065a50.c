/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065a50
 * Name: FUN_10065a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10065a50(int param_1)

{
  int iVar1;
  FILE *_File;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *_Format;
  undefined8 uVar5;
  
  _File = (FILE *)FUN_100f9cc9(param_1 + 0x8200,&DAT_1011bbd4);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 0x39);
  piVar4 = (int *)(param_1 + 0x7a00);
  iVar2 = 0x200;
  do {
    if (*piVar4 != 0) {
      iVar1 = piVar3[-3];
      if (iVar1 == 1) {
        uVar5 = CONCAT44(piVar3[-2],(int)piVar3 + -0x39);
        _Format = "%s=%d\n";
LAB_10065ace:
        _fprintf(_File,_Format,uVar5);
      }
      else if (iVar1 == 2) {
        if (*piVar3 != 0) {
          uVar5 = CONCAT44(*piVar3,(int)piVar3 + -0x39);
          _Format = "%s=\"%s\"\n";
          goto LAB_10065ace;
        }
      }
      else if (iVar1 == 3) {
        _fprintf(_File,"%s=%f\n",(int)piVar3 + -0x39,(double)(float)piVar3[-1]);
      }
    }
    piVar4 = piVar4 + 1;
    piVar3 = (int *)((int)piVar3 + 0x3d);
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      _fclose(_File);
      return 1;
    }
  } while( true );
}


/* END FUNCTION 0x10065a50 */
