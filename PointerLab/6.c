// Ashwin R
// R.No: 19343
// Date: May 15

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double distance(double *mat,int x,int y)
{
	x--;
	y--;
	double sum=0.0;
	double a[3],b[3];
	for(int i=0;i<3;i++)
	{
		a[i]=*(mat+x*3+i);
		b[i]=*(mat+y*3+i);
		sum=sum+((a[i]-b[i])*(a[i]-b[i]));
	}
	printf("The distance between (%0.1lf,%0.1lf,%0.1lf) and (%0.1lf,%0.1lf,%0.1lf): %0.1lf units\n",a[0],a[1],a[2],b[0],b[1],b[2],sqrt(sum));	
}
int main()
{
	double *mat;
	int n=5,r=3;
	mat=(double*)calloc(n*r,sizeof(double));
	double k=10.0;
	for(int i=0;i<n;i++)
	   for(int j=0;j<r;j++)
	    {
			*(mat+i*r+j)=k/10.0;
			k=k+10.0;
		}
	int x,y;
	printf("Enter points from 1 upto 5:");
	scanf("%d %d",&x,&y);
	distance(mat,x,y);
	free(mat);
	return 0;	
}
