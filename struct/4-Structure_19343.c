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
struct subject
{
    char *name;
    int numerical_code;
};
int main()
{
    struct subject s1, s2;
    s1.numerical_code = 10;
    printf("%d", s1.numerical_code);
    return 0;
}