/*
Ashwin R
AM.EN.U4CSE19343
*/
#include <stdio.h>
struct stud
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct stud s1;
    printf("%d", s1.roll);
    return 0;
}