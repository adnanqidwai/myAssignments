#include <stdio.h>
#include <string.h>

int main(){
    char s1[1001][21],s2[1001][21],s3[1001][21],s[1001][21];
    int found=0;
    int frequency[1001]={0};
    FILE*ptr=fopen("file_1.txt","r");
    FILE*ptr2=fopen("file_2.txt","r");
    FILE*ptr3=fopen("file_3.txt","r");
    FILE*ptr4=fopen("q7_ans_test.txt","w");
    FILE*ptr5=fopen("q7_combined.txt","w+");
    for (int i = 0; fscanf(ptr,"%s",s1[i])==1; i++)
    {
        fprintf(ptr5,"%s\n",s1[i]);
    }
    for (int i = 0; fscanf(ptr2,"%s",s2[i])==1; i++)
    {
        fprintf(ptr5,"%s\n",s2[i]);
    }
    for (int i = 0; fscanf(ptr3,"%s",s3[i])==1; i++)
    {
        fprintf(ptr5,"%s\n",s3[i]);
    }
    rewind(ptr5);
    for (int i = 0; fscanf(ptr5,"%s",s[i])==1; i++)
    {
        found=0;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(s[i],s[j])==0)
            {
                i--;found=1;frequency[j]++;
                break;
            }    
        }
        if(!found)
        {
            frequency[i]++;
        }
    }
    printf("\ncheck your file\n\n");
    for (int i = 0; i < 1001; i++)
    {
        if (frequency[i]!=0)
        {
            fprintf(ptr4,"%s: %d\n",s[i],frequency[i]);
        }
        
    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    fclose(ptr5);
    

    
}