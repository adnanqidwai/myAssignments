#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int k; scanf("%d",&k);
        if (k=='\0')
        {
            break;
        }
        else
        {
            a[i]=k;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
        
        
    

}