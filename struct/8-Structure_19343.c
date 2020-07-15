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
    struct stud s1;
    struct stud *ptr;
    ptr = &s1;
    ptr->roll = 10;
    printf("%d", ptr->roll);
    return 0;
}