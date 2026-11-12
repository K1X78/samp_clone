/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014780
 * Name: FUN_10014780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014780(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  iVar2 = FUN_1009f210();
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar2 = FUN_100ac2b0();
    if (iVar2 == 0) {
      FUN_100ac2e0();
      return;
    }
    if (*(char *)(param_1 + 0x18) != '\x01') goto LAB_100147b4;
  }
  else {
LAB_100147b4:
    iVar2 = FUN_100ac2b0();
    if (iVar2 != 0) {
      FUN_100ac340();
    }
  }
  if (*(char *)(param_1 + 0x18) == '\v') {
    iVar2 = FUN_100adca0();
    if (iVar2 == 0) {
      FUN_100adc70(1);
      return;
    }
    if (*(char *)(param_1 + 0x18) != '\v') goto LAB_100147f0;
  }
  else {
LAB_100147f0:
    iVar2 = FUN_100adca0();
    if (iVar2 != 0) {
      FUN_100adc70(0);
      return;
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    iVar2 = FUN_100ac9e0();
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      FUN_100ac930();
      return;
    }
    if (*(char *)(param_1 + 0x18) != '\x02') goto LAB_10014832;
  }
  else {
LAB_10014832:
    iVar2 = FUN_100ac9e0();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      FUN_100ac980();
      return;
    }
  }
  if (*(char *)(param_1 + 0x18) == '\n') {
    iVar2 = FUN_100ac780();
    if (iVar2 == 0) {
      FUN_100ac730();
    }
    if (*(char *)(param_1 + 0x18) == '\n') goto LAB_10014885;
  }
  iVar2 = FUN_100ac780();
  if (iVar2 != 0) {
    FUN_100ad720();
  }
LAB_10014885:
  iVar2 = FUN_100ade60();
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x18) == 'D')) {
    FUN_100add00();
  }
  iVar2 = FUN_100ade60();
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x18) != 'D')) {
    FUN_100adde0();
  }
  if ((*(char *)(param_1 + 0x18) == '\x14') && (iVar2 = FUN_100ad890(), iVar2 != 1)) {
    FUN_100afed0(1);
  }
  if ((*(char *)(param_1 + 0x18) == '\x16') && (iVar2 = FUN_100ad890(), iVar2 != 2)) {
    FUN_100afed0(2);
  }
  if ((*(char *)(param_1 + 0x18) == '\x17') && (iVar2 = FUN_100ad890(), iVar2 != 3)) {
    FUN_100afed0(3);
  }
  if ((*(char *)(param_1 + 0x18) == '\x15') && (iVar2 = FUN_100ad890(), iVar2 != 4)) {
    FUN_100afed0(4);
  }
  iVar2 = FUN_100ad890();
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x18);
    if ((((cVar1 == '\x14') || (cVar1 == '\x16')) || (cVar1 == '\x17')) || (cVar1 == '\x15')) {
      FUN_100ad8a0();
    }
    else {
      FUN_100ad800();
    }
  }
  iVar2 = FUN_100acb10();
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x18) == '\x18')) {
    FUN_100acb20(1);
  }
  iVar2 = FUN_100acb10();
  if (((iVar2 != 0) && (cVar1 = *(char *)(param_1 + 0x18), cVar1 != '\x18')) &&
     ((cVar1 != '\x03' && (cVar1 != '\x04')))) {
    FUN_100acb20(0);
  }
  iVar2 = FUN_100aca60();
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x18) == '\x19')) {
    FUN_100aca70(1);
  }
  iVar2 = FUN_100aca60();
  if ((((iVar2 != 0) && (cVar1 = *(char *)(param_1 + 0x18), cVar1 != '\x19')) && (cVar1 != '\x03'))
     && (cVar1 != '\x04')) {
    FUN_100aca70(0);
  }
  FUN_100ad060();
  return;
}


/* END FUNCTION 0x10014780 */
