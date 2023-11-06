#include <stdio.h>
#include <assert.h>

#include "../debug.h"

void test_frag_create()
{
    printf("\n\t%s\t\t", __func__);
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
