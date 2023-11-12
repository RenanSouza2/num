#include <stdlib.h>
#include <assert.h>

#include "debug.h"

#ifdef DEBUG

#include <stdio.h>

#include "../../utils/mem-report/bin/header.h"

#endif

frag_p frag_create(uint64_t val, uint64_t index, frag_p f_next)
{
    frag_p f = malloc(sizeof(frag_t));
    assert(f);

    *f = (frag_t){val, index, f_next};
    return f;
}
