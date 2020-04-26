#ifndef THORIN_ARITHOP
#error "define THORIN_ARITHOP before including this file"
#endif

THORIN_ARITHOP(add)
THORIN_ARITHOP(sub)
THORIN_ARITHOP(mul)
THORIN_ARITHOP(div)
THORIN_ARITHOP(rem)

THORIN_ARITHOP(and)
THORIN_ARITHOP(or)
THORIN_ARITHOP(xor)
THORIN_ARITHOP(shl)
THORIN_ARITHOP(shr)

#undef THORIN_ARITHOP
