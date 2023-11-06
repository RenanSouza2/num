#ifndef __FREAG_STRUCT_H__
#define __FREAG_STRUCT_H__

#include <stdint.h>

#include "header.h"

STRUCT(frag)
{
    uint64_t val;
    frag_p next;
};

#endif
