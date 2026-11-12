/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483700
 * Name: FUN_00483700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483700(void *this,undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  
  *(undefined4 *)((int)this + 0x2f89) = 0;
  puVar3 = this;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_1;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_1 + 2);
  fVar4 = (float10)FUN_0048f170();
  if ((((float10)0.0 < fVar4) && (fVar4 < (float10)1.5)) &&
     (uVar1 = FUN_0048ed50((float *)((int)this + 0xd)), (char)uVar1 != '\0')) {
    *(undefined4 *)((int)this + 0x2f89) = 1;
    return;
  }
  return;
}


/* END FUNCTION 0x00483700 */
