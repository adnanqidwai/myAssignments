#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int key[1000000];int n =1e6;
int strinput(char *str)
{
    int ch, i=0;
    while((ch=getchar())!='\n')
        *(str+i++)=ch;
    *(str+i)='\0';
    return i;    
}
int main(){
    char str1[n],str2[n];
    int ninput= strinput(str1);
    srand(10);
    
    FILE *ptr=fopen("key.txt","r");

    for (int i = 0; i < 127; i++)
    {
        key[i]=fgetc(ptr)-'0';
    }    
    fclose(ptr);
    for (int i = 127; i < n; i++)
    {
        key[i]=key[i-1]^key[i-127];
    }
    
    for (int i = 0; i <ninput; i++)
    {
        str2[i]= key[i]^str1[i];
    }
    printf("%s",str2);
}
