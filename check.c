#include <stdio.h>


int main(){
    int a = (__INT_MAX__ +1);
    for (int i = 0; i <8; i++)
    {
        a=a+__INT_MAX__+1;
        printf("%d\n",a);
    }
    
    
}