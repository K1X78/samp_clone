/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aa300
 * Name: FUN_100aa300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100aa378) */
/* WARNING: Removing unreachable block (ram,0x100aa399) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100aa300(void)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD local_44;
  _MEMORYSTATUSEX local_40;
  
  iVar2 = 0;
  do {
    if (DAT_00747483 == -0x77) {
      DAT_102ac9b8 = 1;
      VirtualProtect(&DAT_00747483,6,0x40,&local_44);
      puVar1 = (undefined4 *)&DAT_00747483;
LAB_100aa3b3:
      DAT_00c8d4c0 = 5;
      *puVar1 = 0x90909090;
      *(undefined2 *)(puVar1 + 1) = 0x9090;
      VirtualProtect(&DAT_00866cd8,10,0x40,&local_44);
      VirtualProtect(&DAT_00866ccc,10,0x40,&local_44);
      DAT_00866cd8 = 't';
      DAT_00866cd8_1._0_1_ = 'i';
      DAT_00866cd8_1._1_1_ = 't';
      DAT_00866cd8_1._2_1_ = 'l';
      _DAT_00866cdc = 0x65;
      DAT_00866ccc = 't';
      DAT_00866ccc_1._0_1_ = 'i';
      DAT_00866ccc_1._1_1_ = 't';
      DAT_00866ccc_1._2_1_ = 'l';
      _DAT_00866cd0 = 0x65;
      VirtualProtect(&DAT_00745b87,0x44,0x40,&local_44);
      puVar1 = (undefined4 *)&DAT_00745b87;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar1 = 0x90909090;
        puVar1 = puVar1 + 1;
      }
      VirtualProtect(&DAT_007459e1,2,0x40,&local_44);
      _DAT_007459e1 = 0x9090;
      FUN_100aa060(&DAT_00561872,0x1e,0x85);
      DAT_00561872 = 0x33;
      DAT_00561873 = 0xc0;
      _DAT_00561874 = 0x90909090;
      _DAT_00561878 = 0x90909090;
      _DAT_0056187c = 0x90909090;
      _DAT_00561880 = 0x90909090;
      _DAT_00561884 = 0x90909090;
      _DAT_00561888 = 0x90909090;
      _DAT_0056188c = 0x9090;
      DAT_0056188e = 0x90;
      local_40.dwLength = 0x40;
      GlobalMemoryStatusEx(&local_40);
      DAT_102a9270 = local_40.ullTotalPhys._0_4_ >> 0x14 | local_40.ullTotalPhys._4_4_ << 0xc;
      if (DAT_102a9270 < 0xfa1) {
        if (DAT_102a9270 < 0x7d1) {
          if (DAT_102a9270 < 0x3e9) {
            DAT_102a9274 = (-(uint)(500 < DAT_102a9270) & 0x2000000) + 0x6000000;
          }
          else {
            DAT_102a9274 = 0x10000000;
          }
        }
        else {
          DAT_102a9274 = 0x20000000;
        }
      }
      else {
        DAT_102a9274 = 0x40000000;
      }
      VirtualProtect(&DAT_005b8e6a,4,0x40,&local_44);
      _DAT_005b8e6a = DAT_102a9274;
      FUN_100aa060(&DAT_004083c0,1,0xb8);
      DAT_004083c0 = 0xc3;
      VirtualProtect(&DAT_00590099,5,0x40,&local_44);
      _DAT_00590099 = 0x90909090;
      DAT_0059009d = 0x90;
      VirtualProtect(&DAT_0053e94c,1,0x40,&local_44);
      DAT_0053e94c = 2;
      VirtualProtect(&DAT_00731f60,4,0x40,&local_44);
      _DAT_00731f60 = 20000;
      VirtualProtect(&DAT_0072fad6,4,0x40,&local_44);
      _DAT_0072fad6 = FUN_100a5c10;
      VirtualProtect(&DAT_006fa996,4,0x40,&local_44);
      _DAT_006fa996 = FUN_100a5c90;
      return 1;
    }
    if (DAT_00747483 == -0x38) {
      DAT_102ac9b8 = 2;
      VirtualProtect(&DAT_007474d3,6,0x40,&local_44);
      puVar1 = (undefined4 *)&DAT_007474d3;
      goto LAB_100aa3b3;
    }
    if (DAT_00ba6831 == '\x01') {
      return 0;
    }
    Sleep(10);
    iVar2 = iVar2 + 1;
    if (6000 < iVar2) {
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x100aa300 */
