#include<stdio.h>

int main()
{
    int i, j, m,n;
    float a[10][10], sum=0.00, avg;
    printf("Enter number of rows and columns= ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements= ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            sum=sum+a[i][j];
        }
    }
    avg= sum/(m*n);
    printf("sum and avg is %f %f", sum, avg);
    return 0;
}