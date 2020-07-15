// Ashwin R
// R.No: 19343
// Date: May 15

#include<stdio.h>
#include<stdlib.h>

double scalar_product (int len , double * arr1 , double * arr2 )
{
    int i;
    double sum=0.0;
    for(i=0;i<len;i++)
    {
        sum=sum+arr1[i]*arr2[i];
    }
    return sum;
}

int main()
{
    int i,len;
    printf("Enter n:  ");
    scanf("%d",&len);
    double *arr1,*arr2;
    arr1=(double*)calloc(len,sizeof(double));
    arr2=(double*)calloc(len,sizeof(double));
    printf("Enter the first array: ");
    for(i=0;i<len;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    printf("Enter the next array: ");
    for(i=0;i<len;i++)
    {
        scanf("%lf",&arr2[i]);
    }
    printf("The scalar product is: %.2lf\n",scalar_product(len,arr1,arr2));
    free(arr1);
    free(arr2);
    return 0;
}
