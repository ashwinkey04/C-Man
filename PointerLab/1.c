// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>

void reverse_ptr(int *, int);
int main()
{
    int n, *ptr;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[100];
    ptr = arr;
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);
    reverse_ptr(ptr, n);
    printf("Reversed:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");
    return 0;
}
void reverse_ptr(int *ptr, int n)
{
    int x = n % 2 ? n / 2 : (n - 1) / 2, i;
    for (i = 0; i < x; i++)
    {
        int tmp = *(ptr + i);
        *(ptr + i) = *(ptr + n - i - 1);
        *(ptr + n - i - 1) = tmp;
    }
}