/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cf40
 * Name: FUN_1000cf40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1000cf40(int *param_1,int param_2)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  bool bVar3;
  
  uVar1 = param_1[1];
  uVar2 = 0;
  if (uVar1 != 0) {
    bVar3 = uVar1 != 0;
    do {
      if ((((bVar3) && (in_EAX = *(uint *)(*param_1 + uVar2 * 4), in_EAX != 0)) &&
          (*(int *)(in_EAX + 0x10) == param_2)) && (*(char *)(in_EAX + 7) == '\x02')) {
        return CONCAT31((int3)(in_EAX >> 8),*(undefined1 *)(in_EAX + 0x57));
      }
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < uVar1;
    } while (uVar2 != uVar1);
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x1000cf40 */
