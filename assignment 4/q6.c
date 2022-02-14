#include <stdio.h>

//format : ./a.out file_1.txt file_2.txt file_3.txt Q6ans.txt

int main(int argc, char*argv[]){
    int a[256]={0};char ch;
    if (argc!=5)
    {
        printf("enter valid arguments");
        return -1;
    }
    
    FILE* ptr= fopen(argv[1],"r");
    FILE* ptr2= fopen(argv[2],"r");
    FILE* ptr3= fopen(argv[3],"r");
    FILE* ptr4= fopen(argv[4],"w");
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
        fprintf(ptr4,"%c:%d\n",i,a[i]);   
    }
    for (int i = (int)'A'; i <=(int)'Z'; i++)
    {
        fprintf(ptr4,"%c:%d\n",i,a[i]);   
    }
    for (int i = (int)'a'; i <=(int)'z'; i++)
    {
        fprintf(ptr4,"%c:%d\n",i,a[i]);   
    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    
    
}