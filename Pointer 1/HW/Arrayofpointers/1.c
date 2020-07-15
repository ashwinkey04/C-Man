/*
    By
        Anand K S
        CSE-B
        AM.EN.U4CSE19106

        Program to get two matrices and to calculate their sum and product*/

        
#include <stdio.h>
#include <stdlib.h>


int **allocate (int h)
{
    int **p,i; 
    p = (int **) malloc(h* sizeof (int *) );
    for (i=0;i<h;i++)
    {
        p[i] = (int *) malloc(h * sizeof (int));
    }
    return(p); 
}


void read_data (int **p, int h)
{
    int i, j;
    for (i=0;i<h;i++)
    {
        for (j=0;j<h;j++)
        {
            scanf ("%d", &p[i][j]);
        }
    }
}


void sum_data (int **p,int **q,int **su, int h)
{
    int i, j;
    for (i=0;i<h;i++)
    {
        for (j=0;j<h;j++)
        {
            *(*(su+i)+j)=*(*(p+i)+j)+*(*(q+i)+j);
        }
    }
}

void product_data(int **p,int **q,int **pro, int h)
{
    int i,j,k;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < h; ++j)
        {
            *(*(pro+i)+j)=0;
            for (int k = 0; k < h; ++k)
            {
                *(*(pro+i)+j) += (*(*(p+i)+k) * (*(*(q+k)+j)));
            }
        }
    }
}



void print_data (int **p, int h)
{
    int i, j;
    for (i=0;i<h;i++)
    {
        for (j=0;j<h;j++)
        {
            printf ("%5d ",p[i][j]);
        }
    printf ("\n");
    }
}

int main() 
{
    int **p,**q,**su,**pro;
    int M;                                                     /* only m an are give as it is a square matrix.[both addition and multiplication shud occur*/
    printf("Give M: ");
    scanf("%d", &M);
    p = allocate(M);
    q = allocate(M);
    su = allocate(M);
    pro = allocate(M);
    printf("\nEnter the matrix 1\n");
    read_data(p, M);
    printf("\nEnter the matrix 2\n");
    read_data(q, M);
    sum_data(p,q,su,M);
    product_data(p,q,pro,M);
    printf("\nTHe sum of the two matrixes\n");
    print_data(su,M);
    printf("\nTHe product of the two matrixes\n");
    print_data(pro,M);
    free(p);
    free(q);
    free(su);
    free(pro);
    return 0;

}