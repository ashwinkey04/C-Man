// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    printf("%d\n", *ptr);
}