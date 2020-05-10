// Ashwin
// R.No: 19343
// Date: May 6

#include <stdio.h>

void copy(int *, int *, int);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n], duplicate_array[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    copy(a, duplicate_array, n);
    //Calling copy function

    //Printing copied array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", duplicate_array[i]);
    }
    printf("\n");
}
void copy(int *from, int *to, int size)
{
    for (int i = 0; i < size; i++)
    {
        *to=*from;
        to+=1;
        from+=1;
    }
}
