/*
Ashwin R
AM.EN.U4CSE19343
*/
#include <stdio.h>
struct stud
{
    int roll;
};

int main()
{
    struct stud s1 = {20};
    struct stud *ptr;
    ptr = &s1;
    printf("%d", ptr->roll);
    return 0;
}