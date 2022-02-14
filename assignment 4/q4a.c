#include <stdio.h>


int main(int argc, char* argv[]){
    if (argc!=3)
    {
        return -1;
    }
    FILE *ptr =fopen(argv[1],"r");
    FILE *ptr2 =fopen(argv[2],"w");
    
    float temp,avg,sum=0;
    for (int n=1; fscanf(ptr,"%f",&temp)==1;n++)
    {   
        sum = sum + temp;
        avg= sum/n;
    }
    printf("%f",sum);
    fprintf(ptr2,"%f",avg);
    fclose(ptr);
    fclose(ptr2);

}