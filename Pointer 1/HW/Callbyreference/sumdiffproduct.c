/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to find sum,difference and product using a single function and  pointers */

        
#include<stdio.h>

void calc(int a,int b,int *sum,int *diff,int *product)
{
    *sum=a+b;
    *diff=a-b;
    *product=a*b;
}

int main()
{
    int a,b,sum,diff,product;
    printf("Enter value 1 : ");
    scanf("%d",&a);
    printf("Enter value 2 : ");
    scanf("%d",&b);
    calc(a,b,&sum,&diff,&product);
    printf("\nSum is %d\nDifference is %d\nProduct is %d\n",sum,diff,product);
    return 0;
}