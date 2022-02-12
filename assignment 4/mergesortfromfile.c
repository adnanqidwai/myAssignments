#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{ 
    const char **str_a = (const char **)a;
    const char **str_b = (const char **)b;
    return strcmp(*str_a, *str_b);
} 

int main(){
    int n1=0,n2=0;
    char temp1[100];
    char temp2[100];
    char *all[1000];
    char temp[100];
    FILE *ptr1=fopen("sorted1.txt","r");
    FILE *ptr2=fopen("sorted2.txt","r");
    FILE *ptr3=fopen("finalsorted.txt","w+");
    
    for (int i = 0; fscanf(ptr1,"%s",temp1)==1;i++)
    {
        all[i]=temp1;
        printf("%s\n",all[i]);
        n1++;
    }
    for (int i = n1; fscanf(ptr2,"%s",temp2)==1;i++)
    {
        all[i]=temp2;
        printf("%s\n",all[i]);
        n2++;
    }
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%s\n",all[i]);
    }
    
    qsort(all, n1+n2, sizeof(const char*),compare);
        
    for (int i = 0; i < n1+n2; i++)
    {
        //printf("%s\n",all[i]);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    

}