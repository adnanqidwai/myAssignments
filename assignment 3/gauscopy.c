#include <stdio.h>
int main()
{
    int n;
    double A[101][101], c, x[101], sum = 0.0;
    scanf("%d", &n); 
    for (int i = 1;i <=n; i++)
    {
        for (int j = 1; j <= n+1 ; j++)
        {
            scanf("%lf",&A[i][j]);
        }
        
    }
    
    
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > j)
            {
                c = A[i][j] / A[j][j];
                for (int k = 1; k <= n + 1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }
    x[n] = A[n][n + 1] / A[n][n];
    for (int i = n - 1; i >= 1; i--)
    {
        sum = 0.0;
        for (int j = i + 1; j <= n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        x[i] = (A[i][n + 1] - sum) / A[i][i];
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%lf ", x[i]);
    }
}        