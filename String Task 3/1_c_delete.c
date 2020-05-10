// c. Delete a word from the given text sentence

/*Author: Ashwin R
Date: 20 April 2020*/
#include <stdio.h>
#include <stdlib.h>
void delete(char [],char []);
int main()
{
    int MAX = 100;
    char s1[MAX], s2[MAX];
    printf("Enter sentence: ");
    fgets(s1, MAX, stdin);
    printf("Enter word to delete: ");
    fgets(s2, MAX, stdin);
    delete(s1,s2);
}

void delete(char s1[],char s2[]){
    int i, j, l1, l2, flag = 0, k, cnt = 0;
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
        if (flag)
        {
            for (k = i; k <= i + j + 1; k++)
            {
                s1[k] = s1[i + j + cnt + 1];
                s1[i + j + cnt + 1] = '\0';
                // printf("\n*%c  %c*",s1[k],s1[i + j + cnt + 1]);
                cnt++;
            }
            printf("\nSentence after word deletion: %s\n", s1);
            exit(0);
        }
    }
    if (!flag)
        printf("Not found\n");
}