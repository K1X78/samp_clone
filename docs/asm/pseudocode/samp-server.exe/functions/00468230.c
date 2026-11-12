/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00468230
 * Name: FUN_00468230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_00468230(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  WSADATA local_190;
  
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar2 = 0x1c82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)((int)this + 0x7213) = 0;
  *(undefined4 *)((int)this + 0x7217) = 0;
  *(undefined4 *)((int)this + 0x721b) = 0;
  *(undefined4 *)((int)this + 0x721f) = 0;
  *(undefined4 *)((int)this + 0x7223) = 0;
  *(undefined4 *)((int)this + 0x7227) = 0;
  puVar3 = (undefined4 *)((int)this + 0x722b);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x732c) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x732c) = 1;
    iVar2 = ((int)this + 0x722b) - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  WSAStartup(0x202,&local_190);
  return this;
}


/* END FUNCTION 0x00468230 */
