/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414640
 * Name: FUN_00414640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00414640(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = param_2;
  *param_2 = 0;
  puVar2 = FUN_00412900();
  if (puVar2 == (undefined4 *)0x0) {
    return 7;
  }
  puVar2[2] = puVar2 + 0x16;
  puVar2[1] = param_1;
  *puVar2 = this;
  *(undefined2 *)((int)puVar2 + 0x1a) = 0xffff;
  puVar2[0x14] = in_EAX;
  param_2 = (undefined4 *)0x80006;
  iVar3 = FUN_00407c20((int)this,&param_2,in_EAX,puVar2[2]);
  if (iVar3 == 0) {
    if (((uint)param_2 & 1) != 0) {
      *(undefined1 *)((int)puVar2 + 0x1f) = 1;
    }
    *puVar1 = puVar2;
    return 0;
  }
  FUN_0040bdd0();
  FUN_00407ab0();
  FUN_004080d0((int)puVar2);
  return iVar3;
}


/* END FUNCTION 0x00414640 */
