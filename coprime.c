#include <stdio.h>
int main()
{
    long long int n1, n2;
    int i, x;
    scanf("%lld %lld", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            x = i;
    }

    if (x==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}