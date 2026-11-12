/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2020
 * Name: FUN_100c2020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c2020(void)

{
  uint uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(in_EAX + 5);
  if (0xfeffffff < uVar7) {
    iVar3 = __aullshr();
    if (iVar3 == 0) goto LAB_100c2092;
  }
  cVar4 = *(char *)(in_EAX + 4);
  do {
    pcVar5 = *(char **)(in_EAX + 0x15);
    cVar2 = __aullshr();
    *pcVar5 = cVar2 + cVar4;
    pcVar5 = pcVar5 + 1;
    *(char **)(in_EAX + 0x15) = pcVar5;
    if (pcVar5 == *(char **)(in_EAX + 0x19)) {
      FUN_100c1fe0();
    }
    cVar4 = -1;
    iVar6 = *(int *)(in_EAX + 0xd) + -1;
    iVar3 = *(int *)(in_EAX + 0x11) + -1 + (uint)(*(int *)(in_EAX + 0xd) != 0);
    *(int *)(in_EAX + 0xd) = iVar6;
    *(int *)(in_EAX + 0x11) = iVar3;
  } while (iVar6 != 0 || iVar3 != 0);
  uVar7 = *(uint *)(in_EAX + 5);
  *(char *)(in_EAX + 4) = (char)(uVar7 >> 0x18);
LAB_100c2092:
  uVar1 = *(uint *)(in_EAX + 0xd);
  *(uint *)(in_EAX + 5) = uVar7 << 8;
  *(uint *)(in_EAX + 0xd) = uVar1 + 1;
  *(uint *)(in_EAX + 0x11) = *(int *)(in_EAX + 0x11) + (uint)(0xfffffffe < uVar1);
  *(undefined4 *)(in_EAX + 9) = 0;
  return;
}


/* END FUNCTION 0x100c2020 */
