#include <stdio.h>


int main(){
    int n; float sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int x;scanf("%d",&x);
        sum+=x;
    }
    printf("%f",sum/n);
}