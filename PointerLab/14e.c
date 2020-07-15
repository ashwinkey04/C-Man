// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int)); // p points to a location_1 in memory
    *p = 5;
    int *q = (int *)malloc(sizeof(int)); // p points to a location_2 in memory
    *q = 10;
    p = q; // p is reassigned and both p and q point to location_2
}