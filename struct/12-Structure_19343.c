/*
Ashwin R
AM.EN.U4CSE19343
*/
#include <stdio.h>
struct stud
{
    int rno;
    char name[50];
    float math, prog, sanskrit;
};

void display(struct stud *s)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%s ", s[i].name);
    }
}
float avg(struct stud *s)
{
    float x = 0;
    for (int i = 0; i < 5; i++)
    {
        x = x + (s[i].math);
    }
    x = x / 5;
    return x;
}
void search(struct stud *s)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (s[i].rno == n)
        {
            printf("%s:%d\n", s[i].name, n);
            break;
        }
    }
}
int main()
{
    struct stud s[5];
    int i, option;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of the student %d: ",i+1);
        scanf("%s", s[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].rno);
        printf("Enter marks obtained in maths: ");
        scanf("%f", &s[i].math);
        printf("Enter marks obtained in sanskrit: ");
        scanf("%f", &s[i].sanskrit);
        printf("Enter marks obtained in programming: ");
        scanf("%f", &s[i].prog);
    }

    printf("Enter 1 to display name of all students:\n");
    printf("Enter 2 to display avg of all students in Maths:\n");
    printf("Enter 3 to search for a student based on  the roll no:\n");

    while (1)
    {
        scanf("%d", &option);
        if (option == 1)
        {
            display(s);
        }
        else if (option == 2)
        {

            printf("Average marks of all students in Maths is %f\n", avg(s));
        }
        else if (option == 3)
        {
            search(s);
        }

        else
            break;
    }
    return 0;
}