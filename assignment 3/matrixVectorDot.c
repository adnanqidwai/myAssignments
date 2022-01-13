#include <stdio.h>


int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],b[n],c[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&b[i]);
    }
    printf("\n");
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
        printf("%d\n",c[i]);
    }
    
    
}