#include <stdio.h>
#include <stdlib.h>


int main(){
    long int x=0,n; double xcor,ycor,origdist;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        xcor= ((double)rand()/(RAND_MAX-1));
        ycor= ((double)rand()/(RAND_MAX-1));
        origdist = ((xcor*xcor)+(ycor*ycor));
        if (origdist<=1)
        {
            x++;
        }
    }
    if (x==0)
    {
        exit(0);
    }
    
    double pi= 4.0*x/n;
    printf("%lf",pi);
    

}