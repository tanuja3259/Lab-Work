#include <stdio.h>

int main()
{
    int a[10], n, c, i, j, p = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        for (j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0 && a[i] > 1)
        { 
            p++;
        }
    }
    printf("%d numbers are prime in the array.\n", p);
    return 0;
}
