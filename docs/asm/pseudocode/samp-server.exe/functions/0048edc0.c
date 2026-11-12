/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048edc0
 * Name: FUN_0048edc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_0048edc0(float *param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *param_1;
  uVar2 = (ushort)(fVar1 < 100.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 100.0) << 0xe;
  if (fVar1 < 100.0) {
    fVar1 = *param_1;
    uVar2 = (ushort)(fVar1 < -100.0) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == -100.0) << 0xe;
    if (fVar1 >= -100.0 && (fVar1 == -100.0) == 0) {
      fVar1 = param_1[1];
      uVar2 = (ushort)(fVar1 < 100.0) << 8 | (ushort)NAN(fVar1) << 10 |
              (ushort)(fVar1 == 100.0) << 0xe;
      if (fVar1 < 100.0) {
        fVar1 = param_1[1];
        uVar2 = (ushort)(fVar1 < -100.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == -100.0) << 0xe;
        if (fVar1 >= -100.0 && (fVar1 == -100.0) == 0) {
          fVar1 = param_1[2];
          uVar2 = (ushort)(fVar1 < 100.0) << 8 | (ushort)NAN(fVar1) << 10 |
                  (ushort)(fVar1 == 100.0) << 0xe;
          if (fVar1 < 100.0) {
            fVar1 = param_1[2];
            uVar2 = (ushort)(fVar1 < -100.0) << 8 | (ushort)NAN(fVar1) << 10 |
                    (ushort)(fVar1 == -100.0) << 0xe;
            if (fVar1 >= -100.0 && (fVar1 == -100.0) == 0) {
              return CONCAT11((char)(uVar2 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* END FUNCTION 0x0048edc0 */
