/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Error correction - added free() to free the memory*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int i;
    int *a = malloc(sizeof(int));
    *a = 10;
    printf("%d\n", *a);
    a =(int*)(calloc(3, sizeof(int)));                                 // Added int* (Works otherwise also)
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    printf("%d %d %d\n", a[0], a[1], a[2]);
    free(a);                                                            // Here we are freeing the memory which would not hav been done elsewise
    return 0;
}