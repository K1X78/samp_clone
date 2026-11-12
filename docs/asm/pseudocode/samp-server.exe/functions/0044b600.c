/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044b600
 * Name: FUN_0044b600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044b600(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  short *psVar4;
  int *piVar5;
  undefined2 extraout_var_02;
  int iVar6;
  int *piVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int *extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  int *extraout_ECX_15;
  int *extraout_ECX_16;
  int *extraout_ECX_17;
  int *extraout_ECX_18;
  int *extraout_ECX_19;
  int *extraout_ECX_20;
  int *extraout_ECX_21;
  int *extraout_ECX_22;
  int *extraout_ECX_23;
  int *extraout_ECX_24;
  int *extraout_ECX_25;
  int *extraout_ECX_26;
  int *extraout_ECX_27;
  int *extraout_ECX_28;
  int *extraout_ECX_29;
  int *extraout_ECX_30;
  int *extraout_ECX_31;
  int *extraout_ECX_32;
  int *extraout_ECX_33;
  int *extraout_ECX_34;
  int *extraout_ECX_35;
  int *extraout_ECX_36;
  int *extraout_ECX_37;
  int *extraout_ECX_38;
  int *extraout_ECX_39;
  int *extraout_ECX_40;
  int *extraout_ECX_41;
  int *extraout_ECX_42;
  int *extraout_ECX_43;
  int *extraout_ECX_44;
  int *extraout_ECX_45;
  int *extraout_ECX_46;
  int *extraout_ECX_47;
  int *extraout_ECX_48;
  int *extraout_ECX_49;
  int *extraout_ECX_50;
  int *extraout_ECX_51;
  int *extraout_ECX_52;
  int *extraout_ECX_53;
  int *extraout_ECX_54;
  int *extraout_ECX_55;
  int *extraout_ECX_56;
  int *extraout_ECX_57;
  int *extraout_ECX_58;
  int *extraout_ECX_59;
  int *extraout_ECX_60;
  int *extraout_ECX_61;
  int *extraout_ECX_62;
  int *extraout_ECX_63;
  int *extraout_ECX_64;
  int *extraout_ECX_65;
  int *extraout_ECX_66;
  int *extraout_ECX_67;
  int *extraout_ECX_68;
  int *extraout_ECX_69;
  int *extraout_ECX_70;
  int *extraout_ECX_71;
  int *extraout_ECX_72;
  int *extraout_ECX_73;
  int *extraout_ECX_74;
  int *extraout_ECX_75;
  int *extraout_ECX_76;
  int *extraout_ECX_77;
  int *piVar8;
  int *extraout_ECX_78;
  int *extraout_ECX_79;
  int *extraout_ECX_80;
  int *extraout_ECX_81;
  int *extraout_ECX_82;
  int *extraout_ECX_83;
  int *extraout_ECX_84;
  int *extraout_ECX_85;
  int *extraout_ECX_86;
  int *extraout_ECX_87;
  int *extraout_ECX_88;
  int *extraout_ECX_89;
  int *extraout_ECX_90;
  int *extraout_ECX_91;
  int *extraout_ECX_92;
  int *extraout_ECX_93;
  int *extraout_ECX_94;
  int *extraout_ECX_95;
  int *extraout_ECX_96;
  int *extraout_ECX_97;
  int *extraout_ECX_98;
  int *extraout_ECX_99;
  int *extraout_ECX_x00100;
  int *extraout_ECX_x00101;
  int *extraout_ECX_x00102;
  int *extraout_ECX_x00103;
  int *extraout_ECX_x00104;
  int *extraout_ECX_x00105;
  int *extraout_ECX_x00106;
  int *extraout_ECX_x00107;
  int *extraout_ECX_x00108;
  int *extraout_ECX_x00109;
  int *extraout_ECX_x00110;
  int *extraout_ECX_x00111;
  int *extraout_ECX_x00112;
  undefined4 extraout_ECX_x00113;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  iVar1 = *param_1;
  piVar8 = (int *)param_1[2];
  iVar6 = iVar1 * 0x10;
  piVar7 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_4 = (int *)0x0;
  if (0x140 < param_2 - 5U) goto switchD_0044b651_caseD_b1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&PTR_caseD_b0_0044d120 + param_2 + 3)) {
  case 0:
    FUN_0040edb0(0);
    piVar7 = extraout_ECX;
    break;
  case 1:
    FUN_0040edb0(1);
    piVar7 = extraout_ECX_00;
    break;
  case 2:
    FUN_0040edb0(2);
    piVar7 = extraout_ECX_01;
    break;
  case 3:
    FUN_00424e30(piVar8);
    piVar7 = extraout_ECX_02;
    break;
  case 4:
    FUN_00420d70(param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_03;
    break;
  case 5:
    local_c = (int *)0x7;
    break;
  case 6:
    piVar7 = (int *)(uint)*(byte *)((int)param_1 + iVar6 + 0xe);
    local_c = piVar7;
    break;
  case 7:
    FUN_00420df0();
    piVar7 = extraout_ECX_04;
    break;
  case 8:
    FUN_00420e30();
    piVar7 = extraout_ECX_05;
    break;
  case 9:
    FUN_00420e70(piVar8,0);
    piVar7 = extraout_ECX_06;
    break;
  case 10:
    FUN_00420e70(piVar8,1);
    piVar7 = extraout_ECX_07;
    break;
  case 0xb:
    FUN_00420e70(piVar8,2);
    piVar7 = extraout_ECX_08;
    break;
  case 0xc:
    FUN_004427a0(piVar8,param_1[iVar1 * 4 + -0xc],0,0,param_1[iVar1 * 4 + -4]);
    piVar7 = extraout_ECX_09;
    break;
  case 0xd:
    piVar7 = (int *)*piVar8;
    *(undefined1 *)((int)piVar7 + 0xea) = 0;
  case 0x14:
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 5];
    break;
  case 0xe:
    local_c = (int *)0x0;
    break;
  case 0xf:
    local_c = (int *)0x1;
    break;
  case 0x10:
    FUN_004465f0(param_1 + iVar1 * 4,(int)(param_1 + iVar1 * 4 + 4),(int *)0x0);
    piVar7 = extraout_ECX_10;
    break;
  case 0x11:
    FUN_004465f0(0,0,(int *)param_1[iVar1 * 4 + 4]);
    FUN_0040fce0(*piVar8,param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_11;
    break;
  case 0x12:
    piVar7 = (int *)param_1[iVar1 * 4 + -4];
    local_8 = (int *)((piVar8[0x7e] + piVar8[0x7d]) - (int)piVar7);
    local_c = piVar7;
    break;
  case 0x13:
    FUN_0041ae20(piVar8);
    piVar7 = (int *)param_1[iVar1 * 4 + 5];
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = piVar7;
    break;
  case 0x15:
    FUN_00416480(param_1 + iVar1 * 4 + 4,(int)piVar8);
    piVar7 = extraout_ECX_12;
    break;
  case 0x16:
    piVar7 = (int *)param_1[iVar1 * 4 + -8];
    goto LAB_0044b7e4;
  case 0x17:
    piVar7 = (int *)param_1[iVar1 * 4 + -0x10];
    goto LAB_0044b7e4;
  case 0x18:
    piVar7 = (int *)param_1[iVar1 * 4];
LAB_0044b7e4:
    local_c = piVar7;
    local_8 = (int *)((param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]) - (int)piVar7);
    break;
  case 0x19:
    FUN_00420bf0(param_1 + iVar1 * 4 + 4);
    piVar7 = extraout_ECX_13;
    break;
  case 0x1a:
    FUN_00420bf0(param_1 + iVar1 * 4);
    piVar7 = extraout_ECX_14;
    break;
  case 0x1b:
    local_1c = FUN_0041a0a0(piVar8);
    local_18 = param_1[iVar1 * 4];
    local_14 = param_1[iVar1 * 4 + 6];
    FUN_00420bf0((int *)&local_1c);
    piVar7 = extraout_ECX_15;
    break;
  case 0x1c:
    FUN_0041d630();
    FUN_00420bf0((int *)&local_1c);
    piVar7 = extraout_ECX_16;
    break;
  case 0x1d:
    FUN_0040ef80((char)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_17;
    break;
  case 0x1e:
    FUN_00446430(piVar8,(int *)0x0,param_1[iVar1 * 4],param_1[iVar1 * 4 + 4],param_1[iVar1 * 4 + -4]
                );
    piVar7 = extraout_ECX_18;
    break;
  case 0x1f:
    FUN_00445a10(piVar8,0,0,(short *)0x0,(int *)0x0,param_1[iVar1 * 4 + 4],0,0,0,0);
    piVar7 = extraout_ECX_19;
    break;
  case 0x20:
    FUN_0041af50(piVar8);
    piVar7 = extraout_ECX_20;
    break;
  case 0x21:
    FUN_0041b140(piVar8,(int *)0x0,param_1 + iVar1 * 4 + -4,(int *)param_1[iVar1 * 4],
                 param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_21;
    break;
  case 0x22:
    FUN_0040f0e0((char)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_22;
    break;
  case 0x23:
    FUN_00435c10(piVar8);
    piVar7 = extraout_ECX_23;
    break;
  case 0x24:
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_c = (int *)(~param_1[iVar1 * 4 + 5] & param_1[iVar1 * 4] | (uint)piVar7);
    break;
  case 0x25:
    local_c = (int *)0x0;
    local_8 = (int *)0x0;
    break;
  case 0x26:
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)0xff;
    local_c = piVar7;
    break;
  case 0x27:
    local_8 = (int *)0xff00;
    local_c = (int *)(param_1[iVar1 * 4 + 4] << 8);
    break;
  case 0x28:
    local_c = (int *)0x8;
    break;
  case 0x29:
    local_c = (int *)0x9;
    break;
  case 0x2a:
    local_c = (int *)0x6;
    break;
  case 0x2b:
    local_c = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0x2c:
    local_8 = (int *)0x0;
    local_c = (int *)0x0;
    break;
  case 0x2d:
    piVar7 = (int *)param_1[iVar1 * 4 + 1];
    local_c = (int *)param_1[iVar1 * 4];
    local_8 = piVar7;
    break;
  case 0x2e:
    FUN_00446430(piVar8,(int *)param_1[iVar1 * 4 + -8],param_1[iVar1 * 4 + 4],
                 param_1[iVar1 * 4 + -4],0);
    piVar7 = extraout_ECX_24;
    break;
  case 0x2f:
    FUN_00445a10(piVar8,0,0,(short *)0x0,(int *)param_1[iVar1 * 4 + -4],param_1[iVar1 * 4 + 4],0,0,0
                 ,0);
    piVar7 = extraout_ECX_25;
    break;
  case 0x30:
    FUN_0041af50(piVar8);
    piVar7 = extraout_ECX_26;
    break;
  case 0x31:
    FUN_0041b140(piVar8,(int *)param_1[iVar1 * 4 + -0x14],param_1 + iVar1 * 4 + -8,
                 (int *)param_1[iVar1 * 4 + -4],param_1[iVar1 * 4]);
    FUN_0040f0e0((char)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_27;
    break;
  case 0x32:
    local_c = (int *)0x63;
    break;
  case 0x33:
    local_c = (int *)0x63;
    break;
  case 0x34:
    local_c = (int *)(uint)*(byte *)(param_1 + iVar1 * 4 + 4);
    break;
  case 0x35:
    local_c = (int *)0x4;
    break;
  case 0x36:
    local_c = (int *)0x5;
    break;
  case 0x37:
    FUN_0044b2c0(piVar8,(short *)param_1[iVar1 * 4 + 4],0,param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_28;
    break;
  case 0x38:
    FUN_0044a4d0(piVar8,param_1 + iVar1 * 4 + -0x18,param_1 + iVar1 * 4 + -8,
                 (undefined4 *)param_1[iVar1 * 4 + 4],param_1[iVar1 * 4 + -0x14],
                 param_1[iVar1 * 4 + -0xc]);
    piVar7 = extraout_ECX_29;
    break;
  case 0x39:
    FUN_0044b2c0(piVar8,(short *)param_1[iVar1 * 4 + 4],1,param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_30;
    break;
  case 0x3a:
    uVar9 = (uint)local_1c >> 8;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = (undefined4 *)CONCAT31((uint3)uVar9 & 0xffff00,5);
    FUN_00443d60(piVar8,(int *)param_1[iVar1 * 4 + 4],(byte *)&local_1c);
    FUN_0040fce0(*piVar8,param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_31;
    break;
  case 0x3b:
    local_c = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0x3c:
    if (param_1[iVar1 * 4 + 4] == 0) {
      FUN_0040fce0(*piVar8,param_1[iVar1 * 4 + -4]);
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_c = piVar7;
    }
    else {
      *(char *)(param_1[iVar1 * 4 + 4] + 4) = (char)param_1[iVar1 * 4];
      *(int *)(param_1[iVar1 * 4 + 4] + 0x1c) = param_1[iVar1 * 4 + -4];
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_c = piVar7;
    }
    break;
  case 0x3d:
    local_c = (int *)0x71;
    break;
  case 0x3e:
    local_c = FUN_0041bff0(piVar8,param_1[iVar1 * 4 + -0x10],param_1[iVar1 * 4 + -0xc],
                           param_1[iVar1 * 4 + -8],param_1[iVar1 * 4 + -4],param_1[iVar1 * 4],
                           param_1[iVar1 * 4 + -0x18],param_1[iVar1 * 4 + 4],param_1[iVar1 * 4 + 5])
    ;
    piVar7 = extraout_ECX_32;
    break;
  case 0x3f:
    piVar7 = (int *)param_1[iVar1 * 4];
    local_c = piVar7;
    break;
  case 0x40:
    piVar7 = FUN_0041a560((int *)param_1[iVar1 * 4 + -4]);
    local_c = piVar7;
    if (param_1[iVar1 * 4 + 5] != 0) {
      FUN_00415af0(piVar7,piVar8,1);
    }
    FUN_00415b30(piVar7);
    piVar7 = extraout_ECX_33;
    break;
  case 0x41:
    FUN_0041a000((void *)0x0,*piVar8,0x71);
    local_c = FUN_0041a560((int *)param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_34;
    break;
  case 0x42:
    FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    local_c = FUN_0041a560((int *)param_1[iVar1 * 4 + -8]);
    piVar7 = extraout_ECX_35;
    break;
  case 0x43:
    goto switchD_0044b651_caseD_43;
  case 0x44:
    local_c = FUN_00417b70();
    piVar7 = extraout_ECX_36;
    break;
  case 0x45:
    local_c = (int *)param_1[iVar1 * 4 + 4];
    FUN_0040f2d0(0,(short *)local_c);
    piVar7 = extraout_ECX_37;
    break;
  case 0x46:
    local_c = (int *)param_1[iVar1 * 4];
    if ((local_c != (int *)0x0) && (0 < (short)*local_c)) {
      piVar7 = (int *)((short)*local_c * 0x38);
      *(char *)((int)piVar7 + -0x1b + (int)local_c) = (char)param_1[iVar1 * 4 + 4];
    }
    break;
  case 0x47:
    local_c = (int *)FUN_0041b570(piVar8,param_1 + iVar1 * 4 + -0x10,param_1 + iVar1 * 4 + -0xc,
                                  (int)(param_1 + iVar1 * 4 + -8),0,param_1[iVar1 * 4],
                                  param_1[iVar1 * 4 + 4]);
    FUN_004167a0((short *)local_c);
    piVar7 = extraout_ECX_38;
    break;
  case 0x48:
    local_c = (int *)FUN_0041b570(piVar8,0,0,(int)(param_1 + iVar1 * 4 + -4),
                                  param_1[iVar1 * 4 + -0xc],param_1[iVar1 * 4],
                                  param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_39;
    break;
  case 0x49:
    if ((((param_1[iVar1 * 4 + -0x14] == 0) && (param_1[iVar1 * 4 + -3] == 0)) &&
        (param_1[iVar1 * 4] == 0)) && (param_1[iVar1 * 4 + 4] == 0)) {
      piVar7 = (int *)param_1[iVar1 * 4 + -0xc];
      local_c = piVar7;
    }
    else {
      FUN_0040f2d0(0,(short *)param_1[iVar1 * 4 + -0xc]);
      piVar7 = FUN_0041bff0(piVar8,param_1[iVar1 * 4 + -0xc],0,0,0,0,0,0,0);
      local_c = (int *)FUN_0041b570(piVar8,0,0,(int)(param_1 + iVar1 * 4 + -4),(int)piVar7,
                                    param_1[iVar1 * 4],param_1[iVar1 * 4 + 4]);
      piVar7 = extraout_ECX_40;
    }
    break;
  case 0x4a:
    local_c = (int *)FUN_0041b4e0();
    piVar7 = extraout_ECX_41;
    break;
  case 0x4b:
    bVar2 = FUN_0041c0d0(piVar8,(int)(param_1 + iVar1 * 4),0,0);
    piVar7 = extraout_ECX_42;
    local_c = (int *)CONCAT31(extraout_var,bVar2);
    break;
  case 0x4c:
    bVar2 = FUN_0041c0d0(piVar8,(int)(param_1 + iVar1 * 4 + -4),param_1 + iVar1 * 4,0);
    piVar7 = extraout_ECX_43;
    local_c = (int *)CONCAT31(extraout_var_00,bVar2);
    break;
  case 0x4d:
    bVar2 = FUN_0041c0d0(piVar8,(int)(param_1 + iVar1 * 4 + -8),param_1 + iVar1 * 4 + -4,
                         param_1 + iVar1 * 4);
    piVar7 = extraout_ECX_44;
    local_c = (int *)CONCAT31(extraout_var_01,bVar2);
    break;
  case 0x4e:
    local_c = (int *)0x0;
    local_8 = (int *)0x1;
    break;
  case 0x4f:
    local_c = FUN_0041a560((int *)param_1[iVar1 * 4 + -8]);
    piVar7 = extraout_ECX_45;
    if (local_c != (int *)0x0) {
      piVar7 = (int *)(*local_c * 5);
      *(char *)(local_c[3] + -8 + *local_c * 0x14) = (char)param_1[iVar1 * 4 + 4];
    }
    break;
  case 0x50:
    local_c = FUN_0041a560((int *)0x0);
    piVar7 = extraout_ECX_46;
    if ((local_c != (int *)0x0) && (piVar7 = local_c, local_c[3] != 0)) {
      *(char *)(local_c[3] + 0xc) = (char)param_1[iVar1 * 4 + 4];
    }
    break;
  case 0x51:
    local_8 = (int *)0x0;
    local_c = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0x52:
    piVar7 = (int *)param_1[iVar1 * 4 + -4];
    local_c = (int *)param_1[iVar1 * 4 + -4];
    local_8 = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0x53:
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + -4];
    break;
  case 0x54:
    FUN_004167a0((short *)param_1[iVar1 * 4 + -4]);
    FUN_0044ad40(piVar8,(short *)param_1[iVar1 * 4 + -4],(byte *)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_47;
    break;
  case 0x55:
    FUN_004167a0((short *)param_1[iVar1 * 4 + -0xc]);
    FUN_0041a600(piVar8);
    FUN_004494f0(piVar8,(short *)param_1[iVar1 * 4 + -0xc],(int *)param_1[iVar1 * 4],
                 (byte *)param_1[iVar1 * 4 + 4],(uint)*(byte *)(param_1 + iVar1 * 4 + -0x10));
    piVar7 = extraout_ECX_48;
    break;
  case 0x56:
    piVar7 = (int *)param_1[iVar1 * 4 + -0xc];
    goto LAB_0044beea;
  case 0x57:
    piVar7 = (int *)0x0;
LAB_0044beea:
    local_c = FUN_0041a560(piVar7);
    FUN_00415af0(local_c,piVar8,1);
    piVar7 = extraout_ECX_49;
    break;
  case 0x58:
    FUN_00446aa0(piVar8,(short *)param_1[iVar1 * 4 + -0x10],(int *)param_1[iVar1 * 4],(int *)0x0,
                 (int *)param_1[iVar1 * 4 + -0xc],(uint)*(byte *)(param_1 + iVar1 * 4 + -0x18));
    piVar7 = extraout_ECX_50;
    break;
  case 0x59:
    FUN_00446aa0(piVar8,(short *)param_1[iVar1 * 4 + -4],(int *)0x0,(int *)param_1[iVar1 * 4 + 4],
                 (int *)param_1[iVar1 * 4],(uint)*(byte *)(param_1 + iVar1 * 4 + -0xc));
    piVar7 = extraout_ECX_51;
    break;
  case 0x5a:
    FUN_00446aa0(piVar8,(short *)param_1[iVar1 * 4 + -8],(int *)0x0,(int *)0x0,
                 (int *)param_1[iVar1 * 4 + -4],(uint)*(byte *)(param_1 + iVar1 * 4 + -0x10));
    piVar7 = extraout_ECX_52;
    break;
  case 0x5b:
    local_c = (int *)(uint)*(byte *)(param_1 + iVar1 * 4 + 4);
    piVar7 = (int *)(uint)*(byte *)(param_1 + iVar1 * 4 + 4);
    break;
  case 0x5c:
    local_c = (int *)0x5;
    break;
  case 0x5d:
    local_c = FUN_0041a560((int *)param_1[iVar1 * 4 + -4]);
    piVar7 = extraout_ECX_53;
    break;
  case 0x5e:
    local_c = FUN_0041a560((int *)0x0);
    piVar7 = extraout_ECX_54;
    break;
  case 0x5f:
    local_c = FUN_0041b460((void *)*piVar8);
    piVar7 = extraout_ECX_55;
    break;
  case 0x60:
    local_c = FUN_0041b460((void *)*piVar8);
    piVar7 = extraout_ECX_56;
    break;
  case 0x61:
    local_4 = (int *)param_1[iVar1 * 4 + 6];
    piVar7 = local_4;
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 5];
    break;
  case 0x62:
    local_c = (int *)param_1[iVar1 * 4];
    FUN_004108c0((int)&local_c,param_1 + iVar1 * 4 + -4);
    piVar7 = extraout_ECX_57;
    break;
  case 99:
    FUN_0041d630();
    piVar7 = extraout_ECX_58;
    break;
  case 100:
    FUN_0041d630();
    piVar7 = extraout_ECX_59;
    break;
  case 0x65:
    piVar7 = param_1 + iVar1 * 4 + -4;
    FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    local_c = FUN_0041a0a0(piVar8);
    goto LAB_0044c276;
  case 0x66:
    piVar7 = param_1 + iVar1 * 4 + -0xc;
    local_1c = FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    FUN_0041a0a0(piVar8);
    local_c = FUN_0041a0a0(piVar8);
    goto LAB_0044c276;
  case 0x67:
    piVar7 = param_1 + iVar1 * 4 + 4;
    if (*(char *)((int)piVar8 + 0x13) == '\0') {
      FUN_00418b00((undefined **)"near \"%T\": syntax error");
      local_c = (int *)0x0;
      FUN_004108c0((int)&local_c,piVar7);
      piVar7 = extraout_ECX_60;
    }
    else {
      local_c = FUN_0041a0a0(piVar8);
      if (local_c != (int *)0x0) {
        FUN_00408b60((char *)(*piVar7 + 1),(uint *)(local_c + 6));
      }
      FUN_004108c0((int)&local_c,piVar7);
      piVar7 = extraout_ECX_61;
    }
    break;
  case 0x68:
    FUN_0041d630();
    FUN_0041a170(piVar8,(int)local_c);
    FUN_004108c0((int)&local_c,param_1 + iVar1 * 4 + 4);
    piVar7 = extraout_ECX_62;
    break;
  case 0x69:
    local_c = (int *)FUN_00434990(piVar8);
    local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + -3];
    break;
  case 0x6a:
    local_c = FUN_0041a0a0(piVar8);
    FUN_004108c0((int)&local_c,param_1 + iVar1 * 4 + -0x10);
    piVar7 = extraout_ECX_63;
    break;
  case 0x6b:
    if (((int *)param_1[iVar1 * 4] != (int *)0x0) &&
       (*(int *)(*piVar8 + 0x60) < *(int *)param_1[iVar1 * 4])) {
      FUN_00418b00((undefined **)"too many arguments on function %T");
    }
    local_c = FUN_0041a120(piVar8,param_1[iVar1 * 4]);
    FUN_004108c0((int)&local_c,param_1 + iVar1 * 4 + -0xc);
    piVar7 = extraout_ECX_64;
    if ((param_1[iVar1 * 4 + -4] != 0) && (piVar7 = extraout_ECX_64, local_c != (int *)0x0)) {
      *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | 0x10;
      piVar7 = extraout_ECX_64;
    }
    break;
  case 0x6c:
    piVar7 = param_1 + iVar1 * 4 + -8;
    local_c = FUN_0041a120(piVar8,0);
LAB_0044c276:
    FUN_004108c0((int)&local_c,piVar7);
    piVar7 = extraout_ECX_65;
    break;
  case 0x6d:
    local_c = FUN_0041a120(piVar8,0);
    if (local_c != (int *)0x0) {
      *(undefined1 *)local_c = 0x9b;
    }
    FUN_004108c0((int)&local_c,param_1 + iVar1 * 4 + 4);
    piVar7 = extraout_ECX_66;
    break;
  case 0x6e:
    FUN_0041d660(piVar8,(uint)*(byte *)((int)param_1 + iVar6 + -2),(int)(param_1 + iVar1 * 4 + -4));
    piVar7 = extraout_ECX_67;
    break;
  case 0x6f:
    local_4 = (int *)0x0;
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 5];
    break;
  case 0x70:
    local_4 = (int *)0x1;
    piVar7 = (int *)param_1[iVar1 * 4 + 5];
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 5];
    break;
  case 0x71:
    piVar7 = FUN_0041a560((int *)0x0);
    piVar7 = FUN_0041a560(piVar7);
    local_c = FUN_0041a120(piVar8,piVar7);
    if (param_1[iVar1 * 4 + 2] != 0) {
      local_c = FUN_0041a0a0(piVar8);
    }
    local_8 = (int *)param_1[iVar1 * 4 + -3];
    goto LAB_0044c3bf;
  case 0x72:
    piVar7 = FUN_0041a560((int *)0x0);
    piVar7 = FUN_0041a560(piVar7);
    piVar7 = FUN_0041a560(piVar7);
    local_c = FUN_0041a120(piVar8,piVar7);
    if (param_1[iVar1 * 4 + -6] != 0) {
      local_c = FUN_0041a0a0(piVar8);
    }
    local_8 = (int *)param_1[iVar1 * 4 + -0xb];
LAB_0044c3bf:
    local_4 = (int *)param_1[iVar1 * 4 + 6];
    piVar7 = local_4;
    if (local_c != (int *)0x0) {
      *(byte *)((int)local_c + 2) = *(byte *)((int)local_c + 2) | 0x80;
    }
    break;
  case 0x73:
    FUN_0041d690(piVar8,(uint)*(byte *)((int)param_1 + iVar6 + 0xe),(int)(param_1 + iVar1 * 4));
    piVar7 = extraout_ECX_68;
    break;
  case 0x74:
    FUN_0041d690(piVar8,0x4a,(int)(param_1 + iVar1 * 4 + -4));
    piVar7 = extraout_ECX_69;
    break;
  case 0x75:
    FUN_0041d660(piVar8,0x46,(int)(param_1 + iVar1 * 4 + -4));
    FUN_004177c0((char *)param_1[iVar1 * 4 + 4],0x49);
    piVar7 = extraout_ECX_70;
    break;
  case 0x76:
    FUN_0041d660(piVar8,0x92,(int)(param_1 + iVar1 * 4 + -8));
    FUN_004177c0((char *)param_1[iVar1 * 4 + 4],0x4a);
    piVar7 = extraout_ECX_71;
    break;
  case 0x77:
    FUN_0041d6c0(piVar8,(uint)*(byte *)((int)param_1 + iVar6 + -2),param_1 + iVar1 * 4);
    piVar7 = extraout_ECX_72;
    break;
  case 0x78:
    FUN_0041d6c0(piVar8,0x9c,param_1 + iVar1 * 4);
    piVar7 = extraout_ECX_73;
    break;
  case 0x79:
    FUN_0041d6c0(piVar8,0x9d,param_1 + iVar1 * 4);
    piVar7 = extraout_ECX_74;
    break;
  case 0x7a:
    piVar7 = FUN_0041a560((int *)0x0);
    piVar7 = FUN_0041a560(piVar7);
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040e580();
      piVar7 = extraout_ECX_76;
    }
    else {
      local_c[4] = (int)piVar7;
      piVar7 = extraout_ECX_75;
    }
    if (param_1[iVar1 * 4 + -8] != 0) {
      local_c = FUN_0041a0a0(piVar8);
      piVar7 = extraout_ECX_77;
    }
    local_4 = (int *)param_1[iVar1 * 4 + 6];
    local_8 = (int *)param_1[iVar1 * 4 + -0xb];
    break;
  case 0x7b:
    if (param_1[iVar1 * 4] != 0) {
      local_c = FUN_0041a0a0(piVar8);
      if (local_c == (int *)0x0) {
        FUN_0040e580();
      }
      else {
        local_c[4] = param_1[iVar1 * 4];
        FUN_00419ee0();
      }
      goto LAB_0044c5e8;
    }
    local_c = FUN_0041a0a0(piVar8);
    FUN_004158d0(*piVar8,param_1[iVar1 * 4 + -0xc]);
    local_8 = (int *)param_1[iVar1 * 4 + -0xb];
    goto LAB_0044cc67;
  case 0x7c:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040fce0(*piVar8,param_1[iVar1 * 4]);
      local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_8 = (int *)param_1[iVar1 * 4 + -4];
    }
    else {
      local_c[4] = param_1[iVar1 * 4];
      *(byte *)((int)local_c + 3) = *(byte *)((int)local_c + 3) | 8;
      FUN_00419ee0();
      local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_8 = (int *)param_1[iVar1 * 4 + -4];
    }
    break;
  case 0x7d:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040fce0(*piVar8,param_1[iVar1 * 4]);
    }
    else {
      local_c[4] = param_1[iVar1 * 4];
      *(byte *)((int)local_c + 3) = *(byte *)((int)local_c + 3) | 8;
      FUN_00419ee0();
    }
LAB_0044c5e8:
    if (param_1[iVar1 * 4 + -8] != 0) {
      local_c = FUN_0041a0a0(piVar8);
    }
    local_8 = (int *)param_1[iVar1 * 4 + -0xb];
    goto LAB_0044cc67;
  case 0x7e:
    psVar4 = FUN_0041b4e0();
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040f240(psVar4);
    }
    else {
      piVar7 = FUN_0041bff0(piVar8,(int)psVar4,0,0,0,0,0,0,0);
      local_c[4] = (int)piVar7;
      *(byte *)((int)local_c + 3) = *(byte *)((int)local_c + 3) | 8;
      FUN_00419ee0();
    }
    if (param_1[iVar1 * 4 + -4] != 0) {
      local_c = FUN_0041a0a0(piVar8);
    }
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + -7];
    if (piVar7 == (int *)0x0) {
      local_4 = (int *)(param_1[iVar1 * 4 + 1] + param_1[iVar1 * 4]);
    }
    else {
      local_4 = (int *)(param_1[iVar1 * 4 + 5] + (int)piVar7);
    }
    break;
  case 0x7f:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040fce0(*piVar8,param_1[iVar1 * 4]);
      local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_8 = (int *)param_1[iVar1 * 4 + -8];
    }
    else {
      iVar13 = param_1[iVar1 * 4];
      *(byte *)((int)local_c + 3) = *(byte *)((int)local_c + 3) | 8;
      local_c[4] = iVar13;
      FUN_00419ee0();
      local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
      piVar7 = (int *)param_1[iVar1 * 4 + 4];
      local_8 = (int *)param_1[iVar1 * 4 + -8];
    }
    break;
  case 0x80:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c == (int *)0x0) {
      FUN_0040e580();
      local_8 = (int *)param_1[iVar1 * 4 + -0xc];
    }
    else {
      local_c[4] = param_1[iVar1 * 4 + -4];
      FUN_00419ee0();
      local_8 = (int *)param_1[iVar1 * 4 + -0xc];
    }
    goto LAB_0044cc67;
  case 0x81:
    piVar8 = (int *)param_1[iVar1 * 4 + -0xc];
    goto LAB_0044c83b;
  case 0x82:
    piVar8 = (int *)0x0;
