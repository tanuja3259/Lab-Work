#include<stdio.h>
long double fact(int);
int main()
{
    long double n, res;
    printf("Enter the vale of n= ");
    scanf("%lf", &n);
    res= fact(n);
    printf("%lf", res);
    return 0;
}
long double fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }
}