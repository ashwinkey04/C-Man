// Author: Ashwin R
// Date: May 1st 2020
// Roll: U4CSE19343

#include <stdio.h>
int size;

void binaryTrans(int arr[size][size],
                 int limit1a,
                 int limit1b,
                 int limit0a,
                 int limit0b,
                 int K,
                 int b[size][size])
{

    int c = 0, temp=0;

    while (K--)
    {
        printf("\n");

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                c = 0;

                if (i > 0 && arr[i - 1][j] == 1)
                    c++;
                if (j > 0 && arr[i][j - 1] == 1)
                    c++;
                if (i > 0 && j > 0 && arr[i - 1][j - 1] == 1)
                    c++;
                if (i < size - 1 && arr[i + 1][j] == 1)
                    c++;
                if (j < size - 1 && arr[i][j + 1] == 1)
                    c++;
                if (i < size - 1 && j < size - 1 && arr[i + 1][j + 1] == 1)
                    c++;
                if (i < size - 1 && j > 0 && arr[i + 1][j - 1] == 1)
                    c++;
                if (i > 0 && j < size - 1 && arr[i - 1][j + 1] == 1)
                    c++;

                if (arr[i][j] == 1)
                {
                    if (c >= limit1a && c <= limit1b)
                        b[i][j] = 1;
                    else
                        b[i][j] = 0;
                }
                if (arr[i][j] == 0)
                {
                    if (c >= limit0a && c <= limit0b)
                        b[i][j] = 1;
                    else
                        b[i][j] = 0;
                }
            }
        }
        printf("Interation %d:\n",++temp);
        for (int k = 0; k < size; k++)
        {
            for (int m = 0; m < size; m++)
            {
                arr[k][m] = b[k][m];
                printf("%d ", arr[k][m]);
            }
            printf("\n");
        }
    }
}

// Driver code
int main()
{
    printf("Enter dimension of matrix: ");
    scanf("%d", &size);
    int i, j, arr[size][size], limit1a, limit1b, limit0a, limit0b, K, b[size][size];
    printf("Enter elements of matrix: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter limit1a, limit1b, limit0a, limit0b, K: \n");
    scanf("%d %d %d %d %d", &limit1a, &limit1b, &limit0a, &limit0b, &K);
    binaryTrans(arr, limit1a, limit1b, limit0a, limit0b, K, b);
    printf("\n");
    return 0;
}
