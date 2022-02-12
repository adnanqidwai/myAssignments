#include <stdio.h>


int main(){
    int N;float temp,sum=0,sum_sq=0,variable_var=0;
    scanf("%d",&N);
    for (int n=1; n<=N;n++)
    {   
        scanf("%f",&temp);
        sum = sum + temp;
        sum_sq=sum_sq +(temp*temp);
        variable_var=(sum_sq/n) - ((sum/n)*(sum/n));
        printf("n= %d: %f\n",n,variable_var);
    }
    printf("\nfinal mean: %f",sum/N);
}