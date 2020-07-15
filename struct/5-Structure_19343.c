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
    int numerical_code;
    float marks;
};
int main()
{
    printf("%d\n", sizeof(struct stud));
    printf("%d\n", sizeof(struct subject));
    return 0;
}