#include <stdio.h>
#include <stdlib.h>
int a[2*(int)1e6];
int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    
    int count=0;
    int n,m;
    int temp;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n+m; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n+m,sizeof(int),compare);
    for (int i = 0; i < m+n-1; i++)
    {
        if (a[i]==a[i+1])
        {
            count++;
        }
        
    }
    
    printf("%d",count);
}