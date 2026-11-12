/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457e80
 * Name: FUN_00457e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00457e80(void *this,int param_1,undefined4 param_2,undefined2 param_3,char *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  bVar1 = FUN_00450940(this);
  if (!bVar1) {
    param_5 = CONCAT31(param_5._1_3_,0x1f);
    uVar4 = FUN_0044e910();
    FUN_00453ac0(this,(int)&param_5,8,0,8,0,param_2,param_3,'\0','\0',(int)uVar4,0);
    *(undefined4 *)(param_1 + 0xcb0) = 2;
    return;
  }
  uVar2 = (uint)*(byte *)((int)this + 0x33a);
  if (uVar2 == param_5 - 1U) {
    bVar1 = true;
    pcVar3 = (char *)((int)this + 0x23a);
    do {
      param_4 = param_4 + 1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar1 = *param_4 == *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (bVar1);
    if (bVar1) {
      if (*(char *)((int)this + 0xd95) == '\0') {
        FUN_004558c0(this,param_1,(undefined4 *)0x0,'\0');
        return;
      }
      FUN_004560f0(this,param_2,param_3);
      return;
    }
  }
  param_5 = CONCAT31(param_5._1_3_,0x25);
  uVar4 = FUN_0044e910();
  FUN_00453ac0(this,(int)&param_5,8,0,8,0,param_2,param_3,'\0','\0',(int)uVar4,0);
  *(undefined4 *)(param_1 + 0xcb0) = 2;
  return;
}


/* END FUNCTION 0x00457e80 */
