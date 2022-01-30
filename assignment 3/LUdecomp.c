#include <stdio.h>
#include <stdlib.h>

// void subtractrowfromrow(double *ptr2, int m, double *ptr1,double k)
// {
//     for (int i = 0; i < m; i++)
//     {
//         *(ptr2+i)=*(ptr2+i) - k*(*(ptr1+i)); 
//     }
    
// }
int determinant(int m,int* p)
{
    int det = 0;

    if (m == 1)
    {
        det = (*p);
    }
    else if (m == 2)
    {
        det = (((*(p)) * ((*(p + 3)))) - ((*(p + 1)) * ((*(p + 2)))));
    }
    else
    {
        int l, n, s=1;int upper, x;
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
            int inner_det = (determinant(m - 1, q));
            det= (det+ ( s * ((upper) * (inner_det))));
            
            s=(-1)*s;    
        }    
        free(q);
    }
    return det;
}    

int main(){
    int n; double k;
    scanf("%d", &n);
    int m[n][n]; double l[n][n],u[n][n];
    int *ptr = &m[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", ptr + n * i + j);
        }
    }
    int decompexists=1;
    for (int i = 1; i < n; i++)
    {
        if (determinant(i,ptr)==0)
        {
            decompexists=0;
            break;
        }
        
    }
    if (decompexists)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    l[i][j]=1;
                }
                else
                {
                    l[i][j]=0;
                }
                u[i][j]= 1.0 * m[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i>j)
                {
                    k=u[i][j] / u[j][j];
                    l[i][j]= k;
                    for (int i = 0; i < n; i++)
                    {
                        double* ptr1= &u[j][0];
                        double* ptr2= &u[i][0];
                        *(ptr2+i)=*(ptr2+i) - k*(*(ptr1+i));
                    }
                }    
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%.5lf ",l[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%.5lf ",u[i][j]);
            } 
            printf("\n");
        }
    }
    else
    {
        printf("No LU decomposition");
    }
    
    
}