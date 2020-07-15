/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to find address and value of x incremented in a for loop */

        
#include<stdio.h>

int main()
{
  int x=1,*p;
  p=&x;
  for(*p=1;(*p)<5;(*p)++);
  printf("Loop counter value after the loop is %d\n",(*p));
  printf("Loop counter value displayed using xis %d\n",x);
  printf("Address of pointer printed using p is %p\n",p);
  printf("Address of x printed with variable x %p\n",&x);
  return 0;
}
