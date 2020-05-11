// Ashwin
// R.No: 19343
// Date: May 8

#include <stdio.h>
#include <stdlib.h>

void print(int *arr, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", *(arr + i * col + j));
        printf("\n");
    }
}
void read(int *arr, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", (arr + i * col + j));
}
void sum(int *arr, int *arr2, int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d ", *(arr + i * col + j) + (*(arr2 + i * col + j)));
        printf("\n");
    }
}
void product(int *arr, int *arr2, int row, int col)
{
    int *prod = (int *)malloc(row * col * sizeof(int));
    int i, j, k;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            *(prod + i * col + j) = 0; //Initializing all elements to zero
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            for (k = 0; k < col; k++)
            {
                *(prod + i * col + j)+= (*(arr + i * col + k) * *(arr2 + i * col + k));
            }
        }
    }
    print(prod,row,col);
}
int main()
{
    int row, col;
    printf("Enter row and col: ");
    scanf("%d %d", &row, &col);
    int *arr1 = (int *)malloc(row * col * sizeof(int));
    int *arr2 = (int *)malloc(row * col * sizeof(int));
    printf("Enter the elements of matrix 1:\n");
    read(arr1, row, col);
    printf("Enter the elements of matrix 2:\n");
    read(arr2, row, col);
    printf("The elements of matrix 1:\n");
    print(arr1, row, col);
    printf("The elements of matrix 2:\n");
    print(arr2, row, col);
    printf("The sum of the matrices are:\n");
    sum(arr1, arr2, row, col);
    printf("The product of the matrices are:\n");
    product(arr1, arr2, row, col);
    free(arr1);
    free(arr2);
    return 0;
}