#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(10);
    int arr[12]={0};
    for (int i = 0; i < 1e6; i++)
    {
        arr[(rand()%6)+(rand()%6)]++;
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d ==> %d\n",i+2,arr[i]);
    }
    
}