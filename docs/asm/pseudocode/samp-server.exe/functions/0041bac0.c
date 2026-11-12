/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041bac0
 * Name: FUN_0041bac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041bac0(int param_1,uint *param_2)

{
  undefined2 *puVar1;
  char *in_EAX;
  uint uVar2;
  short *psVar3;
  byte *extraout_ECX;
  undefined2 *unaff_ESI;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  
  if (((*in_EAX == -0x69) && (*(int **)(in_EAX + 0x10) != (int *)0x0)) &&
     (**(int **)(in_EAX + 0x10) == 2)) {
    iVar6 = 0;
    uVar5 = 1;
    iVar4 = 2;
    uVar2 = FUN_00408380(*(char **)(in_EAX + 4));
    psVar3 = FUN_0041b710(param_1,extraout_ECX,uVar2,iVar4,uVar5,iVar6);
    if ((psVar3 != (short *)0x0) && ((*(byte *)((int)psVar3 + 3) & 1) != 0)) {
      puVar1 = *(undefined2 **)(psVar3 + 2);
      *unaff_ESI = *puVar1;
      *(undefined1 *)(unaff_ESI + 1) = *(undefined1 *)(puVar1 + 1);
      *param_2 = ~(uint)(*(byte *)((int)psVar3 + 3) >> 1) & 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0041bac0 */
