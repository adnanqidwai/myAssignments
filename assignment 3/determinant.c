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
        det = ((*(p)) * (*(p + 3))) - ((*(p + 1)) * (*(p + 2)));
    }
    else
    {
        int l, n, sign=1, basic, element;
        int *q;
        q = (int*)malloc((m - 1) * (m - 1)* 4);
        for (int i = 0; i < m; i++)
        {
            l = 0;
            n = 0;
            basic = * (p + i);
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < m; k++)
                {
                    element = *(p + l);
                    if ((j == 0) || (i== k));
                    else
                    {
                        *(q + n) = element;
                        n = n + 1;
                    }    
                    l = l + 1;
                }
            }    
            int inner_determinant = determinant(m - 1, q);
            det= det+ ( sign * basic * inner_determinant);
            
            sign=(-1)*sign;    
        }    
        free(q);
    }
    return det;
}        
                  
int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    int *ptr = &mat[0][0];
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
