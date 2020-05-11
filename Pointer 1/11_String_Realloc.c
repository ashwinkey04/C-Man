// Ashwin
// R.No: 19343
// Date: May 8

#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main () {
   char *str,*str2;

   str = (char *) malloc(10);
   str2 = (char *) malloc(10);
   strcpy(str, "Aberration");
   strcpy(str2, "Television");
   printf("String 1= %s\n", str);
   printf("String 2= %s\n", str2);
   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, str2);
   printf("String after concatenation= %s\n", str);
   free(str);
   return(0);
}