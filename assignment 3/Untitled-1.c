
/*BRUTEFORCE FOR N<=3*/
#include <stdio.h>

int main()
{
    int n=0, det = 0,c1=0,c2=0,c3=0;
    scanf("%d", &n);
    int mat[n][n];
    int* p = &mat[0][0];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", p + n * i + j);
        }
    }
    if (n == 1)
    {
        det = *p;
    }
    else if (n == 2)
    {
        det = (*(p)) * (*(p + 3)) - (*(p + 1)) * (*(p + 2));
    }
    else
    {
        int c1= (*(p + 4)) * (*(p + 8)) - (*(p + 5)) * (*(p + 7));
        int c2= (*(p + 1)) * (*(p + 8)) - (*(p + 2)) * (*(p + 7));
        int c3= (*(p + 1)) * (*(p + 5)) - (*(p + 2)) * (*(p + 4));
        det = ((*p)*(c1)) - (*(p + 3)*(c2)) + (*(p + 6)*(c3));
    }
    printf("%d",det);
}