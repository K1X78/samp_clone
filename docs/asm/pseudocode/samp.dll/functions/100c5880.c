/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5880
 * Name: FUN_100c5880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5880(void)

{
  int *piVar1;
  int iVar2;
  
  SetCursor((HCURSOR)0x0);
  if (DAT_102acab0 != 0) {
    FUN_10086a00();
  }
  if (DAT_102ac9d8 != 0) {
    FUN_1006d0c0();
  }
  if (DAT_102aca2c != 0) {
    FUN_1006ac00();
  }
  if (DAT_102aca20 != 0) {
    FUN_10070690();
  }
  if (DAT_102ac9ec != 0) {
    FUN_1006b640();
  }
  if (DAT_102aca30 != 0) {
    FUN_1006d240();
  }
  if (DAT_102aca34 != 0) {
    FUN_10070300();
  }
  if (DAT_102aca18 != 0) {
    piVar1 = *(int **)(DAT_102aca18 + 0x137);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x44))(piVar1);
    }
    if (DAT_102aca18 != 0) {
      piVar1 = *(int **)(DAT_102aca18 + 0x13b);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x44))(piVar1);
      }
      if (DAT_102aca18 != 0) {
        piVar1 = *(int **)(DAT_102aca18 + 0x13f);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x44))(piVar1);
        }
        if (DAT_102aca18 != 0) {
          piVar1 = *(int **)(DAT_102aca18 + 0x14f);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x44))(piVar1);
          }
          if (DAT_102aca18 != 0) {
            piVar1 = *(int **)(DAT_102aca18 + 0x153);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x44))(piVar1);
            }
            if ((DAT_102aca18 != 0) &&
               (piVar1 = *(int **)(DAT_102aca18 + 0x143), piVar1 != (int *)0x0)) {
              (**(code **)(*piVar1 + 0x34))(piVar1);
            }
          }
        }
      }
    }
  }
  if (DAT_102ac9f0 != 0) {
    piVar1 = *(int **)(DAT_102ac9f0 + 0x10b);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x44))(piVar1);
    }
    if (DAT_102ac9f0 != 0) {
      piVar1 = *(int **)(DAT_102ac9f0 + 0x10f);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x44))(piVar1);
      }
      if ((DAT_102ac9f0 != 0) && (piVar1 = *(int **)(DAT_102ac9f0 + 0x107), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x4c))(piVar1);
      }
    }
  }
  if (DAT_102aca10 != 0) {
    FUN_10067c40();
    if (DAT_102aca10 != 0) {
      piVar1 = *(int **)(DAT_102aca10 + 0x63a6);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))(piVar1);
      }
      if ((DAT_102aca10 != 0) && (piVar1 = *(int **)(DAT_102aca10 + 0x63aa), piVar1 != (int *)0x0))
      {
        (**(code **)(*piVar1 + 0x34))(piVar1);
      }
    }
  }
  (**(code **)(*DAT_102ac9d0 + 0x90))(DAT_102ac9d0,0x20,0x20,0x15,2,&DAT_102acacc,0);
  D3DXLoadSurfaceFromFileA(DAT_102acacc,0,0,"mouse.png",0,1,0,0);
  if (DAT_102acacc != 0) {
    (**(code **)(*DAT_102ac9d0 + 0x28))(DAT_102ac9d0,0,0,DAT_102acacc);
  }
  if (DAT_102ac9dc != 0) {
    FUN_1006e360();
  }
  iVar2 = FUN_100a0760();
  if (iVar2 == 0) {
    FUN_100a0530(2,0);
    FUN_100a0530(0,1);
    FUN_100a0410();
  }
  DAT_10151ab8 = 1;
  if ((DAT_102aca24 != 0) && (iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x17894) = 1;
  }
  return;
}


/* END FUNCTION 0x100c5880 */
