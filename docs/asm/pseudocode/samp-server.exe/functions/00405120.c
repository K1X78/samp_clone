/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405120
 * Name: FUN_00405120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00405120(int param_1)

{
  uint *in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FILE *unaff_ESI;
  
  uVar1 = *in_EAX;
  iVar5 = 0;
  do {
    if (uVar1 == 0) {
      return iVar5;
    }
    if (param_1 == 0) {
      uVar1 = (uint)(byte)*in_EAX;
LAB_00405319:
      _putc(uVar1,unaff_ESI);
    }
    else {
      if ((int)uVar1 < 0x80) {
        uVar1 = uVar1 & 0xff;
        goto LAB_00405319;
      }
      uVar2 = (int)uVar1 >> 6;
      if ((int)uVar1 < 0x800) {
        _putc(uVar2 & 0x1f | 0xc0,unaff_ESI);
        _putc(uVar1 & 0x3f | 0x80,unaff_ESI);
      }
      else {
        uVar4 = (int)uVar1 >> 0xc;
        if ((int)uVar1 < 0x10000) {
          _putc(uVar4 & 0xf | 0xe0,unaff_ESI);
          _putc(uVar2 & 0x3f | 0x80,unaff_ESI);
          _putc(uVar1 & 0x3f | 0x80,unaff_ESI);
        }
        else {
          uVar3 = (int)uVar1 >> 0x12;
          if ((int)uVar1 < 0x200000) {
            _putc(uVar3 & 7 | 0xf0,unaff_ESI);
            _putc(uVar4 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar2 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar1 & 0x3f | 0x80,unaff_ESI);
          }
          else if ((int)uVar1 < 0x4000000) {
            _putc((int)uVar1 >> 0x18 & 3U | 0xf8,unaff_ESI);
            _putc(uVar3 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar4 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar2 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar1 & 0x3f | 0x80,unaff_ESI);
          }
          else {
            _putc((int)uVar1 >> 0x1e & 1U | 0xfc,unaff_ESI);
            _putc((int)uVar1 >> 0x18 & 0x3fU | 0x80,unaff_ESI);
            _putc(uVar3 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar4 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar2 & 0x3f | 0x80,unaff_ESI);
            _putc(uVar1 & 0x3f | 0x80,unaff_ESI);
          }
        }
      }
    }
    uVar1 = in_EAX[1];
    in_EAX = in_EAX + 1;
    iVar5 = iVar5 + 1;
  } while( true );
}


/* END FUNCTION 0x00405120 */
