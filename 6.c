#include<stdio.h>

int main()
{
    int n, i, j, a[5][5], r, c;
    printf("Enter number of rows and columns= ");
    scanf("%d %d", &r, &c);
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}