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
    char temp[100];
    char all[1000][100];
    FILE *ptr1=fopen("sorted1.txt","r");
    FILE *ptr2=fopen("sorted2.txt","r");
    FILE *ptr3=fopen("finalsorted.txt","w+");
    
    for (int i = 0; fscanf(ptr1,"%s",temp)==1;i++)
    {
        strcpy(all[i],temp);
        n1++;
    }
    n2= n1;
    for (int i = n1; fscanf(ptr2,"%s",temp)==1;i++)
    {
        strcpy(all[i],temp);
        n2++;
    }
    printf("\ncheck your file\n\n");
    
    for(int i=0; i<n2; i++){
        for(int j=0; j<n2-1-i; j++){
            if(strcmp(all[j], all[j+1]) > 0){
                strcpy(temp, all[j]);
                strcpy(all[j], all[j+1]);
                strcpy(all[j+1], temp); 
            }
        }
    }            
    for (int i = 0; i < n2; i++)
    {
        fprintf(ptr3,"%s\n",all[i]);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    

}