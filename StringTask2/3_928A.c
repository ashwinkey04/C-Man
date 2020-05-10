// /*
// Strings Task 2
// Author: Ashwin R
// Roll: AM.EN.U4CSE19343
// Date: 19 April 2020
// */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[51],t[51];
    scanf("%s",s);
    int n,i;
    for(i = 0;i<strlen(s);i++)
    {
        if(s[i]=='i'||s[i]=='I'||s[i]=='l'||s[i]=='L') s[i] = '1';
        else if(s[i]=='o'||s[i]=='O') s[i] = '0';
        else if('A'<=s[i]&&s[i]<='Z') s[i]+=32;
    }
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",t);
        for(i = 0;i<strlen(s);i++)
        {
            if(t[i]=='i'||t[i]=='I'||t[i]=='l'||t[i]=='L') t[i] = '1';
            else if(t[i]=='o'||t[i]=='O') t[i] = '0';
            else if('A'<=t[i]&&t[i]<='Z') t[i]+=32;
        }
        //printf("%s",t);
        if(!strcmp(s,t))
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}