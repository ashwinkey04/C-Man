// Ashwin R
// R.No: 19343
// Date: May 15

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bubbleSort(char **dg, int n, int a)
{

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (strcmp(dg[j], dg[j + 1]) > 0)
            {
                char *temp;
                temp = (char *)calloc(a, sizeof(char));
                strcpy(temp, dg[j + 1]);
                strcpy(dg[j + 1], dg[j]);
                strcpy(dg[j], temp);
            }
}
int print(char **dg, int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%s ", dg[i]);
    printf("\n");
}

int main()
{
    char **dg;
    int n;
    printf("Number of strings: ");
    scanf("%d", &n);
    int size;
    printf("Max size: ");
    scanf("%d", &size);
    dg = (char **)calloc(n, sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        dg[i] = (char *)calloc(size, sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%s", dg[i]);
    }

    bubbleSort(dg, n, size);
    print(dg, n);
    free(dg);
    return 0;
}
