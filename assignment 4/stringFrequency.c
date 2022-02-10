#include <stdio.h>
#include <string.h>

int main(){
    char s[1001][21];
    int frequency[1001]={0};
    FILE*ptr=fopen("stringread.txt","r");
    for (int i = 0; fscanf(ptr,"%s",s[i])==1; i++)
    {
        printf("%s ",s[i]);
        for (int j = 0; j < i; j++)
        {
            if (strcmp(s[i],s[j])==0)
            {
                i--;
                break;
            }

        }
        frequency[i]++;
    }
    printf("\n\n");
    for (int i = 0; i < 1001; i++)
    {
        if (frequency[i]!=0)
        {
            printf("%s occured %d times\n",s[i],frequency[i]);
        }
        
    }
    fclose(ptr);
    

    
}