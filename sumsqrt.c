#include <stdio.h>
#include <math.h>
int main(){
    float sum=0;
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++ ){
        sum = sum + sqrt(i);

    }
    printf( "%8f",sum);
}