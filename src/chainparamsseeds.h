#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xd3,0xc9,0x74}, 22588},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x25,0xaa,0xf9,0x6c,0x23,0xec,0xfc,0x67,0x39,0x5e}, 22588},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xf8,0x2b,0x0b,0x89,0x79,0xbe,0xde,0xa2,0x42,0x32}, 22588}
};

static SeedSpec6 pnSeed6_test[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x50,0xd3,0xc9,0x74}, 122588},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0x25,0xaa,0xf9,0x6c,0x23,0xec,0xfc,0x67,0x39,0x5e}, 122588},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xf8,0x2b,0x0b,0x89,0x79,0xbe,0xde,0xa2,0x42,0x32}, 122588}
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
