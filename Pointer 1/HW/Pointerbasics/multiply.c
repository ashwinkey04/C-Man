/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to multiply two numbers using pointers */

        
#include<stdio.h>

int main()
{
    int m,n;
    int *p,*q;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of m: ");
    scanf("%d",&m);
    p=&n;
    q=&m;
    printf("\nProduct is %d \n",(*p)*(*q));
}