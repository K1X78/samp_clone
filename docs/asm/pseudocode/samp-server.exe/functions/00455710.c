/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455710
 * Name: FUN_00455710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_00455710(void *this,undefined4 param_1,undefined2 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  int *piVar7;
  undefined4 in_stack_ffffffe0;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffe0 >> 0x10);
  uVar2 = FUN_0044eec0(&param_1,&DAT_004cac3c);
  if ((char)uVar2 != '\0') {
    bVar1 = true;
    uVar6 = 0;
    if (*(short *)((int)this + 8) != 0) {
      do {
        pcVar3 = (char *)((uint)uVar6 * 0xcb8 + *(int *)((int)this + 0x33c));
        if (*pcVar3 != '\0') {
          piVar4 = FUN_0045df80(pcVar3 + 0x10,'\x01');
          if (bVar1) {
            piVar7 = &DAT_004ed5e0;
            for (iVar5 = 0x4e; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar7 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
            }
            bVar1 = false;
          }
          else {
            FUN_0044fae0(&DAT_004ed5e0,piVar4);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((int)this + 8));
    }
    return &DAT_004ed5e0;
  }
  iVar5 = FUN_00453950(this,param_1,CONCAT22(uVar8,param_2),'\0','\0');
  if ((iVar5 != 0) && (*(char *)((int)this + 4) == '\0')) {
    piVar4 = FUN_0045df80((void *)(iVar5 + 0x10),'\x01');
    return piVar4;
  }
  return (int *)0x0;
}


/* END FUNCTION 0x00455710 */
