#include <stdio.h>
#include <stdlib.h>

void print_poly(int a[],int m)
{
    int n=m-1, new_start_index, are_all_zero;
    for (int i = 0; i < n + 1; i++)
    {
        if (n==0)
        {
            printf("%d",a[n]);
        }
        
        
        else if (a[0] == 0)
        {
            are_all_zero = 1;
            for (int i = 0; i < n + 1; i++)
            {
                if (a[i] != 0)
                {
                    are_all_zero = 0;
                    new_start_index = i;
                    break;
                }
            }
            if (are_all_zero)
            {
                printf("0");
                exit(0);
            }
            else
            {
                int k = m- new_start_index;
                int b[k];
                for (int i = 0; i < k; i++)
                {
                    b[i]=a[i+new_start_index];
                }
                print_poly(b, k);
                exit(0);
            }
            
        }
        // oldline
        else if (a[i] != 1 && a[i] != -1 && i != n - 1)
        {
            if (a[0] != 0 && i == 0)
            {
                printf("%dx^%d", a[0], n);
            }
            else if (a[i] > 0 && i == n)
            {
                printf(" + %d", a[n]);
            }
            else if (a[i] < 0 && i == n)
            {
                printf(" - %d", (-1) * a[n]);
            }
            else if (a[i] > 0)
            {
                printf(" + %dx^%d", a[i], n - i);
            }
            else if (a[i] < 0)
            {
                printf(" - %dx^%d", (-1) * a[i], n - i);
            }
        }
        else if (a[i] == 1 && i != n - 1)
        {
            if (i == 0)
            {
                printf("x^%d", n);
            }
            else if (i == n)
            {
                printf(" + 1");
            }
            else
            {
                printf(" + x^%d", n - i);
            }
        }
        else if (a[i] == -1 && i != n - 1)
        {
            if (i == n)
            {
                printf(" - 1");
            }
            else if (i == 0)
            {
                printf("-x^%d", n - i);
            }
            else
            {
                printf(" - x^%d", n - i);
            }
        }
        else if (i == n - 1 && i!=0)
        {
            if (a[i] == 1)
            {
                printf(" + x");
            }
            else if (a[i] == -1)
            {
                printf(" - x");
            }
            else if (a[i] > 0)
            {
                printf(" + %dx", a[i]);
            }
            else if (a[i] < 0)
            {
                printf(" - %dx", (-1) * a[i]);
            }
        }
        else if (i == n - 1 && i==0)
        {
            if (a[i] == 1)
            {
                printf("x");
            }
            else if (a[i] == -1)
            {
                printf("-x");
            }
            else if (a[i] > 0)
            {
                printf("%dx", a[i]);
            }
            else if (a[i] < 0)
            {
                printf("-%dx", (-1) * a[i]);
            }
        }
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    if (m==0)
    {
        printf("0"); exit(0);
    }
    
    int n = m - 1;
    int a[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        a[i] = 0;
    }
    for (int i = n; i >= 0; i--)
    {
        scanf("%d", &a[i]);
    }
    print_poly(a,m);
    
}