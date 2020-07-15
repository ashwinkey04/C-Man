
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
    printf("The scalar product is : %f\n", sum);
}
int main()
{
    int length; 
    printf("Length: ");
    scanf("%d",&length); 
    double arr[length], brr[length]; 
    printf("Enter the first array: ");
	for (int i=0;i<length;i++) 
	scanf("%lf", arr+1);
    printf("Enter the next array: ");
	for(int i=0;i<length;i++)
	scanf("%lf",brr+i);
	scalar_product(length,arr,brr);
	return 0;
}	
