  "ccr",     -1,              m68000up|mcf,
  "sr",      -1,              m68000up|mcf,
  "usp",     -1,              m68000up|mcfusp,
  "nc",      0,               m68040up,
  "dc",      1,               m68040up,
  "ic",      2,               m68040up,
  "bc",      3,               m68040up,

/* ColdFire */
  "acc",     0,               mcfmac|mcfemac,
  "acc0",    0,               mcfemac,
  "acc1",    1,               mcfemac,
  "acc2",    2,               mcfemac,
  "acc3",    3,               mcfemac,
  "accext01",1,               mcfemac,
  "accext23",3,               mcfemac,
  "macsr",   -1,              mcfmac|mcfemac,
  "mask",    -1,              mcfmac|mcfemac,
  "<<",      MACSF_ShiftLeft, mcfmac|mcfemac,
  ">>",      MACSF_ShiftRight,mcfmac|mcfemac,

/* Apollo AMMX */
  "e0",      8,               apollo,
  "e1",      9,               apollo,
  "e2",      10,              apollo,
  "e3",      11,              apollo,
  "e4",      12,              apollo,
  "e5",      13,              apollo,
  "e6",      14,              apollo,
  "e7",      15,              apollo,
  "e8",      16,              apollo,
  "e9",      17,              apollo,
  "e10",     18,              apollo,
  "e11",     19,              apollo,
  "e12",     20,              apollo,
  "e13",     21,              apollo,
  "e14",     22,              apollo,
  "e15",     23,              apollo,
  "e16",     24,              apollo,
  "e17",     25,              apollo,
  "e18",     26,              apollo,
  "e19",     27,              apollo,
  "e20",     28,              apollo,
  "e21",     29,              apollo,
  "e22",     30,              apollo,
  "e23",     31,              apollo,

/* pmove format 1 68030+68851 */
  "tc",      0,               m68030|m68851,
  "srp",     2,               m68030|m68851,
  "crp",     3,               m68030|m68851,
/* pmove format 1 68851 only */
  "drp",     1,               m68851,
  "cal",     4,               m68851,
  "val",     5,               m68851,
  "scc",     6,               m68851,
  "ac",      7,               m68851,
/* pmove format 2 BADx, BACx */
  "bac0",    0,               m68851,
  "bac1",    1,               m68851,
  "bac2",    2,               m68851,
  "bac3",    3,               m68851,
  "bac4",    4,               m68851,
  "bac5",    5,               m68851,
  "bac6",    6,               m68851,
  "bac7",    7,               m68851,
  "bad0",    0,               m68851,
  "bad1",    1,               m68851,
  "bad2",    2,               m68851,
  "bad3",    3,               m68851,
  "bad4",    4,               m68851,
  "bad5",    5,               m68851,
  "bad6",    6,               m68851,
  "bad7",    7,               m68851,
/* pmove format 3 */
  "mmusr",   0,               m68030|m68851,
  "psr",     0,               m68030|m68851,
  "pcsr",    1,               m68851,
/* pmove 030 only */
  "tt0",     2,               m68030,
  "tt1",     3,               m68030,
#if 0
/* pmove 68ec030 */
  "acusr",   -1,              m68030,
  "ac0",     1,               m68030,
  "ac1",     3,               m68030,
#endif

/* movec control registers */
  "sfc",     0x000,           m68010up|cpu32,
  "dfc",     0x001,           m68010up|cpu32,
  "cacr",    0x002,           m68020up|mcf,
  "asid",    0x003,           mcf,
  "tc",      0x003,           m68040up,
  "itt0",    0x004,           m68040up,
  "itt1",    0x005,           m68040up,
  "dtt0",    0x006,           m68040up,
  "dtt1",    0x007,           m68040up,
  "iacr0",   0x004,           m68040up,
  "iacr1",   0x005,           m68040up,
  "dacr0",   0x006,           m68040up,
  "dacr1",   0x007,           m68040up,
  "acr0",    0x004,           mcf,
  "acr1",    0x005,           mcf,
  "acr2",    0x006,           mcf,
  "acr3",    0x007,           mcf,
  "buscr",   0x008,           m68060,
  "mmubar",  0x008,           mcf,
  "str",     0x00a,           ac68080,
  "stc",     0x00b,           ac68080,
  "sth",     0x00c,           ac68080,
  "stb",     0x00d,           ac68080,
  "mwr",     0x00e,           ac68080,
  "usp",     0x800,           m68010up|cpu32|mcfb|mcfc,
  "vbr",     0x801,           m68010up|cpu32|mcf,
  "caar",    0x802,           m68020|m68030,
  "msp",     0x803,           m68020|m68030|m68040,
  "isp",     0x804,           m68020|m68030|m68040,
  "mmusr",   0x805,           m68040,
  "urp",     0x806,           m68040up,
  "srp",     0x807,           m68040up,
  "pcr",     0x808,           m68060|ac68080,
/*"PC",0x80f, @@@ hmmm?*/
  "ccc",     0x809,           ac68080,
  "iep1",    0x80a,           ac68080,
  "iep2",    0x80b,           ac68080,
  "bpc",     0x80c,           ac68080,
  "bpw",     0x80d,           ac68080,
  "dch",     0x80e,           ac68080,
  "dcm",     0x80f,           ac68080,
  "rombar",  0xc00,           mcf,
  "rombar0", 0xc00,           mcf,
  "rombar1", 0xc01,           mcf,
  "rambar",  0xc04,           mcf,
  "rambar0", 0xc04,           mcf,
  "rambar1", 0xc05,           mcf,
  "mpcr",    0xc0c,           mcf,
  "edrambar",0xc0d,           mcf,
  "secmbar", 0xc0e,           mcf,
  "mbar",    0xc0f,           mcf,
  "pcr1u0",  0xd02,           mcf,
  "pcr1l0",  0xd03,           mcf,
  "pcr2u0",  0xd04,           mcf,
  "pcr2l0",  0xd05,           mcf,
  "pcr3u0",  0xd06,           mcf,
  "pcr3l0",  0xd07,           mcf,
  "pcr1u1",  0xd0a,           mcf,
  "pcr1l1",  0xd0b,           mcf,
  "pcr2u1",  0xd0c,           mcf,
  "pcr2l1",  0xd0d,           mcf,
  "pcr3u1",  0xd0e,           mcf,
  "pcr3l1",  0xd0f,           mcf,
