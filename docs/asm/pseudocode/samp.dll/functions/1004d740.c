/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004d740
 * Name: FUN_1004d740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1004d740(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1 ^ param_3[DAT_101578b8 * 4];
  uVar4 = param_3[DAT_101578b8 * 4 + 1] ^ param_1[1];
  uVar5 = param_3[DAT_101578b8 * 4 + 2] ^ param_1[2];
  uVar1 = param_3[DAT_101578b8 * 4 + 3] ^ param_1[3];
  *param_2 = *(uint *)(&DAT_1013e810 + (uVar4 >> 0x18) * 4) ^
             *(uint *)(&DAT_1013e410 + (uVar5 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_1013e010 + (uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_1013dc10 + (uVar2 & 0xff) * 4);
  param_2[1] = *(uint *)(&DAT_1013e810 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_1013e410 + (uVar1 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1013e010 + (uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1013dc10 + (uVar4 & 0xff) * 4);
  param_2[2] = *(uint *)(&DAT_1013e810 + (uVar1 >> 0x18) * 4) ^
               *(uint *)(&DAT_1013e410 + (uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1013e010 + (uVar4 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1013dc10 + (uVar5 & 0xff) * 4);
  param_2[3] = *(uint *)(&DAT_1013e810 + (uVar2 >> 0x18) * 4) ^
               *(uint *)(&DAT_1013e410 + (uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_1013e010 + (uVar5 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1013dc10 + (uVar1 & 0xff) * 4);
  if (1 < DAT_101578b8 + -1) {
    param_1 = (uint *)(DAT_101578b8 + -2);
    puVar3 = param_3 + (DAT_101578b8 + -1) * 4 + 2;
    do {
      uVar1 = puVar3[-2] ^ *param_2;
      uVar4 = puVar3[-1] ^ param_2[1];
      uVar5 = *puVar3 ^ param_2[2];
      uVar2 = puVar3[1] ^ param_2[3];
      *param_2 = *(uint *)(&DAT_1013e810 + (uVar4 >> 0x18) * 4) ^
                 *(uint *)(&DAT_1013e410 + (uVar5 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_1013e010 + (uVar2 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_1013dc10 + (uVar1 & 0xff) * 4);
      param_2[1] = *(uint *)(&DAT_1013e810 + (uVar5 >> 0x18) * 4) ^
                   *(uint *)(&DAT_1013e410 + (uVar2 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013e010 + (uVar1 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013dc10 + (uVar4 & 0xff) * 4);
      param_2[2] = *(uint *)(&DAT_1013e810 + (uVar2 >> 0x18) * 4) ^
                   *(uint *)(&DAT_1013e410 + (uVar1 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013e010 + (uVar4 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013dc10 + (uVar5 & 0xff) * 4);
      puVar3 = puVar3 + -4;
      param_1 = (uint *)((int)param_1 + -1);
      param_2[3] = *(uint *)(&DAT_1013e810 + (uVar1 >> 0x18) * 4) ^
                   *(uint *)(&DAT_1013e410 + (uVar4 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013e010 + (uVar5 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_1013dc10 + (uVar2 & 0xff) * 4);
    } while (param_1 != (uint *)0x0);
  }
  uVar1 = param_3[4] ^ *param_2;
  uVar4 = param_3[6] ^ param_2[2];
  uVar2 = param_3[5] ^ param_2[1];
  uVar5 = param_3[7] ^ param_2[3];
  *(undefined *)param_2 = (&DAT_1013ec10)[uVar1 & 0xff];
  *(undefined *)((int)param_2 + 1) = (&DAT_1013ec10)[uVar5 >> 8 & 0xff];
  *(undefined *)((int)param_2 + 2) = (&DAT_1013ec10)[uVar4 >> 0x10 & 0xff];
  *(undefined *)((int)param_2 + 3) = (&DAT_1013ec10)[uVar2 >> 0x18];
  *(undefined *)(param_2 + 1) = (&DAT_1013ec10)[uVar2 & 0xff];
  *(undefined *)((int)param_2 + 5) = (&DAT_1013ec10)[uVar1 >> 8 & 0xff];
  *(undefined *)((int)param_2 + 6) = (&DAT_1013ec10)[uVar5 >> 0x10 & 0xff];
  *(undefined *)((int)param_2 + 7) = (&DAT_1013ec10)[uVar4 >> 0x18];
  *(undefined *)(param_2 + 2) = (&DAT_1013ec10)[uVar4 & 0xff];
  *(undefined *)((int)param_2 + 9) = (&DAT_1013ec10)[uVar2 >> 8 & 0xff];
  *(undefined *)((int)param_2 + 10) = (&DAT_1013ec10)[uVar1 >> 0x10 & 0xff];
  *(undefined *)((int)param_2 + 0xb) = (&DAT_1013ec10)[uVar5 >> 0x18];
  *(undefined *)(param_2 + 3) = (&DAT_1013ec10)[uVar5 & 0xff];
  *(undefined *)((int)param_2 + 0xd) = (&DAT_1013ec10)[uVar4 >> 8 & 0xff];
  *(undefined *)((int)param_2 + 0xe) = (&DAT_1013ec10)[uVar2 >> 0x10 & 0xff];
  *(undefined *)((int)param_2 + 0xf) = (&DAT_1013ec10)[uVar1 >> 0x18];
  *param_2 = *param_2 ^ *param_3;
  param_2[1] = param_2[1] ^ param_3[1];
  param_2[2] = param_2[2] ^ param_3[2];
  param_2[3] = param_2[3] ^ param_3[3];
  return 0;
}


/* END FUNCTION 0x1004d740 */
