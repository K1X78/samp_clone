/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100daf80
 * Name: FUN_100daf80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100daf80(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x718);
  if ((puVar1 == (undefined4 *)0x0) || (puVar1[3] == 0)) {
    return 0;
  }
  puVar1 = (undefined4 *)*puVar1;
  iVar2 = 0;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return iVar2;
    }
    iVar4 = iVar2;
    if (puVar1[5] != 0) {
      iVar3 = FUN_100dade0();
      if (iVar3 == 0) {
        FUN_100d9bb0(iVar2);
        return 0;
      }
      iVar4 = FUN_100d9b30(iVar2,iVar3);
      if (iVar4 == 0) {
        (*(code *)PTR__free_101554bc)(iVar3);
        FUN_100d9bb0(iVar2);
        return 0;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar4;
  } while( true );
}


/* END FUNCTION 0x100daf80 */
