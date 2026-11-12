/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b5e0
 * Name: FUN_0040b5e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0040b5e0(void *this,int param_1)

{
  int in_EAX;
  undefined1 uVar1;
  char cVar2;
  
  if ((this == (void *)0x1) || (*(char *)(in_EAX + 0xb) != '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(in_EAX + 8) = cVar2;
  if ((this == (void *)0x3) && (*(char *)(in_EAX + 0xb) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(in_EAX + 9) = uVar1;
  *(char *)(in_EAX + 10) = (param_1 != 0) + '\x02';
  if (cVar2 != '\0') {
    *(undefined1 *)(in_EAX + 0x10) = 0;
  }
  return;
}


/* END FUNCTION 0x0040b5e0 */
