#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(10);
    int arr[6]={0},x=0;
    for (int i = 0; i < 1e6; i++)
    {
        arr[rand()%6]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ==> %d\n",i+1,arr[i]);
    }
    
}