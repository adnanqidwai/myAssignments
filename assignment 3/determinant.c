#include <stdio.h>
#include <stdlib.h>

long long int mod(long long int x)
{
    long long int M= 1e9+7;
    return ((x)%M+M)%M;
}

long long int determinant(int m, long long int* p)
{
    long long int det = 0;

    if (m == 1)
    {
        det = mod(*p);
    }
    else if (m == 2)
    {
        det = mod(mod(mod(*(p)) * (mod(*(p + 3)))) - mod(mod(*(p + 1)) * (mod(*(p + 2)))));
    }
    else
    {
        int l, n, s=1; long long int upper, x;
        long long int *q;
        q = (long long int*)malloc((m - 1) * (m - 1)* 8);
        for (int i = 0; i < m; i++)
        {
            l = 0;
            n = 0;
            upper = * (p + i);
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    x = *(p + l);
                    if ((j == 0) || (i== k));
                    else
                    {
                        *(q + n) = x;
                        n = n + 1;
                    }    
                    l = l + 1;
                }
            }    
            long long int inner_det = mod(determinant(m - 1, q));
            det= mod(det+ ( s * mod(mod(upper) * mod(inner_det))));
            
            s=(-1)*s;    
        }    
        free(q);
    }
    return det;
}        
                  
int main()
{
    int n;
    scanf("%d", &n);
    long long int m[n][n];
    long long int *ptr = &m[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", ptr + n * i + j);
        }
    }
    long long int ans= determinant(n,ptr);
    printf("%lld",ans);
    return 0;
}