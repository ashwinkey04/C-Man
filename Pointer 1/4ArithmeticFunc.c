// Ashwin 
// R.No: 19343
// Date: May 6

#include<stdio.h>
void arithmetic(int x,int y,int *sum,int *diff, int *prod){
    *sum=x+y;
    *diff=x-y<0?-(x-y):x-y;
    *prod=x*y;

}
int main(){
    int a,b,c,sum,diff,prod;
    scanf("%d %d",&a,&b);
    arithmetic(a,b,&sum,&diff,&prod);
    printf("\nSum: %d | Difference: %d | Product: %d\n",sum,diff,prod);
}