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
    struct stud s1, s2;
    s1.roll = 11;
    s1.name = "Aathira";
    s1.marks = 100;

    s2.roll = 12;
    s2.name = "Shine";
    s2.marks = 90;

    printf("%s \t %s", s1.name, s2.name);
    return 0;
}