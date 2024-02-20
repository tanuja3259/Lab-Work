#include <stdio.h>

int main()
{
    int a[10], b[10], i, j = 0, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    printf("Reversed array: ");
    for (j = 0; j < n; j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}
