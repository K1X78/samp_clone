/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041ed20
 * Name: FUN_0041ed20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0041ed20(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  undefined4 local_4;
  
  if (*(short *)(in_EAX + 0x1a) == 0) {
    piVar1 = (int *)FUN_0040ba80();
    if ((*piVar1 != 0) && (iVar2 = FUN_0040bd20(), iVar2 == 0)) {
      *(undefined4 *)(in_EAX + 0x30) = 0;
      *(int *)(in_EAX + 0x54) = *(int *)(in_EAX + 0x54) + 1;
      FUN_00408f80();
      FUN_00408fa0((undefined1 *)(in_EAX + 0x40));
      FUN_00412de0(4,(undefined1 *)(in_EAX + 0x44));
      FUN_0040bb50();
      *piVar1 = 0;
      piVar1 = piVar1 + 2;
      iVar2 = 4;
      do {
        *piVar1 = -1;
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_0040bd50();
    }
    FUN_0040bd00();
    *(undefined2 *)(in_EAX + 0x1a) = 0xffff;
    do {
      iVar2 = FUN_0041e980((void *)0x1,&local_4);
    } while (iVar2 == -1);
  }
  return;
}


/* END FUNCTION 0x0041ed20 */
