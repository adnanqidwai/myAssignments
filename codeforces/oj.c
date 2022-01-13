#include <stdio.h>


int main(){
    int a[100],b[100][30];
    for (int i = 0; i < 100; i++)
    {
        a[i]=0;
    }
    for(int j=0; j<100 ; j++){
        for (int i = 0; i < 30; i++)
        {
            scanf("%d",&b[j][i]);
        }
    }
    for(int j =0; j <100; j++){    
        for (int i = 0; i < 30; i++)
        {
            int n = b[j][i];
            if (n==0)
            {
                a[j]++;
            }
        }
    }
    int max=0,floor=-1;
    for (int i = 0; i < 100; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            floor= i;
        }    
    }
    printf("%d",floor);
    
    
    
}