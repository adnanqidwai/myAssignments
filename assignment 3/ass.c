#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k,factors=0,x;
    scanf("%d %d",&n,&k);
    int a[10000];
    for (int i = 1; i < 10000; i++)
    {
        factors=0;
        for (int j = 1; j <= i; j++)
        {
            
            if (i%j==0)
            {
                factors++;
            }
            
        }
        x=n;
        if (factors==k)
        {
            x--;
        }   
        a[i]=factors+ x ;
        if (a[i]==k && x==0)
        {
            printf("%d",i);
            exit(0);
        }
        
    }

}