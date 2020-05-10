#include<stdio.h>

int main()
{
    int Amrita[20]={9,10,5},hello;
for(hello=sizeof(Amrita)/sizeof(int);hello>1;hello-=1)
printf("%d ",*(hello+Amrita));
}