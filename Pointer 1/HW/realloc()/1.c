/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to find the sum of contents of a dynamic array, increase its size and find sum again */

        
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr, i, n1, n2,sum=0;
    printf("Enter size: ");
    scanf("%d", &n1);
    ptr= (int*) malloc(n1 * sizeof(int));
    printf("Enter elements: ");
    for(i= 0; i< n1; i++)
    {
        scanf("%d", ptr+ i);
        sum += *(ptr+ i);
    }
    printf("Current sum is %d",sum);
    printf("\nEnter the new size: ");
    scanf("%d", &n2);
    ptr= realloc(ptr, n2 * sizeof(int));
    printf("Enter elements: ");
    for(i= n1; i< n2; i++)
    {
        scanf("%d", ptr+ i);
        sum += *(ptr+ i);
    }
    printf("new sum is %d\n",sum);
    free(ptr);
    return 0;
}