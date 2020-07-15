#ifndef POINTER_H

// Declare macro as a flag that specifies arith.h is included
#define POINTER_H


#include<math.h>
#include<stdlib.h>
#include<stdio.h>
double scalar_product(int n, double *arr,double *brr)
{
	double sum=0.0; 
	for(int i=0;i<n;i++)
	 {
		  double a=*(arr+i); 
		  double b=*(brr+i); 
		  sum=sum+(a*b);
     }
    printf("The scalar product is : %0.1f\n", sum);
}
#endif