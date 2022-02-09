#include <stdio.h>


int main(){
    int n=0; float sum=0;
    while (1)
    {    
        int x;scanf("%d",&x);
        if (x=='\0')
        {
            break;
        }
        
        sum+=x;n++;
    }
    printf("%f",sum/n);
}