#include <stdio.h>
#include <stdlib.h>
const int n=1e6;
int main(){
    srand(10);
    char key[n];
    int count0=0,count1=0,count0_0=0,count1_0=0;
    FILE *ptr= fopen("key.txt","w+");
    for (int i = 0; i < 128; i++)
    {
        fprintf(ptr,"%d",key[i]=rand()%2);
        
    }
    fclose(ptr);
    for (int i = 127; i < n; i++)
    {
        key[i]=key[i-1]^key[i-127];
    }
    for (int i = 0; i < n; i++)
    {
        if (key[i]==1)
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }
    printf("Q1: using XOR:\np{x=0}:%lf p{x=1}:%lf\n",(double)count0/n,(double)count1/n);
    for (int i = 0; i < n-1; i++)
    {
        if (key[i]==0 &&key[i+1]==0)
        {
            count0_0++;
        }
        else if (key[i]==1&&key[i+1]==0)
        {
            count1_0++;
        }
        
    }
    printf("\nQ2: using XOR:\np(x=0|y=0): %lf p(x=0|y=1): %lf\n\n",(double)count0_0/(count0_0+ count1_0),(double)count1_0/(count0_0+count1_0));
    
    //for rand()%2
    count0=count1=0;
    for (int i = 127; i < n; i++)
    {
        key[i]=rand()%2;
    }
     for (int i = 0; i < n; i++)
    {
        if (key[i]==1)
        {
            count1++;
        }
        else
        {
            count0++;
        }
    }
    printf("Q1: using rand()%2:\np{x=0}:%lf p{x=1}:%lf\n",(double)count0/n,(double)count1/n);


    for (int i = 0; i < n-1; i++)
    {
        if (key[i]==0 &&key[i+1]==0)
        {
            count0_0++;
        }
        else if (key[i]==1&&key[i+1]==0)
        {
            count1_0++;
        }
        
    }
    printf("\nQ2: using rand():\np(x=0|y=0): %lf p(x=0|y=1): %lf",(double)count0_0/(count0_0+ count1_0),(double)count1_0/(count0_0+count1_0))  ;  
    

    
}