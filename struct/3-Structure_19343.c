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
    struct stud s1, s2;
    s1.numerical_code = 10;
    printf("%d", s1.numerical_code); 
    //Throws error as there is no numerical code in the structure
    return 0;
}
