/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c5620
 * Name: FUN_100c5620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c5620(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_102ac9d8 != 0) {
    FUN_1006d090();
  }
  if (DAT_102aca2c != 0) {
    FUN_1006abc0();
  }
  if (DAT_102aca20 != 0) {
    FUN_10070940();
  }
  if (DAT_102ac9ec != 0) {
    FUN_1006b630();
  }
  if (DAT_102aca30 != 0) {
    FUN_1006d1f0();
  }
  if (DAT_102aca34 != 0) {
    FUN_100702d0();
  }
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) != 0)) {
    FUN_10012a50();
  }
  if (DAT_102aca18 != 0) {
    piVar1 = *(int **)(DAT_102aca18 + 0x137);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x40))(piVar1);
    }
    if (DAT_102aca18 != 0) {
      piVar1 = *(int **)(DAT_102aca18 + 0x13b);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x40))(piVar1);
      }
      if (DAT_102aca18 != 0) {
        piVar1 = *(int **)(DAT_102aca18 + 0x13f);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x40))(piVar1);
        }
        if (DAT_102aca18 != 0) {
          piVar1 = *(int **)(DAT_102aca18 + 0x14f);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x40))(piVar1);
          }
          if (DAT_102aca18 != 0) {
            piVar1 = *(int **)(DAT_102aca18 + 0x153);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x40))(piVar1);
            }
            if ((DAT_102aca18 != 0) &&
               (piVar1 = *(int **)(DAT_102aca18 + 0x143), piVar1 != (int *)0x0)) {
              (**(code **)(*piVar1 + 0x30))(piVar1);
            }
          }
        }
      }
    }
  }
  if (DAT_102ac9f0 != 0) {
    piVar1 = *(int **)(DAT_102ac9f0 + 0x10b);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x40))(piVar1);
    }
    if (DAT_102ac9f0 != 0) {
      piVar1 = *(int **)(DAT_102ac9f0 + 0x10f);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x40))(piVar1);
      }
      if ((DAT_102ac9f0 != 0) && (piVar1 = *(int **)(DAT_102ac9f0 + 0x107), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x48))(piVar1);
      }
    }
  }
  if (DAT_102aca10 != 0) {
    FUN_10066c10();
    if (DAT_102aca10 != 0) {
      piVar1 = *(int **)(DAT_102aca10 + 0x63a6);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
      if ((DAT_102aca10 != 0) && (piVar1 = *(int **)(DAT_102aca10 + 0x63aa), piVar1 != (int *)0x0))
      {
        (**(code **)(*piVar1 + 0x30))(piVar1);
      }
    }
  }
  if ((DAT_102aca14 != 0) && (*(int *)(DAT_102aca14 + 0x14e0) != 0)) {
    FUN_10068fc0();
  }
  if ((DAT_102ac9dc != (int *)0x0) && (*DAT_102ac9dc != 0)) {
    FUN_1006e410(1);
  }
  if (DAT_102acab0 != 0) {
    FUN_10086a60();
  }
  if (DAT_102acacc != (int *)0x0) {
    (**(code **)(*DAT_102acacc + 8))(DAT_102acacc);
    DAT_102acacc = (int *)0x0;
  }
  DAT_1016be80 = 0;
  DAT_10151ab8 = 0;
  if (DAT_102aca24 != 0) {
    iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x17894) = 0;
      FUN_1001e8a0();
    }
    if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20) != 0)) {
      FUN_1001e360();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x100c5620 */
