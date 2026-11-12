/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048be10
 * Name: FUN_0048be10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048be10(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(in_EAX + 8);
  if (0xfeffffff < uVar6) {
    uVar7 = __aullshr(0x20,*(uint *)(in_EAX + 0xc));
    if ((int)uVar7 == 0) goto LAB_0048be82;
  }
  cVar3 = *(char *)(in_EAX + 4);
  do {
    pcVar4 = *(char **)(in_EAX + 0x18);
    uVar7 = __aullshr(0x20,*(uint *)(in_EAX + 0xc));
    *pcVar4 = (char)uVar7 + cVar3;
    pcVar4 = pcVar4 + 1;
    *(char **)(in_EAX + 0x18) = pcVar4;
    if (pcVar4 == *(char **)(in_EAX + 0x1c)) {
      FUN_0048bdd0();
    }
    cVar3 = -1;
    iVar5 = *(int *)(in_EAX + 0x10) + -1;
    iVar2 = *(int *)(in_EAX + 0x14) + -1 + (uint)(*(int *)(in_EAX + 0x10) != 0);
    *(int *)(in_EAX + 0x10) = iVar5;
    *(int *)(in_EAX + 0x14) = iVar2;
  } while (iVar5 != 0 || iVar2 != 0);
  uVar6 = *(uint *)(in_EAX + 8);
  *(char *)(in_EAX + 4) = (char)(uVar6 >> 0x18);
LAB_0048be82:
  uVar1 = *(uint *)(in_EAX + 0x10);
  *(uint *)(in_EAX + 8) = uVar6 << 8;
  *(uint *)(in_EAX + 0x10) = uVar1 + 1;
  *(uint *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + (uint)(0xfffffffe < uVar1);
  *(undefined4 *)(in_EAX + 0xc) = 0;
  return;
}


/* END FUNCTION 0x0048be10 */
