// Ashwin R
// R.No: 19343
// Date: May 15

#include<stdio.h>
#include<stdlib.h>

void threeColorsSort(int * theArray, int arraySize)
{
    int i,j;
    for(i=0;i<arraySize;i++)
    {
        int a=theArray[i];
        for(j=i+1;j<arraySize;j++)
        {
            int b=theArray[j];
            if(b<a)
            {
                int t=theArray[j];
                theArray[j]=theArray[i];
                theArray[i]=t;
            }
        }
    }
}


int main()
{
    int len;
    int *arr;
    arr=(int*)malloc(len*sizeof(int));
    printf("Enter no of elements:  ");
    scanf("%d",&len);
    arr=realloc(arr,len*sizeof(int));
    printf("Enter the array: ");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    threeColorsSort(arr,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);
}
