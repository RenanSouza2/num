#include <stdio.h>
#include <assert.h>

#include "../debug.h"
#include "../../../utils/mem-report/bin/header.h"

void test_frag_create()
{
    printf("\n\t%s\t\t", __func__);

    frag_p f = frag_create(1, (frag_p)2);
    assert(f->val == 1);
    assert(f->next == (frag_p)2);
    free(f);

    assert(mem_empty());
}

void test_frag()
{
    printf("\n%s\t\t", __func__);

    test_frag_create();
}


int main() 
{
    setbuf(stdout, NULL);
    test_frag();
    printf("\n\n\tTest successful\n\n");
    return 0;
}
