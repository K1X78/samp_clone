/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ed50
 * Name: FUN_0048ed50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_0048ed50(float *param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = *param_1;
  uVar2 = (ushort)(fVar1 < 20000.0) << 8 | (ushort)NAN(fVar1) << 10 |
          (ushort)(fVar1 == 20000.0) << 0xe;
  if (fVar1 < 20000.0) {
    fVar1 = *param_1;
    uVar2 = (ushort)(fVar1 < -20000.0) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == -20000.0) << 0xe;
    if (fVar1 >= -20000.0 && (fVar1 == -20000.0) == 0) {
      fVar1 = param_1[1];
      uVar2 = (ushort)(fVar1 < 20000.0) << 8 | (ushort)NAN(fVar1) << 10 |
              (ushort)(fVar1 == 20000.0) << 0xe;
      if (fVar1 < 20000.0) {
        fVar1 = param_1[1];
        uVar2 = (ushort)(fVar1 < -20000.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == -20000.0) << 0xe;
        if (fVar1 >= -20000.0 && (fVar1 == -20000.0) == 0) {
          fVar1 = param_1[2];
          uVar2 = (ushort)(fVar1 < 200000.0) << 8 | (ushort)NAN(fVar1) << 10 |
                  (ushort)(fVar1 == 200000.0) << 0xe;
          if (fVar1 < 200000.0) {
            fVar1 = param_1[2];
            uVar2 = (ushort)(fVar1 < -1000.0) << 8 | (ushort)NAN(fVar1) << 10 |
                    (ushort)(fVar1 == -1000.0) << 0xe;
            if (fVar1 >= -1000.0 && (fVar1 == -1000.0) == 0) {
              return CONCAT11((char)(uVar2 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* END FUNCTION 0x0048ed50 */
