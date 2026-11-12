/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497750
 * Name: FUN_00497750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00497750(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  in_addr unaff_ESI;
  uint uVar6;
  
  if (*(int *)((int)DAT_004fc438 + 0x5e) == 1) {
    uVar3 = (**(code **)(*DAT_0051c18c + 0xe4))
                      (*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
    if ((ushort)uVar3 < 1000) {
      iVar1 = DAT_004fc438[2];
      uVar6 = uVar3 & 0xffff;
      if ((((*(int *)(iVar1 + 0x24de4 + uVar6 * 4) != 0) &&
           (pvVar2 = *(void **)(iVar1 + 0x25d84 + uVar6 * 4), pvVar2 != (void *)0x0)) &&
          (*(int *)((int)pvVar2 + 0x301b) != 0)) &&
         ((-1 < *(int *)((int)pvVar2 + 0x2fea) && (*(int *)((int)pvVar2 + 0x2fea) < 0x140)))) {
        if ((*(int *)(iVar1 + 0x2de6c + uVar6 * 4) == 0) && (*(int *)((int)pvVar2 + 0x2cf5) == 0)) {
          uVar4 = FUN_0044eef0(&stack0xfffffff0,&DAT_004ebdd4);
          if ((char)uVar4 != '\0') {
            iVar1 = *(int *)DAT_004fc438[0x10];
            uVar4 = 600000;
            pcVar5 = inet_ntoa(unaff_ESI);
            (**(code **)(iVar1 + 0xf0))(pcVar5,uVar4);
          }
          FUN_00494040(DAT_004fc438,uVar3);
          return;
        }
        FUN_00487730(pvVar2);
        FUN_0046b000((void *)DAT_004fc438[1],uVar6);
        if ((void *)*DAT_004fc438 != (void *)0x0) {
          FUN_0046dcb0((void *)*DAT_004fc438,uVar6);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00497750 */
