#include <stdio.h>
int main(){
    int n, x, y, z ; scanf("%d",&n);
    for (x=3; x<200; x++)
    {
        for (y=2;y<x; y++){
            for (z=1; y<z; z++){
    
                if (x*x==y*y + z*z){
                    n--;
                    if (n==0){break;}
                    printf("%d %d %d", x, y,z);
                }
            }    
        }
    }
}