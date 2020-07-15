// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>

void search(int *, int, int);
int main()
{
    int n, *ptr, s;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[100];
    ptr = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);
    printf("\nEnter element to search: ");
    scanf("%d", &s);
    search(ptr, n, s);
    return 0;
}
void search(int *ptr, int n, int s)
{
    int f = 0;
    for (int i = 0; i < n; i++){
        if (s == *(ptr + i))
        {
            printf("Found at index %d\n", i);
            f = 1;
        }
    }
    if (f == 0)
        printf("Not found\n");
}