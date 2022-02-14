#include <stdio.h>


int main(int argc, char* argv[]){
    int N;float avg=0,temp,sum=0,sum_sq=0,variable_var=0;
    scanf("%d",&N);
    for (int n=1; n<=N;n++)
    {   
        scanf("%f",&temp);
        sum = sum + temp;
        avg= sum/n;
        // sum_sq=sum_sq +(temp*temp);
        // variable_var=(sum_sq/n) - ((sum/n)*(sum/n));
        // printf("n= %d: running variance: %f\n",n,variable_var);
        // if (temp<=(1.2*avg)&&temp>=(0.8*avg)&&n>1)
        // {
        //     ;
        // }
        
    }
    printf("\nfinal mean: %f\nfinal variance: %f",avg,variable_var);
}