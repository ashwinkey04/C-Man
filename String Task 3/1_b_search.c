// b. Search for a word in a text sentence

/*Author: Ashwin R
Date: 20 April 2020*/
#include <stdio.h>
#include <stdlib.h>
void search(char [],char []);
int main()
{
    int MAX = 100;
    char s1[MAX], s2[MAX];
    printf("Enter sentence: ");
    fgets(s1, MAX, stdin);
    printf("Enter word to search: ");
    fgets(s2, MAX, stdin);
    search(s1,s2);
}

void search(char s1[],char s2[]){
    int i, j, l1, l2, flag = 0;
    for (l2 = 0; s2[l2] != '\0'; ++l2)
        ;
    for (l1 = 0; s1[l1] != '\0'; ++l1)
        ;
    l1--;
    l2--; //fgets includes endline in the end of the string, so we are decrementing lengths by 1
    for (i = 0; i < l1; i++)
    {
        if (s1[i] == s2[0])
        {
            for (j = 0; j < l2; j++)
            {
                if (s1[i + j] == s2[j])
                    flag = 1;
                else
                    flag = 0;
            }
        }
        if (flag){
            printf("Word found at index: %d\n", i);
            exit(0);
        }
    }
    if (!flag)
        printf("Not found\n");
}