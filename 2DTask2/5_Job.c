// Author: Ashwin R
// Date: May 1st 2020
// Roll: U4CSE19343

#include <stdio.h>

int get_ind(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            return i;
    }
}

int isPresent(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            return 1;
    }
    return 0;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter dimension of matrix: ");
    scanf("%d", &size);
    int mat[size][size], i, j;
    printf("Enter elements of matrix: \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int array[size], unsorted_array[size], ind[size], ind_array_size = 0, flag, ans = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            array[j] = mat[i][j];
            unsorted_array[j] = mat[i][j];
        }
        selectionSort(array, size);
        flag = 1;
        for (j = 0; j < size; j++)
        {
            if (isPresent(ind, ind_array_size, get_ind(unsorted_array, size, array[j])))
                continue;
            else
            {
                ans += array[j];
                ind[ind_array_size] = get_ind(unsorted_array, size, array[j]);
                ind_array_size++;
                flag = 0;
                break;
            }
        }
    }
    printf("\n%d\n", ans);
}
