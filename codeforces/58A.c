#include<stdio.h>
#include<string.h>

int main()
{    
    char str[101],hello[6]="hello";
    gets(str);
    int x=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]==hello[x]){
            x++;
        }
    }
    if(x==6) printf("YES");
    else printf("NO");
    return 0;
}