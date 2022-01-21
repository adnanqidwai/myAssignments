#include <stdio.h>


int main(){
    int m,n,p;
    scanf("%d %d %d", &m,&n,&p);
    long long int a[m][n], b[n][p], c[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld",&a[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%lld",&b[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j]=0;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c[i][j]= c[i][j]+ a[i][k]*b[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%lld ",c[i][j]);
        }
        printf("\n");
        
    }
}