// Ashwin 
// R.No: 19343
// Date: May 6

#include<stdio.h>

int main(){
    int y=1,*x;
    x=&y; 
    for(*x=1;*x<5;*x=*x+1)
        printf("loop counter value is %d  \n",*x); 
    printf("a) Value of loop counter after loop is %d  \n",*x); 
    printf("b) Value of pointer is %p \n",x); 
}