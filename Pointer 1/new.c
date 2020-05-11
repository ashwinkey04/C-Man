// Ashwin
// R.No: 19343
// Date: May 8

#include <stdio.h>
#include <stdlib.h>

int *allocate(int h, int w)
{
    int **p, i, j;
    p = (int **)malloc(h * sizeof(int *));
    for (i = 0; i < h; i++)
    {
        p[i] = (int *)malloc(w * sizeof(int));
        return p;
    }
}

void read(int **p, int h, int w)
{
    int i, j;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
}
void print(int **p, int h, int w)
{
    int i, j;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("%5d", p[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // int **p;
    // int M, N;
    // printf("Enter m and f: ");
    // scanf("%d %d", &M, &N);
    // p = allocate(M, N);
    // printf("Enter elements: \n");
    // read(p, M, N);
    // printf("The array is : \n");
    // print(p, M, N);
    int row , col ;
    printf("Enter row and col: ");
    scanf("%d %d", &row, &col);
    int *arr = (int *)malloc(row * col * sizeof(int));
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d",(arr + i * col + j));
    printf("The matrix elements are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", *(arr + i * col + j));
        }
        printf("\n");
    }
    free(arr);
    return 0;
}