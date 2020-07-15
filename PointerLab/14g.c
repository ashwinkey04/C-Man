// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int)); // p points to a location_1 in memory
    *p = 20;
    int *q = p;                          // Both p and q not point to location_1
    free(p);                             // p frees location_1. The runtime system claims it.
    *q = 10;                             // Can’t access location_1 since it is no more program memory
    printf("%d\n",*q);
}