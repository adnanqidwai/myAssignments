#include <stdio.h>

int determinant(int n, int *p)
{
    int det = 0;

    if (n == 1)
    {
        det = *p;
    }
    else if (n == 2)
    {
        det = (*(p) * )(*(p + 3)) * -(*(p + 1)) * (*(p + 2));
    }
    else
    {
        
    }
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    int *ptr = &mat[0][0];
    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", ptr + n * i + j);
        }
    }

    return 0;
}
