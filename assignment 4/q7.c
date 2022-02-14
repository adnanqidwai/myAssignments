#include <stdio.h>
#include <string.h>

//format: ./a.out file_1.txt file_2.txt file_3.txt q7ans.txt

int main(int argc,char* argv[]){
    
    
    char s1[1001][21],s2[1001][21],s3[1001][21];
    char temp[21],s[1001][21];
    int frequency[1001]={0};
    FILE*ptr=fopen(argv[1],"r");
    FILE*ptr2=fopen(argv[2],"r");
    FILE*ptr3=fopen(argv[3],"r");
    FILE*ptr4=fopen(argv[4],"w+");
    FILE*ptr5=fopen("q7_combined.txt","w+");
    for (int i = 0; fscanf(ptr,"%s",s1[i])!=EOF; i++)
    {
        fprintf(ptr5,"%s\n",s1[i]);
    }
    for (int i = 0; fscanf(ptr2,"%s",s2[i])!=EOF; i++)
    {
        fprintf(ptr5,"%s\n",s2[i]);
    }
    for (int i = 0; fscanf(ptr3,"%s",s3[i])!=EOF; i++)
    {
        fprintf(ptr5,"%s\n",s3[i]);
    }
    rewind(ptr5);
    int nwords=0;
    for (int i = 0; fscanf(ptr5,"%s",s[i])!=EOF; i++)
    {
        nwords++;
    }
    for(int i=0; i<nwords; i++)
    {
        for(int j=0; j<nwords-1-i; j++)
        {
            if(strcmp(s[j], s[j+1]) > 0)
            {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], temp); 
            }
        }
    }
    rewind(ptr5);
    for (int i = 0; i < nwords; i++)
    {
        fprintf(ptr5,"%s\n",s[i]);
    }
    
    frequency[0]=1;
    int total=nwords;
    for (int i = 1; i<nwords; i++)
    {
        if (i==total)
        {
            break;
        }
        
        if (strcmp(s[i],s[i-1])==0)
        {

            frequency[i-1]++;total--;i--;
            for (int j = i; j < total; j++)
            {
                strcpy(s[j],s[j+1]);
            }
            
        }
        else
        {
            frequency[i]++;
        }
    }
    for (int i = 0; i < total; i++)
    {
        fprintf(ptr4,"%s:%d\n",s[i],frequency[i]);    
    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    fclose(ptr4);
    fclose(ptr5);
    

    
}