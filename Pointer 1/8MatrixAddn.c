// Ashwin
// R.No: 19343
// Date: May 6

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    int x[n][n], y[n][n], sum[n][n];
    printf("Enter elements of matrix 1: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Enter elements of matrix 2: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(sum+i)+j)=*(*(x+i)+j)+*(*(y+i)+j);
        }
    }
    printf("Sum of matrices:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(sum+i)+j));
        }
        printf("\n");
    }

}