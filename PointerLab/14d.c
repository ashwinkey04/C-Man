// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        int *ptr;
        ptr = (int *)malloc(sizeof(int));
        *ptr = 10;
        printf("%d\n", *ptr);
        free(ptr);
    }
}