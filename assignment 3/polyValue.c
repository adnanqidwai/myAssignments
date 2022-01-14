#include <stdio.h>
#include <math.h>


int main(){
    int n; double x,sum=0;

    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n+1; i++)
    {
        a[i]=0;
    }
    for (int i = n; i >-1; i--)
    {
        scanf("%d",&a[i]);
    }
    scanf("%lf",&x);
    for (int i = 0; i < n; i++)
    {
        sum= sum+ a[i]*pow(x,(n-i));
    }
    sum=sum+ a[n];
    printf("%lf",sum);
    
}