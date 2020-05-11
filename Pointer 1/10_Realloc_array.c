// Ashwin
// R.No: 19343
// Date: May 8

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int*)calloc(5, sizeof(int)),sum=0;
    for(int i = 0 ; i < 5 ; i++ ){
        ptr[i]=i*10;
        sum+=ptr[i];
    }
    printf("%d\n",sum);
    ptr= realloc(ptr, 8);//Reallocating with size 8
    for(int i = 5 ; i < 8 ; i++ ){
        ptr[i]=i*10;
        sum+=ptr[i];
    }
    printf("New sum: %d\n",sum);
}