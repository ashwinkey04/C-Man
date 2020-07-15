#include <stdio.h>
#include <string.h>
int sz=3;
void fun(int a[][sz], int m, int n)
{
    int ds = 0, ads = 0;
        for(int i=0;i<sz;i++){
        ds+=a[i][i];
        ads+=a[i][sz-i-1];
    }    
    printf("%d",ds-ads);
}
int main()
{
    int a[5]={1,2.5,3,4,5};
    for(int i=0;i<5;i++)
    printf("% d ",a[i]);
}
