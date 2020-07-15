/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to compare two numbers using pointers */


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
    if(*p>*q)
    {
        printf("\nThe larger of the two numbers  is %d\n",*p);
    }
    else if(*q>*p)
    {
        printf("\nThe larger of the two numbers  is %d\n",*q);
    }
    else
    {
        printf("\nBoth numbers are equal\n");
    }
    
}