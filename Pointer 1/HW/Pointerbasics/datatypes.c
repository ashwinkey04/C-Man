/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to print a charcter ,integer and double using pointers */

        
#include<stdio.h>

int main()
{
    int a;
    double d;
    char c;
    int *p;
    char *q;
    double *b;
    printf("Enter integer value : ");
    scanf("%d",&a);
    printf("Enter character: ");
    scanf(" %c",&c);
    printf("Enter double value : ");
    scanf("%lf",&d);
    p=&a;
    q=&c;
    b=&d;
    printf("\nInteger value is %d\nCharacter value is %c\nDouble value is %lf\n",*p,*q,*b);
}