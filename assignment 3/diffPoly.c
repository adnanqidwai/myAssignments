#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int a[n+1], b[n];
    for (int i = 0; i < n+1; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < n+1; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i]*(n-i);
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i]!=1 && b[i]!=-1 && i!=n-2)
        {    
            if (b[0]!=0  && i==0)
            {
                printf("%dx^%d",b[0],n-1);
            }
            else if (b[i]!=0 &&i ==n-1)
            {
                printf("%d",b[n-1]);
            }
            else if (b[i]>0)
            {
                printf("+%dx^%d",b[i],n-i-1);
            }
            else if (b[i]<0)
            {
                printf("%dx^%d",b[i],n-i-1);
            }
        }
        else if (b[i]==1 && i!=n-2)
        {
            if (i==0)
            {
                printf("x^%d",n-1);
            }
            else if (i==n-1)
            {
                printf("+1");
            }
            else
            {    
                printf("+x^%d",n-i-1);
            }        
        }
        else if (b[i]==-1 && i!=n-2)
        {   
            if (i==n-1)
            {
                printf("-1");
            }
            else
            {
                printf("-x^%d",n-i-1);
            }       
        }
        else if (i==n-2)
        {
            if (b[i]==1)
            {
                printf("+x");
            }
            else if (b[i]==-1)
            {
                printf("-x");       
            }
            else if (b[i]>0)
            {
                printf("+%dx");
            }
            else if (b[i]<0)
            {
                printf("%dx");
            }
            
            
        }
        
    } 
}    