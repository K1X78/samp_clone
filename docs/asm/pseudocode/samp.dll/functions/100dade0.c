/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dade0
 * Name: FUN_100dade0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dade0(void)

{
  int in_EAX;
  char *pcVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_4;
  
  puVar4 = *(undefined1 **)(in_EAX + 8);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_10117a39;
  }
  pcVar6 = "FALSE";
  local_4 = "TRUE";
  if (*(int *)(in_EAX + 0x30) == 0) {
    local_4 = "FALSE";
  }
  puVar3 = *(undefined2 **)(in_EAX + 0xc);
  if (puVar3 == (undefined2 *)0x0) {
    puVar3 = &DAT_10117694;
  }
  if (*(int *)(in_EAX + 0x24) != 0) {
    pcVar6 = "TRUE";
  }
  pcVar1 = *(char **)(in_EAX + 0x14);
  pcVar5 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar5 = "unknown";
  }
  if (((*(int *)(in_EAX + 0x24) == 0) || (pcVar1 == (char *)0x0)) ||
     (puVar2 = &DAT_101183bc, *pcVar1 == '.')) {
    puVar2 = &DAT_10117a39;
  }
  pcVar1 = "#HttpOnly_";
  if (*(int *)(in_EAX + 0x38) == 0) {
    pcVar1 = "";
  }
  FUN_100cd220("%s%s%s\t%s\t%s\t%s\t%I64d\t%s\t%s",pcVar1,puVar2,pcVar5,pcVar6,puVar3,local_4,
               *(undefined4 *)(in_EAX + 0x18),*(undefined4 *)(in_EAX + 0x1c),
               *(undefined4 *)(in_EAX + 4),puVar4);
  return;
}


/* END FUNCTION 0x100dade0 */
