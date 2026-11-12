/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412c40
 * Name: FUN_00412c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00412c40(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_EAX;
  int iVar3;
  char local_100 [256];
  
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)DAT_004ed188);
  if ((char)DAT_004ed188 == '\0') {
    DAT_004ed188._2_1_ = 0;
    DAT_004ed188._1_1_ = '\0';
    FUN_004123c0((byte *)0x0);
    FUN_00407cc0();
    iVar3 = 0;
    do {
      *(char *)((int)&DAT_004ed188 + iVar3 + 3) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      DAT_004ed188._2_1_ =
           DAT_004ed188._2_1_ + local_100[iVar3] + *(char *)((int)&DAT_004ed188 + iVar3 + 3);
      uVar1 = *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3);
      *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3) =
           *(undefined1 *)((int)&DAT_004ed188 + iVar3 + 3);
      cVar2 = *(char *)((int)&DAT_004ed18c + iVar3);
      *(undefined1 *)((int)&DAT_004ed188 + iVar3 + 3) = uVar1;
      DAT_004ed188._2_1_ = DAT_004ed188._2_1_ + local_100[iVar3 + 1] + cVar2;
      uVar1 = *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3);
      *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3) =
           *(undefined1 *)((int)&DAT_004ed18c + iVar3);
      *(undefined1 *)((int)&DAT_004ed18c + iVar3) = uVar1;
      DAT_004ed188._2_1_ =
           DAT_004ed188._2_1_ + local_100[iVar3 + 2] + *(char *)((int)&DAT_004ed18c + iVar3 + 1);
      uVar1 = *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3);
      *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3) =
           *(undefined1 *)((int)&DAT_004ed18c + iVar3 + 1);
      cVar2 = (&DAT_004ed18e)[iVar3];
      *(undefined1 *)((int)&DAT_004ed18c + iVar3 + 1) = uVar1;
      DAT_004ed188._2_1_ = DAT_004ed188._2_1_ + local_100[iVar3 + 3] + cVar2;
      uVar1 = *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3);
      *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3) = (&DAT_004ed18e)[iVar3];
      (&DAT_004ed18e)[iVar3] = uVar1;
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x100);
    DAT_004ed188._0_1_ = '\x01';
  }
  DAT_004ed188._1_1_ = DAT_004ed188._1_1_ + 1;
  cVar2 = *(char *)((int)&DAT_004ed188 + DAT_004ed188._1_1_ + 3);
  DAT_004ed188._2_1_ = DAT_004ed188._2_1_ + cVar2;
  *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._1_1_ + 3) =
       *(undefined1 *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3);
  *(char *)((int)&DAT_004ed188 + DAT_004ed188._2_1_ + 3) = cVar2;
  return CONCAT31((int3)((uint)iVar3 >> 8),
                  *(undefined1 *)
                   ((int)&DAT_004ed188 +
                   (byte)(*(char *)((int)&DAT_004ed188 + DAT_004ed188._1_1_ + 3) + cVar2) + 3));
}


/* END FUNCTION 0x00412c40 */
