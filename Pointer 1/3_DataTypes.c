// Ashwin 
// R.No: 19343
// Date: May 6

#include<stdio.h>

int main(){
    float a, *b;
    char c, *d;
    double e,*f;
    scanf("%f %c %lf",&a,&c,&e);
    b=&a;d=&c;f=&e;
    printf("%f %c %lf\n",*b,*d,*f);
}