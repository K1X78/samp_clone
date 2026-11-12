/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d24b0
 * Name: FUN_100d24b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d24b0(void)

{
  int iVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  (*(code *)PTR__free_101554bc)(in_EAX[0x37]);
  (*(code *)PTR__free_101554bc)(in_EAX[0x2f]);
  FUN_100ce770(in_EAX + 0x88);
  FUN_100ce770(in_EAX + 0x94);
  *unaff_EDI = *in_EAX;
  iVar1 = in_EAX[0xa8];
  unaff_EDI[0xa8] = iVar1;
  if (iVar1 != 0) {
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x5c]);
    unaff_EDI[0x5c] = 0;
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x5d]);
    unaff_EDI[0x5d] = 0;
    unaff_EDI[0x5c] = in_EAX[0x5c];
    unaff_EDI[0x5d] = in_EAX[0x5d];
    in_EAX[0x5c] = 0;
    in_EAX[0x5d] = 0;
  }
  iVar1 = in_EAX[0xa9];
  unaff_EDI[0xa9] = iVar1;
  if (iVar1 != 0) {
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x3d]);
    unaff_EDI[0x3d] = 0;
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x35]);
    unaff_EDI[0x35] = 0;
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x3e]);
    unaff_EDI[0x3e] = 0;
    (*(code *)PTR__free_101554bc)(unaff_EDI[0x36]);
    unaff_EDI[0x36] = 0;
    unaff_EDI[0x3d] = in_EAX[0x3d];
    unaff_EDI[0x35] = in_EAX[0x35];
    unaff_EDI[0x3e] = in_EAX[0x3e];
    unaff_EDI[0x36] = in_EAX[0x36];
    in_EAX[0x3d] = 0;
    in_EAX[0x35] = 0;
    in_EAX[0x3e] = 0;
    in_EAX[0x36] = 0;
  }
  (*(code *)PTR__free_101554bc)(unaff_EDI[0x26]);
  unaff_EDI[0x26] = 0;
  (*(code *)PTR__free_101554bc)(unaff_EDI[0x2b]);
  unaff_EDI[0x2b] = 0;
  unaff_EDI[0x26] = in_EAX[0x26];
  unaff_EDI[0x27] = in_EAX[0x27];
  unaff_EDI[0x28] = in_EAX[0x28];
  unaff_EDI[0x29] = in_EAX[0x29];
  unaff_EDI[0x2b] = in_EAX[0x2b];
  unaff_EDI[0x2c] = in_EAX[0x2c];
  unaff_EDI[0x2d] = in_EAX[0x2d];
  unaff_EDI[0x2e] = in_EAX[0x2e];
  unaff_EDI[0x41] = in_EAX[0x41];
  unaff_EDI[0x40] = in_EAX[0x40];
  FUN_100dbaf0();
  FUN_100d07e0();
  unaff_EDI[0xa2] = 1;
  (*(code *)PTR__free_101554bc)(in_EAX[0x5c]);
  in_EAX[0x5c] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x5d]);
  in_EAX[0x5d] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x3d]);
  in_EAX[0x3d] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x35]);
  in_EAX[0x35] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x3e]);
  in_EAX[0x3e] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x36]);
  in_EAX[0x36] = 0;
  (*(code *)PTR__free_101554bc)(in_EAX[0x187]);
  in_EAX[0x187] = 0;
  FUN_100e8a60(in_EAX + 0xe6,0);
  FUN_100e8a60(in_EAX + 0xea,0);
  (*(code *)PTR__free_101554bc)(in_EAX[0xee]);
  in_EAX[0xee] = 0;
  return;
}


/* END FUNCTION 0x100d24b0 */
