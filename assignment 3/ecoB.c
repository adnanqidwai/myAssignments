#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n; long int sum=0;
    double mean,diffsum=0.0,var,stdev;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){    
        scanf("%d",&a[i]);
        int k=a[i];
        if (k>100 || k<0)
        {
            printf("INVALID INPUT");
            exit(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    
    mean=1.0*sum/n ;
    for (int i = 0; i < n; i++)
    {
        diffsum=diffsum +((mean-a[i])*(mean-a[i]));
    }
    var= diffsum/(n-1);
    stdev=sqrt(var);
    printf("%lf %lf %lf",mean,var,stdev);


       
}