/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431c70
 * Name: FUN_00431c70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00431c70(void *this,int *param_1,int param_2)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(*param_1 + 0x1e) == '\0') {
    local_24 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_20 = *(undefined4 *)((int)this + 8);
    puVar5 = *(undefined4 **)(*(int *)this + 0xc);
    if (0 < in_EAX) {
      pcVar6 = (char *)(param_2 + 0x16);
      local_28 = in_EAX;
      do {
        pcVar4 = (char *)*puVar5;
        FUN_0040fdd0(&local_24,pcVar4,(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0);
        pcVar2 = FUN_00412a70();
        *(char **)(pcVar6 + -10) = pcVar2;
        cVar1 = FUN_004157b0();
        *pcVar6 = cVar1;
        if (cVar1 == '\0') {
          *pcVar6 = 'b';
        }
        piVar3 = FUN_004300f0(pcVar4);
        if (piVar3 != (int *)0x0) {
          pcVar4 = FUN_00412a70();
          *(char **)(pcVar6 + -6) = pcVar4;
        }
        puVar5 = puVar5 + 5;
        pcVar6 = pcVar6 + 0x18;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  return;
}


/* END FUNCTION 0x00431c70 */
