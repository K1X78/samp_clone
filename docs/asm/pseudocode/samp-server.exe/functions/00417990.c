/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417990
 * Name: FUN_00417990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00417990(void *this,undefined4 *param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  int unaff_ESI;
  uint uVar2;
  
  if (*(int *)(unaff_ESI + 0xec) != 0) {
    return 5;
  }
  if (*(char *)(unaff_ESI + 0xeb) != '\0') {
    FUN_004080d0(*(int *)(unaff_ESI + 0xf8));
  }
  if ((int)this < 5) {
    this = (void *)0x0;
  }
  if (in_EAX < 0) {
    in_EAX = 0;
  }
  if ((this == (void *)0x0) || (in_EAX == 0)) {
    uVar2 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  else if (param_1 == (undefined4 *)0x0) {
    uVar2 = (int)this + 7U & 0xfffffff8;
    FUN_00407d90();
    puVar1 = (undefined4 *)FUN_004125b0(uVar2 * in_EAX);
    FUN_00407da0();
  }
  else {
    uVar2 = (uint)this & 0xfffffff8;
    puVar1 = param_1;
  }
  *(undefined4 **)(unaff_ESI + 0xf8) = puVar1;
  *(undefined4 *)(unaff_ESI + 0xf4) = 0;
  *(short *)(unaff_ESI + 0xe8) = (short)uVar2;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_ESI + 0xfc) = 0;
    *(undefined1 *)(unaff_ESI + 0xea) = 0;
    *(undefined1 *)(unaff_ESI + 0xeb) = 0;
    return 0;
  }
  if (-1 < in_EAX + -1) {
    do {
      *puVar1 = *(undefined4 *)(unaff_ESI + 0xf4);
      *(undefined4 **)(unaff_ESI + 0xf4) = puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + uVar2);
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  *(undefined4 **)(unaff_ESI + 0xfc) = puVar1;
  *(undefined1 *)(unaff_ESI + 0xea) = 1;
  *(bool *)(unaff_ESI + 0xeb) = param_1 == (undefined4 *)0x0;
  return 0;
}


/* END FUNCTION 0x00417990 */
