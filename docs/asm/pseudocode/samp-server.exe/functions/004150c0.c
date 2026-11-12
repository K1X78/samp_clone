/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004150c0
 * Name: FUN_004150c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004150c0(int param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  if (param_2[5] != 0) {
    iVar1 = *param_2;
    puVar2 = (undefined4 *)(param_2[5] + param_1 * 0x14);
    for (; in_EAX != 0; in_EAX = in_EAX + -1) {
      FUN_00414fb0(puVar2[4],iVar1);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)puVar2 = 0x88;
      puVar2 = puVar2 + 5;
    }
  }
  return;
}


/* END FUNCTION 0x004150c0 */
