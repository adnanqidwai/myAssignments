#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* f;int count=0;char x;
    f=fopen("test.txt","r");
    while ((x=fgetc(f))!=EOF)
    {
        if (x!='\n')
        {
            count++;
        }
    }
    printf("%d",count);
    fclose(f);
}