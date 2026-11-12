/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00435b40
 * Name: FUN_00435b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00435b40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_EAX;
  
  iVar1 = *(int *)(*(int *)(*in_EAX + 8) + 0xc + param_1 * 0x10);
  FUN_0042cdb0((byte)param_1,0);
  iVar2 = in_EAX[0x11];
  in_EAX[0x11] = iVar2 + 2;
  FUN_00420800(param_1,iVar2,0);
  for (puVar3 = *(undefined4 **)(iVar1 + 0xc); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    FUN_004356f0(in_EAX,puVar3[2],iVar2);
  }
  FUN_00420910();
  return;
}


/* END FUNCTION 0x00435b40 */
