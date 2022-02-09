/*
 * Copyright Supranational LLC
 * Licensed under the Apache License, Version 2.0, see LICENSE for details.
 * SPDX-License-Identifier: Apache-2.0
 */

#include "consts.h"

/* z = -0xd201000000010000 */
const vec384 BLS12_381_P = {    /* (z-1)^2 * (z^4 - z^2 + 1)/3 + z */
    TO_LIMB_T(0x8508c00000000001), TO_LIMB_T(0x170b5d4430000000),
    TO_LIMB_T(0x1ef3622fba094800), TO_LIMB_T(0x1a22d9f300f5138f),
    TO_LIMB_T(0xc63b05c06ca1493b), TO_LIMB_T(0x1ae3a4617c510ea)
};
const limb_t BLS12_381_p0 = (limb_t)0x8508bfffffffffff;  /* -1/P */

const radix384 BLS12_381_Rx = { /* (1<<384)%P, "radix", one-in-Montgomery */
  { { ONE_MONT_P },
    { 0 } }
};

const vec384 BLS12_381_RR = {   /* (1<<768)%P, "radix"^2, to-Montgomery */
    TO_LIMB_T(0xb786686c9400cd22), TO_LIMB_T(0x329fcaab00431b1),
    TO_LIMB_T(0x22a5f11162d6b46d), TO_LIMB_T(0xbfdf7d03827dc3ac),
    TO_LIMB_T(0x837e92f041790bf9), TO_LIMB_T(0x6dfccb1e914b88)
};

const vec256 BLS12_381_r = {    /* z^4 - z^2 + 1, group order */
    TO_LIMB_T(9015221291577245683ULL), TO_LIMB_T(8239323489949974514ULL),
    TO_LIMB_T(1646089257421115374ULL), TO_LIMB_T(958099254763297437ULL)
};

const vec256 BLS12_381_rRR = {  /* (1<<512)%r, "radix"^2, to-Montgomery */
    TO_LIMB_T(2726216793283724667ULL), TO_LIMB_T(14712177743343147295ULL),
    TO_LIMB_T(12091039717619697043ULL), TO_LIMB_T(81024008013859129ULL)
};
