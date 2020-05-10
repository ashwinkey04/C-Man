/*
Strings Task 2
Author: Ashwin R
Roll: AM.EN.U4CSE19343
Date: 19 April 2020
*/

#include<stdio.h>
#include<string.h>

int main(){
    char roll[16],*l;
    scanf("%s",roll);
    l=&roll[15];
    printf("%d\n",(*l-48)%5);
    return 0;
}