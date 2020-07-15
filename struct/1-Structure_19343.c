/*
Ashwin R
AM.EN.U4CSE19343
*/
#include <stdio.h>

struct stud
{
    int roll;
    char *name;
    float marks;
};
int main()
{
    struct stud s1;
    s1.marks = 49.5;
    printf("%f", s1.marks);
    return 0;
}