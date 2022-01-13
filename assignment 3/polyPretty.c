#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n+1; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < n+1; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n+1; i++)
    {
        if (a[i]!=1 && a[i]!=-1 && i!=n-1)
        {    
            if (a[0]!=0  && i==0)
            {
                printf("%dx^%d",a[0],n);
            }
            else if (a[i]!=0 &&i ==n)
            {
                printf("%d",a[n]);
            }
            else if (a[i]>0)
            {
                printf("+%dx^%d",a[i],n-i);
            }
            else if (a[i]<0)
            {
                printf("%dx^%d",a[i],n-i);
            }
        }
        else if (a[i]==1 && i!=n-1)
        {
            if (i==0)
            {
                printf("x^%d",n);
            }
            else if (i==n)
            {
                printf("+1");
            }
            else
            {    
                printf("+x^%d",n-i);
            }        
        }
        else if (a[i]==-1 && i!=n-1)
        {   
            if (i==n)
            {
                printf("-1");
            }
            else
            {
                printf("-x^%d",n-i);
            }       
        }
        else if (i==n-1)
        {
            if (a[i]==1)
            {
                printf("+x");
            }
            else if (a[i]==-1)
            {
                printf("-x");       
            }
            else if (a[i]>0)
            {
                printf("+%dx");
            }
            else if (a[i]<0)
            {
                printf("%dx");
            }
            
            
        }
        
    }
    
}