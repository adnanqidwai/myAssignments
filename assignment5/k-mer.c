#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main(){
    int l,k,n;
    scanf("%d %d %d",&l,&k,&n);
    char str[l+2];
    scanf("%s",str);
    
    int i,j;
    if (l==k)
    {
        printf("%s",str);
        exit(0);
    }
    str[l]='+';
    for (i = 0; i<l; i= i + k-n)
    {
        if (l-i==n)
        {
            exit(0);
        }
        
        for (j = 0; j < k; j++)
        {
            if (str[i+j]=='+')
            {
                exit(0);
            }
            printf("%c",str[i+j]);
        }
        printf("\n");
    }
}