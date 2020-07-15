// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long *ptr = (long *)malloc(sizeof(int)); // 4 bytes allocated
    *ptr = 10;                               // This will access 8 bytes of memory
    printf("%ld\n",*ptr);
}