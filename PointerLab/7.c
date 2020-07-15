// Ashwin R
// R.No: 19343
// Date: May 15

#include "pointer.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
     double *arr,*arr1;
     arr=(double*)calloc(3,sizeof(double));
     arr1=(double*)calloc(3,sizeof(double));
     printf("Enter 1st co-ords: \n");
     for(int i=0;i<3;i++)
     scanf("%lf",arr+i);
     printf("Enter 2nd co-ords: \n");
     for(int i=0;i<3;i++)
     scanf("%lf",arr1+1);
      scalar_product(3,arr,arr1);
      free(arr);
      free(arr1);
      return 0;
    
}