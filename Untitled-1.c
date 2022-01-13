#include <stdio.h>

int main()
{
    long int sum=0;
    int n; scanf("%d",&n);
    int a[n]; int b[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j =0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }
    for(int k =0; k<n; k++)
#include <stdio.h>

int main()
{
    long int sum=0;
    int n; scanf("%d",&n);
    int a[n]; int b[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j =0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }
    for(int k =0; k<n; k++)
    {
        sum += 1l* a[k] *b[k];
    }
    printf("%ld",sum);
    
}