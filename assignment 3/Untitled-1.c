#include <stdio.h>

long long int mod(long long int x)
{
    long long int M= 1e9+7;
    return ((x)%M+M)%M;
}

int main(){
    
    printf("%d",sizeof( int));
}