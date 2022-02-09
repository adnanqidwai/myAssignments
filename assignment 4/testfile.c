#include <stdio.h>


int main()
{
    FILE* ptr= fopen("test.txt","a+");
    char * str[1000];
    fgets(*str,1000,ptr);
    printf("\n\n%s",str);
}