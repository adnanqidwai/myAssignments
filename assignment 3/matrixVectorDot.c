#include <stdio.h>


int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    long long int a[m][n],b[n],c[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld",&a[i][j]);
        }
        
    }
   
    for (int i = 0; i < n; i++) 
    {
        scanf("%lld",&b[i]);
    }
    for (int i = 0; i < m; i++)
    {   
        c[i]=0;
        for (int j = 0; j < n; j++)
        {
            c[i]= c[i] + (a[i][j])*b[j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        printf("%lld\n",c[i]);
    }
    
    
}