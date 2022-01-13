#include <stdio.h>
int main(void){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    int i =1;
    x:
        printf(" %d * %d= %d",n,i,n*i );
        i++;
        if (i<=10){
            goto x;
        }
}