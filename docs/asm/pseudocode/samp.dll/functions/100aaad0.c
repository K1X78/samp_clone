/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aaad0
 * Name: FUN_100aaad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100aaad0(void)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD local_4;
  
  if (DAT_102ac9b8 == 1) {
    _DAT_1018f498 = 0x7ee2a0;
    _DAT_1018f49c = 0x7ee2a9;
  }
  else {
    _DAT_1018f498 = 0x7ee2e0;
    _DAT_1018f49c = 0x7ee2e9;
  }
  FUN_100aa6a0();
  FUN_100aa5e0();
  FUN_100aa980();
  FUN_100aa630();
  FUN_100aa180();
  VirtualProtect(&DAT_004df7e2,2,0x40,&local_4);
  _DAT_004df7e2 = 0x90909090;
  DAT_004df7e6 = 0x90;
  VirtualProtect(&DAT_005b8fe4,1,0x40,&local_4);
  DAT_005b8fe4 = 0x7f;
  VirtualProtect(&DAT_005720a5,5,0x40,&local_4);
  _DAT_005720a5 = 0x90909090;
  DAT_005720a9 = 0x90;
  VirtualProtect(&DAT_0053c159,5,0x40,&local_4);
  _DAT_0053c159 = 0x90909090;
  DAT_0053c15d = 0x90;
  VirtualProtect(&DAT_0053c136,5,0x40,&local_4);
  _DAT_0053c136 = 0x90909090;
  DAT_0053c13a = 0x90;
  if (DAT_102ac9b8 == 1) {
    VirtualProtect(&DAT_00748063,5,0x40,&local_4);
    puVar1 = (undefined4 *)&DAT_00748063;
  }
  else {
    VirtualProtect(&DAT_007480b3,5,0x40,&local_4);
    puVar1 = (undefined4 *)&DAT_007480b3;
  }
  *puVar1 = 0x90909090;
  *(undefined1 *)(puVar1 + 1) = 0x90;
  VirtualProtect(&DAT_0058fbe9,5,0x40,&local_4);
  _DAT_0058fbe9 = 0x90909090;
  DAT_0058fbed = 0x90;
  VirtualProtect(&DAT_0086d1ec,1,0x40,&local_4);
  DAT_0086d1ec = 0;
  VirtualProtect(&DAT_0053c090,5,0x40,&local_4);
  _DAT_0053c090 = 0x90909090;
  DAT_0053c094 = 0x90;
  VirtualProtect(&DAT_00440833,8,0x40,&local_4);
  _DAT_00440833 = 0x90909090;
  _DAT_00440837 = 0x90909090;
  VirtualProtect(&DAT_0053ea08,10,0x40,&local_4);
  _DAT_0053ea08 = 0x90909090;
  _DAT_0053ea0c = 0x90909090;
  _DAT_0053ea10 = 0x9090;
  VirtualProtect(&DAT_0071162c,1,0x40,&local_4);
  DAT_0071162c = 0x50;
  VirtualProtect(&DAT_00609c08,0x27,0x40,&local_4);
  puVar1 = (undefined4 *)&DAT_00609c08;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0x90909090;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0x9090;
  *(undefined1 *)((int)puVar1 + 2) = 0x90;
  VirtualProtect(&DAT_0056e0fa,0x12,0x40,&local_4);
  _DAT_0056e0fa = 0x90909090;
  _DAT_0056e0fe = 0x90909090;
  _DAT_0056e102 = 0x90909090;
  _DAT_0056e106 = 0x90909090;
  _DAT_0056e10a = 0x9090;
  VirtualProtect(&DAT_006bc9eb,2,0x40,&local_4);
  _DAT_006bc9eb = 0x9090;
  VirtualProtect(&DAT_004bc6c1,3,0x40,&local_4);
  DAT_004bc6c1 = 0xb0;
  DAT_004bc6c2 = 0;
  DAT_004bc6c3 = 0x90;
  VirtualProtect(&DAT_0044ac75,5,0x40,&local_4);
  DAT_0044ac79 = 0x90;
  _DAT_0044ac75 = 0x909001b0;
  VirtualProtect(&DAT_005b47b0,1,0x40,&local_4);
  DAT_005b47b0 = 0xc3;
  VirtualProtect(&DAT_005e63a6,0x13,0x40,&local_4);
  _DAT_005e63a6 = 0x90909090;
  _DAT_005e63aa = 0x90909090;
  _DAT_005e63ae = 0x90909090;
  _DAT_005e63b2 = 0x90909090;
  _DAT_005e63b6 = 0x9090;
  DAT_005e63b8 = 0x90;
  VirtualProtect(&DAT_00621aea,0xc,0x40,&local_4);
  _DAT_00621aea = 0x90909090;
  _DAT_00621aee = 0x90909090;
  _DAT_00621af2 = 0x90909090;
  VirtualProtect(&DAT_0062d331,0xb,0x40,&local_4);
  _DAT_0062d331 = 0x90909090;
  _DAT_0062d335 = 0x90909090;
  _DAT_0062d339 = 0x9090;
  DAT_0062d33b = 0x90;
  VirtualProtect(&DAT_00741fff,0x1b,0x40,&local_4);
  _DAT_00741fff = 0x90909090;
  _DAT_00742003 = 0x90909090;
  _DAT_00742007 = 0x90909090;
  _DAT_0074200b = 0x90909090;
  _DAT_0074200f = 0x90909090;
  _DAT_00742013 = 0x90909090;
  _DAT_00742017 = 0x9090;
  DAT_00742019 = 0x90;
  VirtualProtect(&DAT_00704e8a,5,0x40,&local_4);
  _DAT_00704e8a = 0x90909090;
  DAT_00704e8e = 0x90;
  VirtualProtect(&DAT_004090a0,1,0x40,&local_4);
  DAT_004090a0 = 0xc3;
  VirtualProtect(&DAT_00441482,5,0x40,&local_4);
  _DAT_00441482 = 0x90909090;
  DAT_00441486 = 0x90;
  VirtualProtect(&DAT_00588be0,1,0x40,&local_4);
  DAT_00588be0 = 0xc3;
  VirtualProtect(&DAT_0053c06a,5,0x40,&local_4);
  _DAT_0053c06a = 0x90909090;
  DAT_0053c06e = 0x90;
  VirtualProtect(&DAT_00434272,5,0x40,&local_4);
  _DAT_00434272 = 0x90909090;
  DAT_00434276 = 0x90;
  VirtualProtect((LPVOID)0x60d64d,2,0x40,&local_4);
  DAT_0060d64e = 0x84;
  VirtualProtect(&DAT_00542485,0xb,0x40,&local_4);
  _DAT_00542485 = 0x90909090;
  _DAT_00542489 = 0x90909090;
  _DAT_0054248d = 0x9090;
  DAT_0054248f = 0x90;
  VirtualProtect(&DAT_00612710,3,0x40,&local_4);
  DAT_00612710 = 0x33;
  DAT_00612711 = 0xc0;
  DAT_00612712 = 0xc3;
  VirtualProtect(&DAT_00613ba7,5,0x40,&local_4);
  _DAT_00613ba7 = 0x90909090;
  DAT_00613bab = 0x90;
  VirtualProtect(&DAT_00609a4e,6,0x40,&local_4);
  _DAT_00609a4e = 0x90909090;
  _DAT_00609a52 = 0x9090;
  VirtualProtect(&DAT_006f8cf8,0xc,0x40,&local_4);
  _DAT_006f8cf8 = 0x90909090;
  DAT_006f8cfc = 0x90;
  _DAT_006f8cfd = DAT_101546c0;
  _DAT_006f8d01 = DAT_101546c4;
  DAT_006f8d03 = DAT_101546c6;
  VirtualProtect(&DAT_0053c1c1,5,0x40,&local_4);
  _DAT_0053c1c1 = 0x90909090;
  DAT_0053c1c5 = 0x90;
  VirtualProtect(&DAT_00540040,10,0x40,&local_4);
  _DAT_00540040 = 0x90909090;
  _DAT_00540044 = 0x9090;
  DAT_00540046 = 0x85;
  DAT_00540047 = 0xc9;
  DAT_00540048 = 0x74;
  VirtualProtect(&DAT_0056e5ad,5,0x40,&local_4);
  _DAT_0056e5ad = 0x90909090;
  DAT_0056e5b1 = 0x90;
  VirtualProtect(&DAT_00541df5,5,0x40,&local_4);
  VirtualProtect(&DAT_00609cb4,5,0x40,&local_4);
  _DAT_00609cb4 = 0x90909090;
  DAT_00609cb8 = 0x90;
  VirtualProtect(&DAT_0060f2c4,0x19,0x40,&local_4);
  _DAT_0060f2c4 = 0x90909090;
  _DAT_0060f2c8 = 0x90909090;
  _DAT_0060f2cc = 0x90909090;
  _DAT_0060f2d0 = 0x90909090;
  _DAT_0060f2d4 = 0x90909090;
  _DAT_0060f2d8 = 0x90909090;
  DAT_0060f2dc = 0x90;
  VirtualProtect(&DAT_006b18f1,5,0x40,&local_4);
  _DAT_006b18f1 = 0x90909090;
  DAT_006b18f5 = 0x90;
  VirtualProtect(&DAT_006b9298,5,0x40,&local_4);
  _DAT_006b9298 = 0x90909090;
  DAT_006b929c = 0x90;
  VirtualProtect(&DAT_006f1793,5,0x40,&local_4);
  _DAT_006f1793 = 0x90909090;
  DAT_006f1797 = 0x90;
  VirtualProtect(&DAT_006f86b6,5,0x40,&local_4);
  _DAT_006f86b6 = 0x90909090;
  DAT_006f86ba = 0x90;
  VirtualProtect(&DAT_0047c477,1,0x40,&local_4);
  DAT_0047c477 = 0xeb;
  VirtualProtect(&DAT_0053a984,2,0x40,&local_4);
  DAT_0053a984 = 0xeb;
  DAT_0053a985 = 0x77;
  VirtualProtect(&DAT_0060f289,8,0x40,&local_4);
  _DAT_0060f289 = 0x90909090;
  _DAT_0060f28d = 0x90909090;
  VirtualProtect(&DAT_0060f29d,0x13,0x40,&local_4);
  _DAT_0060f29d = 0x90909090;
  _DAT_0060f2a1 = 0x90909090;
  _DAT_0060f2a5 = 0x90909090;
  _DAT_0060f2a9 = 0x90909090;
  _DAT_0060f2ad = 0x9090;
  DAT_0060f2af = 0x90;
  VirtualProtect(&DAT_0058db5f,9,0x40,&local_4);
  DAT_0058db5f = 0xbd;
  DAT_0058db60 = 0;
  DAT_0058db61 = 0;
  DAT_0058db62 = 0;
  DAT_0058db63 = 0;
  DAT_0058db64 = 0x90;
  DAT_0058db65 = 0x90;
  DAT_0058db66 = 0x90;
  DAT_0058db67 = 0x90;
  VirtualProtect(&DAT_00575b0e,5,0x40,&local_4);
  _DAT_00575b0e = 0x90909090;
  DAT_00575b12 = 0x90;
  VirtualProtect(&DAT_0063adc8,6,0x40,&local_4);
  _DAT_0063adc8 = 0x90909090;
  _DAT_0063adcc = 0x9090;
  VirtualProtect(&DAT_0058fc2e,0x1e,0x40,&local_4);
  _DAT_0058fc2e = 0x90909090;
  _DAT_0058fc32 = 0x90909090;
  _DAT_0058fc36 = 0x90909090;
  _DAT_0058fc3a = 0x90909090;
  _DAT_0058fc3e = 0x90909090;
  _DAT_0058fc42 = 0x90909090;
  _DAT_0058fc46 = 0x90909090;
  _DAT_0058fc4a = 0x9090;
  VirtualProtect(&DAT_005e1e70,2,0x40,&local_4);
  DAT_005e1e70 = 0x33;
  DAT_005e1e71 = 0xc0;
  VirtualProtect(&DAT_006a8500,0x77,0x40,&local_4);
  puVar1 = (undefined4 *)&DAT_006a8500;
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xc3c3c3c3;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0xc3c3;
  *(undefined1 *)((int)puVar1 + 2) = 0xc3;
  VirtualProtect(&DAT_00593d7c,5,0x40,&local_4);
  _DAT_00593d7c = 0x90909090;
  DAT_00593d80 = 0x90;
  if (DAT_102ac9b8 == 1) {
    VirtualProtect(&DAT_007469af,2,0x40,&local_4);
    DAT_007469af = 0x33;
    DAT_007469b0 = 0xc0;
  }
  else {
    VirtualProtect(&DAT_007469ff,2,0x40,&local_4);
    DAT_007469ff = 0x33;
    DAT_00746a00 = 0xc0;
  }
  VirtualProtect(&DAT_0061e0c2,4,0x40,&local_4);
  _DAT_0061e0c2 = &DAT_101546f0;
  VirtualProtect(&DAT_00454cc9,4,0x40,&local_4);
  _DAT_00454cc9 = &DAT_101546f4;
  VirtualProtect(&DAT_005952a6,5,0x40,&local_4);
  _DAT_005952a6 = 0x90909090;
  DAT_005952aa = 0x90;
  VirtualProtect(&DAT_006884c4,6,0x40,&local_4);
  VirtualProtect(&DAT_00688200,6,0x40,&local_4);
  _DAT_006884c4 = 0x90909090;
  _DAT_006884c8 = 0x9090;
  _DAT_00688200 = 0x90909090;
  _DAT_00688204 = 0x9090;
  VirtualProtect(&DAT_00570535,0xf,0x40,&local_4);
  _DAT_00570535 = 0x90909090;
  _DAT_00570539 = 0x90909090;
  _DAT_0057053d = 0x90909090;
  _DAT_00570541 = 0x9090;
  DAT_00570543 = 0x90;
  VirtualProtect(&DAT_005e7847,0x11,0x40,&local_4);
  _DAT_005e7847 = 0x90909090;
  _DAT_005e784b = 0x90909090;
  _DAT_005e784f = 0x90909090;
  _DAT_005e7853 = 0x90909090;
  DAT_005e7857 = 0x90;
  VirtualProtect(&DAT_00570546,0xaf,0x40,&local_4);
  puVar1 = (undefined4 *)&DAT_00570546;
  for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0x90909090;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = 0x9090;
  *(undefined1 *)((int)puVar1 + 2) = 0x90;
  VirtualProtect(&DAT_006d1874,0x18,0x40,&local_4);
  _DAT_006d1874 = 0x6d17d5;
  _DAT_006d1878 = 0x6d17d5;
  _DAT_006d187c = 0x6d17d5;
  _DAT_006d1880 = 0x6d17d5;
  _DAT_006d1884 = 0x6d17d5;
  _DAT_006d1888 = 0x6d17d5;
  VirtualProtect(&DAT_0064db49,9,0x40,&local_4);
  _DAT_0064db49 = 0x90909090;
  _DAT_0064db4d = 0x90909090;
  DAT_0064db51 = 0x90;
  VirtualProtect(&DAT_0064bc9f,9,0x40,&local_4);
  _DAT_0064bc9f = 0x90909090;
  _DAT_0064bca3 = 0x90909090;
  DAT_0064bca7 = 0x90;
  VirtualProtect(&DAT_0064b872,9,0x40,&local_4);
  _DAT_0064b872 = 0x90909090;
  _DAT_0064b876 = 0x90909090;
  DAT_0064b87a = 0x90;
  VirtualProtect(&DAT_005e7d62,5,0x40,&local_4);
  DAT_005e7d62 = 0x5e;
  DAT_005e7d63 = 0x5d;
  DAT_005e7d64 = 0xc2;
  DAT_005e7d65 = 0x1c;
  DAT_005e7d66 = 0;
  VirtualProtect(&DAT_006348f6,4,0x40,&local_4);
  _DAT_006348f6 = 0xffffffff;
  VirtualProtect(&DAT_00634de2,4,0x40,&local_4);
  _DAT_00634de2 = 0xffffffff;
  VirtualProtect((LPVOID)0x71a220,0x400,0x40,&local_4);
  DAT_0071a223 = 3;
  DAT_0071a5d5 = 3;
  DAT_0071a247 = 3;
  DAT_0071a282 = 3;
  DAT_0071a26a = 3;
  DAT_0071a2e5 = 3;
  DAT_0071a3ac = 3;
  DAT_0071a4b9 = 3;
  DAT_0071a53c = 3;
  DAT_0071a37f = 3;
  DAT_0071a518 = 3;
  DAT_0071a525 = 3;
  DAT_0071a54b = 3;
  DAT_0071a5b6 = 3;
  DAT_0071a3bb = 3;
  VirtualProtect(&DAT_007361b2,4,0x40,&local_4);
  _DAT_007361b2 = &DAT_101546cc;
  VirtualProtect(&DAT_007361cb,4,0x40,&local_4);
  _DAT_007361cb = &DAT_101546c8;
  VirtualProtect(&DAT_007361e0,4,0x40,&local_4);
  _DAT_007361e0 = &DAT_101546cc;
  VirtualProtect(&DAT_007361f5,4,0x40,&local_4);
  _DAT_007361f5 = &DAT_101546c8;
  VirtualProtect(&DAT_00524582,5,0x40,&local_4);
  _DAT_00524582 = 0x90909090;
  DAT_00524586 = 0x90;
  VirtualProtect(&DAT_00712025,1,0x40,&local_4);
  DAT_00712025 = 1;
  VirtualProtect((LPVOID)0x858b90,4,0x40,&local_4);
  VirtualProtect(&DAT_0053bf28,5,0x40,&local_4);
  _DAT_0053bf28 = 0x90909090;
  DAT_0053bf2c = 0x90;
  VirtualProtect(&DAT_00859520,8,0x40,&local_4);
  VirtualProtect(&DAT_00c17044,8,0x40,&local_4);
  VirtualProtect(&DAT_004c3a5b,10,0x40,&local_4);
  _DAT_004c3a5b = 0x90909090;
  _DAT_004c3a5f = 0x90909090;
  _DAT_004c3a63 = 0x9090;
  VirtualProtect(&DAT_0047bf54,4,0x40,&local_4);
  FUN_10002130();
  return;
}


/* END FUNCTION 0x100aaad0 */
