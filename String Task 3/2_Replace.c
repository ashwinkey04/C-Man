// 2. Write a use defined function for replacing a pattern (word) with another work in a given text
// string. (Do not use any inbuilt function of string.h)
// Sample input
// Input Text
// He is a bad boy
// Pattern to be replaced
// bad
// Text to replace the above pattern
// Output He is a good boy

/*Author: Ashwin R
Date: 20 April 2020*/
#include <stdio.h>
#include <string.h>
void rep(char[], char[], char[]);
int main()
{
char s[100]="Amrita",t[100];
strrev(strncpy(t,strcat(strcat(s," "),"Campus"),6));
printf("%s", t);
}