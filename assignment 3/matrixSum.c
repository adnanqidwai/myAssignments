#include <stdio.h>
 int main(){
    int n,m;
    scanf("%d %d", &m,&n);
    long long int a[m][n], b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld",&a[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld",&b[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]= a[i][j]+ b[i][j];
        }
        
    }
    printf ("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lld ",a[i][j]);
        }
        printf("\n");
    }
}