LAB_0044c83b:
    piVar8 = FUN_0041a560(piVar8);
    local_c = FUN_0041a560(piVar8);
    piVar7 = extraout_ECX_78;
    break;
  case 0x83:
    iVar13 = param_1[iVar1 * 4 + -0x18];
    iVar11 = param_1[iVar1 * 4 + -0x20];
    uVar12 = 0;
    piVar7 = param_1 + iVar1 * 4 + 4;
    piVar10 = (int *)param_1[iVar1 * 4];
    piVar5 = param_1 + iVar1 * 4 + -0x24;
    psVar4 = FUN_0041b4e0();
    FUN_00445a10(piVar8,param_1 + iVar1 * 4 + -0x14,(int)(param_1 + iVar1 * 4 + -0x10),psVar4,
                 piVar10,iVar11,(int)piVar5,piVar7,uVar12,iVar13);
    piVar7 = extraout_ECX_79;
    break;
  case 0x84:
    local_c = (int *)0x2;
    break;
  case 0x85:
    if (param_1[iVar1 * 4 + 1] != 0) {
      FUN_0041a000((void *)0x0,*piVar8,0x98);
      FUN_00434990(piVar8);
    }
    piVar5 = FUN_0041a560((int *)param_1[iVar1 * 4 + -0xc]);
    local_c = piVar5;
    FUN_00415af0(piVar5,piVar8,1);
    FUN_0041a600(piVar8);
    piVar7 = extraout_ECX_80;
    if (piVar5 != (int *)0x0) {
      iVar13 = *piVar5;
      *(char *)(piVar5[3] + -8 + iVar13 * 0x14) = (char)param_1[iVar1 * 4 + 4];
      piVar7 = (int *)(iVar13 * 5);
    }
    break;
  case 0x86:
    if (param_1[iVar1 * 4 + 1] != 0) {
      FUN_0041a0a0(piVar8);
      FUN_00434990(piVar8);
    }
    piVar5 = FUN_0041a560((int *)0x0);
    local_c = piVar5;
    FUN_00415af0(piVar5,piVar8,1);
    FUN_0041a600(piVar8);
    piVar7 = extraout_ECX_81;
    if (piVar5 != (int *)0x0) {
      iVar13 = *piVar5;
      *(char *)(piVar5[3] + -8 + iVar13 * 0x14) = (char)param_1[iVar1 * 4 + 4];
      piVar7 = (int *)(iVar13 * 5);
    }
    break;
  case 0x87:
    FUN_00442b50((short *)param_1[iVar1 * 4 + 4],param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_82;
    break;
  case 0x88:
    FUN_0041cd60();
    piVar7 = extraout_ECX_83;
    break;
  case 0x89:
    FUN_00447960(piVar8,param_1 + iVar1 * 4,param_1 + iVar1 * 4 + 4,0,0);
    piVar7 = extraout_ECX_84;
    break;
  case 0x8a:
    FUN_00447960(piVar8,param_1 + iVar1 * 4 + -8,param_1 + iVar1 * 4 + -4,param_1 + iVar1 * 4 + 4,0)
    ;
    piVar7 = extraout_ECX_85;
    break;
  case 0x8b:
    iVar13 = 0;
    goto LAB_0044ca1c;
  case 0x8c:
    FUN_00447960(piVar8,param_1 + iVar1 * 4 + -8,param_1 + iVar1 * 4 + -4,param_1 + iVar1 * 4 + 4,1)
    ;
    piVar7 = extraout_ECX_86;
    break;
  case 0x8d:
    iVar13 = 1;
LAB_0044ca1c:
    FUN_00447960(piVar8,param_1 + iVar1 * 4 + -0xc,param_1 + iVar1 * 4 + -8,param_1 + iVar1 * 4,
                 iVar13);
    piVar7 = extraout_ECX_87;
    break;
  case 0x8e:
    local_1c = (undefined4 *)param_1[iVar1 * 4 + -8];
    local_18 = (param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]) - (int)local_1c;
    FUN_0042cec0(param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_88;
    break;
  case 0x8f:
    FUN_00444b30(piVar8,(int)(param_1 + iVar1 * 4 + -0x14),param_1[iVar1 * 4 + -0x10],
                 (char)param_1[iVar1 * 4 + -0xc],(int *)param_1[iVar1 * 4 + -0xb],
                 (short *)param_1[iVar1 * 4 + -4],(undefined4 *)param_1[iVar1 * 4 + 4],
                 param_1[iVar1 * 4 + -0x24],param_1[iVar1 * 4 + -0x1c]);
    if (param_1[iVar1 * 4 + -0x13] == 0) {
      piVar7 = extraout_ECX_89;
      local_c = (int *)param_1[iVar1 * 4 + -0x18];
      local_8 = (int *)param_1[iVar1 * 4 + -0x17];
    }
    else {
      piVar7 = extraout_ECX_89;
      local_c = (int *)param_1[iVar1 * 4 + -0x14];
      local_8 = (int *)param_1[iVar1 * 4 + -0x13];
    }
    break;
  case 0x90:
    local_c = (int *)0x22;
    break;
  case 0x91:
    local_c = (int *)0x1e;
    break;
  case 0x92:
    local_c = (int *)0x30;
    break;
  case 0x93:
    local_c = (int *)(uint)*(byte *)((int)param_1 + iVar6 + 0xe);
    goto switchD_0044b651_caseD_43;
  case 0x94:
    local_c = (int *)0x6b;
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0x95:
    *(int *)(*(int *)(param_1[iVar1 * 4 + -4] + 0x24) + 0x20) = param_1[iVar1 * 4];
    piVar7 = (int *)param_1[iVar1 * 4];
    *(int **)(param_1[iVar1 * 4 + -4] + 0x24) = piVar7;
    local_c = (int *)param_1[iVar1 * 4 + -4];
    break;
  case 0x96:
    *(int *)(param_1[iVar1 * 4] + 0x24) = param_1[iVar1 * 4];
    local_c = (int *)param_1[iVar1 * 4];
    break;
  case 0x97:
    local_c = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + 5];
    FUN_00418b00((undefined **)
                 "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
                );
    piVar7 = extraout_ECX_90;
    break;
  case 0x98:
    FUN_00418b00((undefined **)
                 "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    piVar7 = extraout_ECX_91;
    break;
  case 0x99:
    FUN_00418b00((undefined **)
                 "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    piVar7 = extraout_ECX_92;
    break;
  case 0x9a:
    local_c = (int *)FUN_004229a0((int *)param_1[iVar1 * 4],(undefined4 *)param_1[iVar1 * 4 + 4],
                                  (char)param_1[iVar1 * 4 + -0x10]);
    piVar7 = extraout_ECX_93;
    break;
  case 0x9b:
    local_c = (int *)FUN_0041cc90((void *)*piVar8,(int *)param_1[iVar1 * 4],(undefined4 *)0x0,
                                  (char)param_1[iVar1 * 4 + -0x18]);
    piVar7 = extraout_ECX_94;
    break;
  case 0x9c:
    local_c = (int *)FUN_0041cc90((void *)*piVar8,(int *)0x0,(undefined4 *)param_1[iVar1 * 4 + 4],
                                  (char)param_1[iVar1 * 4 + -0xc]);
    piVar7 = extraout_ECX_95;
    break;
  case 0x9d:
    local_c = (int *)FUN_00422a00((undefined4 *)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_96;
    break;
  case 0x9e:
    local_c = FUN_0041cc20();
    piVar7 = extraout_ECX_97;
    break;
  case 0x9f:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c != (int *)0x0) {
      *(undefined1 *)((int)local_c + 1) = 4;
    }
    local_8 = (int *)param_1[iVar1 * 4 + -8];
LAB_0044cc67:
    local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    break;
  case 0xa0:
    local_c = FUN_0041a0a0(piVar8);
    if (local_c != (int *)0x0) {
      *(char *)((int)local_c + 1) = (char)param_1[iVar1 * 4 + -8];
    }
    local_4 = (int *)(param_1[iVar1 * 4 + 5] + param_1[iVar1 * 4 + 4]);
    piVar7 = (int *)param_1[iVar1 * 4 + 4];
    local_8 = (int *)param_1[iVar1 * 4 + -0x10];
    break;
  case 0xa1:
    local_c = (int *)0x3;
    break;
  case 0xa2:
    FUN_00442300(piVar8,(short *)param_1[iVar1 * 4 + 4],param_1[iVar1 * 4]);
    piVar7 = extraout_ECX_98;
    break;
  case 0xa3:
    FUN_00442710(param_1[iVar1 * 4 + 4],param_1[iVar1 * 4],piVar8);
    piVar7 = extraout_ECX_99;
    break;
  case 0xa4:
    FUN_0042ee50(piVar8);
    piVar7 = extraout_ECX_x00100;
    break;
  case 0xa5:
    FUN_00442d20(piVar8,(int *)0x0);
    piVar7 = extraout_ECX_x00101;
    break;
  case 0xa6:
    FUN_00442d20(piVar8,param_1 + iVar1 * 4 + 4);
    piVar7 = extraout_ECX_x00102;
    break;
  case 0xa7:
    FUN_00445930(0,piVar8);
    piVar7 = extraout_ECX_x00103;
    break;
  case 0xa8:
    FUN_00445930((int)(param_1 + iVar1 * 4),piVar8);
    piVar7 = extraout_ECX_x00104;
    break;
  case 0xa9:
    FUN_0044a160(piVar8,(short *)param_1[iVar1 * 4 + -8]);
    piVar7 = extraout_ECX_x00105;
    break;
  case 0xaa:
    FUN_00435490(piVar8,(int)(param_1 + iVar1 * 4 + 4));
    piVar7 = extraout_ECX_x00106;
    break;
  case 0xab:
    *(undefined1 *)(*piVar8 + 0xea) = 0;
    FUN_00445760(piVar8,(short *)param_1[iVar1 * 4 + 4]);
    piVar7 = extraout_ECX_x00107;
    break;
  case 0xac:
    FUN_0041cd80(piVar8);
    piVar7 = extraout_ECX_x00108;
    break;
  case 0xad:
    FUN_0041cd80(piVar8);
    piVar7 = extraout_ECX_x00109;
    break;
  case 0xae:
    FUN_00445140(piVar8,param_1 + iVar1 * 4 + -8,param_1 + iVar1 * 4 + 4);
    piVar7 = extraout_ECX_x00110;
    break;
  case 0xaf:
    FUN_00416dc0();
    piVar7 = extraout_ECX_x00111;
    break;
  case 0xb0:
    FUN_004104e0((int)piVar8);
    piVar7 = extraout_ECX_x00112;
  }
switchD_0044b651_caseD_b1:
  uVar9 = (uint)(byte)(&DAT_004b5461)[param_2 * 2];
  uVar12 = (&DAT_004b5460)[param_2 * 2];
  *param_1 = *param_1 - uVar9;
  uVar3 = FUN_00410970(piVar7,CONCAT31((int3)(uVar9 * 0x10 >> 8),uVar12));
  if (0x275 < CONCAT22(extraout_var_02,uVar3)) {
    FUN_00417970();
    return;
  }
  if (uVar9 != 0) {
    *param_1 = *param_1 + 1;
    *(undefined2 *)(param_1 + iVar1 * 4 + uVar9 * -4 + 7) = uVar3;
    *(undefined1 *)((int)param_1 + uVar9 * -0x10 + iVar6 + 0x1e) = uVar12;
    param_1[iVar1 * 4 + uVar9 * -4 + 8] = (int)local_c;
    param_1[iVar1 * 4 + uVar9 * -4 + 9] = (int)local_8;
    param_1[iVar1 * 4 + uVar9 * -4 + 10] = (int)local_4;
    return;
  }
  FUN_0041d730(extraout_ECX_x00113,(int *)&local_c,uVar3,uVar12);
  return;
switchD_0044b651_caseD_43:
  local_8 = (int *)0x0;
  goto switchD_0044b651_caseD_b1;
}


/* END FUNCTION 0x0044b600 */
