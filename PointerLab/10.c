// Ashwin R
// R.No: 19343
// Date: May 15

#include<stdio.h>
#include<stdlib.h>

 int frequency(char *str, int n)
 {

    char *alpha;
    alpha=(char*)calloc(52,sizeof(char));
    alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<26;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(*(alpha+i)==*(str+j) || *(alpha+i+26)==*(str+j))
            {
                sum=sum+1;
            }
        }
        if(sum>0)
        printf("Character %c is repeated= %d times \n",*(alpha+i+26),sum);
    }
 }
int main()
{
    char *str;
    str=(char*)calloc(1000,sizeof(char));
    gets(str,1000,stdin);
    frequency(str,1000);
    return 0;
}
