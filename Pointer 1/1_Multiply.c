// Ashwin 
// R.No: 19343
// Date: May 6

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    int *c=&a,*d=&b;
    printf("%d\n",(*c)*(*d));
}