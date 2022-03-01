#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,timeelapse=0;
    long long int k;
    scanf("%d %lld",&n,&k);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i-1]>8)
        {
            a[i]=a[i] +a[i-1]-8;
            a[i-1]=8;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (k==0)
        {
            break;
        }
        if (i==n-1 &&(k>a[i] || k>8))
        {
            printf("-1");
            exit(0);
        }
        
        if (a[i]<=8 && k>8)
        {
            k=k-a[i];
            timeelapse++;
        }
        else if (a[i]>8 &&k >8)
        {
            k=k-8;
            timeelapse++;
        }
        else if (k<=8 &&a[i]>=k)
        {
            k=0;
            timeelapse++;
        }
        else if (k<=8 && a[i]<k)
        {
            k=k-a[i];
            timeelapse++;
        } 
    }
    printf("%d",timeelapse);
}