#include <stdio.h>
#include <stdlib.h>

int  main()
{
    void* d=malloc(10);
    free(d);
    return 0;
}
