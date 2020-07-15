/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to get two strings and concatenate them using realloc and malloc*/

        
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int  i, n1, n2,sum=0;
    char *ptr;
    printf("Enter size: ");
    scanf("%d", &n1);
    ptr= (char*) malloc(n1 * sizeof(char));
    printf("Enter first string: ");
    scanf("%s",ptr);
    printf("First string is %s",ptr);
    printf("\nEnter the new strings size: ");
    scanf("%d", &n2);
    ptr= realloc(ptr, n2 * sizeof(int));
    printf("Enter string2: ");
    scanf("%s",ptr+n1);
    printf("Second string is %s\n",ptr+n1);
    printf("String after concatenation is %s\n",ptr);
    free(ptr);
    return 0;
}