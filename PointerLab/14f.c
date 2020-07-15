// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int)); // p points to a location_1 in memory
    *p = 5;
    p = (int *)malloc(sizeof(int)); // p reassigned to a new location (location_2)
    *p = 10;
}