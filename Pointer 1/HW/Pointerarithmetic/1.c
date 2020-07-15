/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to copy contents from one array to other using a pointer */

        
#include<stdio.h>

void copy(int *from,int *to,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        *(to+i)=*(from+i);
    }
}

int main()
{
    int from[10],to[10],*f,*t,i,size;
    printf("Enter number of elements in the array : ");
    scanf("%d",&size);
    printf("Enter elements in the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&from[i]);
    }
    copy(from,to,size);
    printf("\nElements in array(to) after getting copied : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",to[i]);
    }
    printf("\n");
    return 0;
}