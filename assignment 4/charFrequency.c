#include <stdio.h>


int main(){
    int a[256]={0};char ch;
    FILE* ptr= fopen("file_1.txt","r");
    FILE* ptr2= fopen("file_2.txt","r");
    FILE* ptr3= fopen("file_3.txt","r");
    FILE* ptr4= fopen("writefrequency.txt","w");
    while ((ch=fgetc(ptr))!=EOF)
    {
        a[ch]++;
    }
    while ((ch=fgetc(ptr2))!=EOF)
    {
        a[ch]++;
    }
    while ((ch=fgetc(ptr3))!=EOF)
    {
        a[ch]++;
    }
    for (int i = (int)'0'; i <=(int)'9'; i++)
    {
        fprintf(ptr4,"%c: %d\n",i,a[i]);   
    }
    for (int i = (int)'A'; i <=(int)'Z'; i++)
    {
        fprintf(ptr4,"%c: %d\n",i,a[i]);   
    }
    for (int i = (int)'a'; i <=(int)'z'; i++)
    {
        fprintf(ptr4,"%c: %d\n",i,a[i]);   
    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    
    
}