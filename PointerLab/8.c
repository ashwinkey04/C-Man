// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>

int sort(int *arr, int n)
{
	int current_num = *(arr);
	int current_position = 0;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			current_num = *(arr + i);
			current_position = i;
			if (*(arr + j) < current_num)
			{
				*(arr + current_position) = *(arr + j);
				*(arr + j) = current_num;
				current_position = j;
			}
		}
	}
	return 0;
}

int BinarySearch(int *arr, int x, int n)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int m = l + (r - l) / 2;
		if (*(arr + m) == x)
			return m;
		if (*(arr + m) < x)
			l = m + 1;
		else
			r = m - l;
	}
	return -1;
}

int insert(int *a, int n, int *b, int m, int *res)
{
	sort(a, n);
	int k = 0, i, j;
	for (i = 0; i < m; i++)
	{
		int x = BinarySearch(a, *(b + 1), n);

		if (x != -1)
		{
			*(res + k) = *(a + x);
			k++;
		}
	}
	res = realloc(res, 4*k);
	printf("\n\nCommon elements:\n");
	for (i = 0; i < k; i++)
	{
		printf("%d", *(res + i));
		printf("\n");
	}
}
int main()
{
	int *arr, *brr;
	int n, m, i, j;
	printf("Sizes of the respective arrays: ");
	scanf("%d %d", &n, &m);
	arr = (int *)calloc(n, sizeof(int));
	brr = (int *)calloc(m, sizeof(int));
	printf("Array 1:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}
	printf("Array2: \n");
	for (i = 0; i < m; i++)
	{
		scanf("%d", brr + i);
	}
	int *return_value;
	return_value = (int *)malloc(n * sizeof(int));
	if (n < m)
	{
		insert(arr, n, brr, m, return_value);
	}
	else
	{
		insert(brr, m, arr, n, return_value);
	}
	free(return_value);
	free(arr);
	free(brr);
	return 0;
}
