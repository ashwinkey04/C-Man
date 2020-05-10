/*
Strings Task 2
Author: Ashwin R
Roll: AM.EN.U4CSE19343
Date: 19 April 2020
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for (i = 0; i < n; i += 2)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            if (str[i] == 'a')
                str[i] = 'b';
            else
                str[i] = 'a';
        }
    }
    printf("%d\n%s\n",count,str);
    return 0;
}