#include <stdio.h>


int main(){
    int n,m,male=0,female=0,empty=0,fancy=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==0){
                male++;
            }
            else if (a[i][j]==1)
            {
                female++;
            }
            else {
                empty++;
            }
        }
    }
    for (int n = empty ;n>=0; n--)
    {
        if((male+n)%m ==0 || (female+n)%m ==0){
        fancy=1;    
        }
    }    
    if (fancy)
    {
        printf("FANCY");
    }
    else
    {
        printf("NOT FANCY");    
    }
    
}