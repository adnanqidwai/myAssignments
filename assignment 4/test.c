#include <stdio.h>
#define max_name_size 20

int main(){
    char a[max_name_size],b[max_name_size];
    scanf("%s",a);
    scanf("%s",b);

    int aresame=1;

    for (int i = 0; a[i]!= '\0'; i++)
    {
        if (a[i]!=b[i])
        {
            aresame=0;
        }
        
    }
    if (aresame>0)
    {
        printf("1");
    }
    else if (aresame==0)
    {
        printf("0");
    }
    
    
    
    
}