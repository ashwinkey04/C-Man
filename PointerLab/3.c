// Ashwin R
// R.No: 19343
// Date: May 15

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Random(double *arr,int n)
{
    double start=clock();
    for(int i=0;i<n;i++)
    {
        *(arr+i)=(rand()%100+1)/100.0;
    }
    double end=clock();
    printf("Time taken to execute: %0.2fs\n",(end-start)/10.0);
    printf("Random Array: ");
    for(int i=0;i<n;i++)
    printf("%0.2f ",*(arr+i));
    printf("\n");
}
void matrix(double *ptr,int n,int r,double *mat)
{
    for(int i=0;i<n+r;i++)
    {
        if(ptr+i==NULL)
        *(ptr+i)=0.0;
    }
    while(n%r!=0)
    {
        n++;
    }
    ptr=realloc(ptr,n*sizeof(double));
    mat=realloc(mat,n*sizeof(double));
    int k=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n/r;j++)
        {
           *(mat+i*r+j)=*(ptr+k);
           k++;
             
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n/r;j++)
        {
            printf("%0.2f \n",*(mat+i*r+j));
        }
        printf("\n");
    }
}
void max(double *ptr,int n)
{
    double current=*ptr;
    for(int i=0;i<n;i++)
    {
        if(current<*(ptr+i))
        current=*(ptr+i);
    }
    printf("Maximum: %0.2f \n",current);
}
    
int main()
{
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d",&n,&r);
    double *ptr;
    ptr=(double*)calloc(n,sizeof(double));
    double *mat;
    mat=(double*)calloc(n+r,sizeof(double));
    ptr=realloc(ptr,(n+r)*sizeof(double));
    Random(ptr,n);
    matrix(ptr,n,r,mat);
    max(ptr,n);
    free(mat);
    free (ptr);
    return 0;
}

