#include <stdio.h>


int main(){
    int a[256]={0};char ch;
    FILE* ptr= fopen("readfrequency.txt","a+");
    FILE* ptr2= fopen("writefrequency.txt","w");
    while ((ch=fgetc(ptr))!=EOF)
    {
        a[ch]++;
        printf("%c",ch);
    }
    for (int i = 1; i < 1[256]; i++)
    {
        if (a[i]!=0)
        {
            fprintf(ptr2,"%c occurs %d times\n",i,a[i]);
        }
        
    }
    fclose(ptr);
    fclose(ptr2);

    
    
}