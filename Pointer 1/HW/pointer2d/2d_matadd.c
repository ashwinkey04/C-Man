/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program for matrix addition using a pointer */

        
#include<stdio.h>

void read(int arr[][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(arr+i)+j);
        }
    }
}

void add(int a[][10],int b[][10],int s[][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(*(s+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
}

void print(int arr[][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10],s[10][10],*p,*q,i,r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    printf("Enter the elements of 1st matrix\n");
    read(a,r,c);
    printf("Enter the elements of 2nd matrix\n");
    read(b,r,c);
    add(a,b,s,r,c);
    printf("\nThe sum of the two matrix\n");
    print(s,r,c);    
    return 0;
}