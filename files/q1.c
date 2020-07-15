/*
Ashwin R
AM.EN.U4CSE19343
*/
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[30];
    float mark;
};

void scan(struct student *stud, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        system("clear");
        printf("STUDENT-%d\n", i + 1);
        printf("-----------\n");
        printf("enter the roll \n");
        scanf("%d", &(stud + i)->roll);
        printf("enter the name \n");
        scanf("%s", &(stud + i)->name);
        printf("Enter the marks\n");
        scanf("%f", &(stud + i)->mark);
    }

    return;
}

int main()
{
    FILE *filepoint; //Pointer for file
    filepoint = fopen("student.txt", "w");
    struct student stud[3];
    int i, num;
    printf("Enter number of students\n");
    scanf("%d", &num);
    scan(stud, num);
    fwrite(stud, sizeof(stud), 1, filepoint);
    fclose(filepoint);
    return 0;
}