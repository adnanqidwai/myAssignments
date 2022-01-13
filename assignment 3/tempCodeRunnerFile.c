#include <stdio.h>


int main(){
    int n,m,male=0,female=0; double perc;
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
        male=0;female=0;
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==0){
                male++;
            }
            else if (a[i][j]==1)
            {
                female++;
            }
        }
        if (male+female>0)
        {
            perc=100.0* male/(male+female);
            printf("%lf %lf\n", perc,100-perc);
        }
        else
        {
            printf("%lf %lf\n",(double)0,(double)0);
        }
        
    }   
}