#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strinput(char *str)
{
    int ch, i=0;
    while((ch=getchar())!='\n')
        *(str+i++)=ch;
    *(str+i)='\0';
    return i;    
}
int key[1000008];char alphakey[125001];int n =1e6+8;
int main(int argc, char* argv[]){
    int n1;
    char str1[n],str2[n];
    int ninput= strinput(str1);
    srand(10);
    if (argc!=3)
    {
        exit(0);
    }
    
    FILE *ptr=fopen(argv[1],"r");
    FILE *ptr2=fopen(argv[2],"w");

    for (int i = 0; i < 127; i++)
    {
        key[i]=fgetc(ptr)-'0';
    }    
    fclose(ptr);
    for (int i = 127; i < n; i++)
    {
        key[i]=key[i-1]^key[i-127];
    }
    for (int i = 0,j=0; i < n-(n%8); i=i+8,j++)
    {
        alphakey[j]=(key[i]*128)+(key[i+1]*64)+(key[i+2]*32)+(key[i+3]*16)+(key[i+4]*8)+(key[i+5]*4)+(key[i+6]*2)+(key[i+7]);
        fprintf(ptr2,"%c ",alphakey[j]);
    }
    
    
    for (int i = 0; i <ninput; i++)
    {
        str2[i]= alphakey[i]^str1[i];
    }
    printf("%s",str2);
}
