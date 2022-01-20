#include <stdio.h>


int main()
{
    int n;
    double arr[101][101], c, x[101], sum ;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n); j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%lf",&arr[i][n]);
    }
    

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i > j)
            {
                c = arr[i][j] / arr[j][j];
                for (int k = 0; k <= n; k++)
                {
                    arr[i][k] = arr[i][k] - c * arr[j][k];
                }
            }
        }
    }
    x[n-1] = arr[n-1][n ] / arr[n-1][n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        sum = 0.0;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[i][j] * x[j];
        }
        x[i] = (arr[i][n] - sum) / arr[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.8lf\n", x[i]);
    }
}        