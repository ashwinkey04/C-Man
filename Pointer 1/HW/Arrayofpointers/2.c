/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to get strings and sort them using pointers*/

        
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char **s,int n)
{
    int i,j;
    char *temp;
    temp = (char*)calloc(50,sizeof(char));
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    free(temp);
}

int main()
{  
	char word[50],**s; 
	int n, i; 
    s = (char**)malloc(n*sizeof(char*));
	printf("Enter the number of strings :"); 
	scanf("%d", &n); 
	printf("\nEnter the strings to be sorted:\n");
	for (i = 0; i < n; i++) 
	{ 
        scanf("%s",word);
        s[i]=(char*)malloc(50*sizeof(char));
        strcpy(s[i],word);
	} 
	sort(s,n);
    printf("\nThe strings after sorting\n");
	for(i=0;i<n;i++)
    {
		printf("%s\n",s[i]);
    }
	free(s); 
	return 0; 
}