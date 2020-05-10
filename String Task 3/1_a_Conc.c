
// a. Concatenate two strings

/*Author: Ashwin R
Date: 20 April 2020*/
#include <stdio.h>
void conc(char[], char[], char[]);
int main()
{
    int MAX = 100;
    char s1[MAX], s2[MAX], res[MAX];
    fgets(s1, MAX, stdin);
    fgets(s2, MAX, stdin);
    conc(s1, s2, res);
}
void conc(char s1[], char s2[], char res[])
{
    int i, j, l1, l2;
    for (l1 = 0; s1[l1] != '\0'; ++l1)
        ;
    for (l2 = 0; s2[l2] != '\0'; ++l2)
        ;
    l1--;
    l2--; //fgets includes endline in the end of the string, so we are decrementing lengths by 1
    for (i = 0; i < l1; i++)
        res[i] = s1[i];
    for (j = 0; j < l2; j++)
        res[i + j] = s2[j];
    printf("\nConcatenated string: %s\n\n", res);
}