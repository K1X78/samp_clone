/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040af80
 * Name: FUN_0040af80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040af80(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char unaff_BL;
  
  if (unaff_BL != *(char *)(in_EAX + 0x1b)) {
    if (*(int *)(in_EAX + 8) != 0) {
      FUN_0040aef0();
      iVar3 = FUN_0040ae90(*(int *)(in_EAX + 8));
      *(int *)(in_EAX + 0x14) = iVar3;
      *(undefined4 *)(in_EAX + 8) = 0;
      *(undefined4 *)(in_EAX + 0xc) = 0;
    }
    *(char *)(in_EAX + 0x1b) = unaff_BL;
  }
  puVar1 = *(uint **)(in_EAX + 0x14);
joined_r0x0040afba:
  do {
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    uVar2 = puVar1[1];
    if ((int)uVar2 <= param_2) {
      if (((int)uVar2 < param_2) || (*puVar1 < param_1)) {
        puVar1 = (uint *)puVar1[2];
        goto joined_r0x0040afba;
      }
      if (((int)uVar2 < param_2) || (((int)uVar2 <= param_2 && (*puVar1 <= param_1)))) {
        return 1;
      }
    }
    puVar1 = (uint *)puVar1[3];
  } while( true );
}


/* END FUNCTION 0x0040af80 */
