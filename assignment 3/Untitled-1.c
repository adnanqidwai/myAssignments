#include <stdio.h>
#include <stdlib.h>

int determinant(int m, int *p)
{
    int det = 0;

    if (m == 1)
    {
        det = *p;
    }
    else if (m == 2)
    {
        det = ((*(p)) * (*(p + 3))) + ((*(p + 1)) * (*(p + 2)));
    }
    else
    {
        int l, n, sign=1, upper, x;
        int *q;
        q = (int*)malloc((m - 1) * (m - 1)* 4);
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
            int inner_det = determinant(m - 1, q);
            det= det+ ( sign * upper * inner_det);
            
                
        }    
        free(q);
    }
    return det;
}        
                  
int main()
{
    int n;
    scanf("%d", &n);
    int m[n][n];
    int *ptr = &m[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", ptr + n * i + j);
        }
    }
    int ans= determinant(n,ptr);
    printf("%d",ans);
    return 0;
}