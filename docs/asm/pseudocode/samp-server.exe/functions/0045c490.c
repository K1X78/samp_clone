/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c490
 * Name: FUN_0045c490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0045c490(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((char)param_5 != '\0') {
    if (*(int *)((int)this + 0xb8) != 0 || *(int *)((int)this + 0xbc) != 0) {
      bVar1 = FUN_0045b3b0((int)this + 0x40);
      if (!bVar1) goto LAB_0045c4c9;
    }
    *(undefined4 *)((int)this + 0xb8) = param_2;
    *(undefined4 *)((int)this + 0xbc) = param_3;
  }
LAB_0045c4c9:
  if (param_4 != '\0') {
    param_5 = FUN_0045bd60((int *)((int)this + 0x728));
    puVar3 = param_1;
    puVar4 = param_5;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_0044e2a0((void *)((int)this + 0x58),&param_5);
    return;
  }
  FUN_0044e2a0((void *)((int)this + 0x58),&param_1);
  return;
}


/* END FUNCTION 0x0045c490 */
