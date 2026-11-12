/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ff90
 * Name: FUN_0042ff90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042ff90(void)

{
  char cVar1;
  void *pvVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined3 extraout_var_00;
  undefined4 extraout_ECX;
  uint *unaff_EDI;
  uint local_8;
  uint local_4;
  
  if ((unaff_EDI[7] & 0xc) == 0) {
    cVar1 = *(char *)((int)unaff_EDI + 0x1f);
    FUN_00414cb0();
    if ((unaff_EDI[7] & 2) != 0) {
      pvVar2 = (void *)unaff_EDI[5];
      bVar3 = FUN_00408500(extraout_ECX,cVar1);
      if ((CONCAT31(extraout_var,bVar3) != 0) &&
         ((cVar1 == '\x01' || (iVar4 = FUN_0042f910(cVar1,(void *)unaff_EDI[6],pvVar2), iVar4 != 0))
         )) {
        if ((local_8 == 0) && (bVar3 = FUN_00408a20(&local_8), CONCAT31(extraout_var_00,bVar3) != 0)
           ) {
          *unaff_EDI = local_8;
          unaff_EDI[1] = local_4;
          *(ushort *)(unaff_EDI + 7) = (ushort)unaff_EDI[7] & 0xbf04 | 4;
        }
        else {
          FUN_004085d0((double *)(unaff_EDI + 2));
          *(ushort *)(unaff_EDI + 7) = (ushort)unaff_EDI[7] & 0xbf08 | 8;
        }
        if (cVar1 != '\x01') {
          FUN_00408130(unaff_EDI[4]);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x0042ff90 */
