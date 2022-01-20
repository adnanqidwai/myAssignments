#include <stdio.h>
#include <stdlib.h>



long long int mod(long long int x)
{
    long long int M= 1e9+7;
    return ((x)%M+M)%M;
}

long long int permanent(int m, long long int* p)
{
    long long int det = 0;

    if (m == 1)
    {
        det = mod(*p);
    }
    else if (m == 2)
    {
        det = mod(mod(mod(*(p)) * (mod(*(p + 3)))) + mod(mod(*(p + 1)) * (mod(*(p + 2)))));
    }
    else
    {
        int l, n; long long int upper, x;
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
            long long int inner_det = mod(permanent(m - 1, q));
            det= mod(det+ (mod(mod(upper) * mod(inner_det))));   
        }    
        free(q);
    }
    return det;
}        
                  
int main()
{
    int q, n,base=10;char s;
    scanf("%d",&q);
    scanf("%d", &n);
    if (q==1)
    {
        scanf("%d",&base);
    }    
    long long int m[n][n];
    long long int *ptr = &m[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", ptr + n * i + j);
        }
    }
    long long int ans= permanent(n,ptr);
    char strn[1000];
    
    int index = 0;

    while (ans > 0)
    {
        int x =ans % base;
        if (x >= 0 && x <10)
        {
            s=(char)(x + '0');
        }
        else
        {
            s=(char)(x - 10 + 'a');
        }    
        strn[index++] = s;
        ans /= base;
    }
    strn[index] = '\0';

    for(int i =0; i<index;i++){
        printf("%c",strn[index-1-i]);
    }
}