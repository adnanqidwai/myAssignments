#include <stdio.h>
#include <math.h>

int main(){
    int n; double x;

    scanf("%d",&n);
    double a[n+1],b[n+1];
    for (int i = 0; i < n+1; i++)
    {
        a[i]=0;b[i]=0;
    }
    for (int i = 0; i < n+1; i++)
    {
        scanf("%lf",&a[i]);
    }
    scanf("%lf",&x);
    b[0]=a[0];
    for (int i = 0; i < n; i++)
    {
        b[i+1]=a[i+1]+(x*b[i]);
    }
    printf("%lf",b[n]);

}