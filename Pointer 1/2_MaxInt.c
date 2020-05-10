// Ashwin 
// R.No: 19343
// Date: May 6

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    int *c=&a,*d=&b;
    int max=*c>*d?*c:*d;
    printf("%d\n",max);
}