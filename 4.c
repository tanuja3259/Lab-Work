#include <stdio.h>

int main()
{
    int i, a[10], n;
    printf("Enter the value= ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i<n; i++)
    {
        int r = a[i];
        int rem, rev = 0;
        while (r != 0)
        {
            rem = r % 10;
            rev = rev * 10 + rem;
            r = r / 10;
        }
        if (rev == a[i])
        {
            printf("%d number is palindrome \n", a[i]);
        }
        else
        {
            printf("%d number is not a palindrome \n", a[i]);
        }
    }
    return 0;
}