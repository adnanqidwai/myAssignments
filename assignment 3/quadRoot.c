#include <stdio.h>
#include <math.h>

int main(){
    double a[3]; double root1,root2;
    for (int i = 0; i < 3; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf",&a[i]);
    }
    double D = (a[1]*a[1])-4*a[0]*a[2];
    
    if (D>0)
    {
        root1= ((-1*a[1]) + D)/(2*a[0]);
        root2= ((-1*a[1]) - D)/(2*a[0]);
        printf("%lf %lf",root1,root2);
    }
    
    else if (D<0)
    {
        D= D/(2*a[0]);
        a[0]= -1*a[0]/(2*a[0]);
        printf("%lf+ i%lf ",a[0],D);
        printf("%lf- i%lf",a[0],D);
    }
    else
    {
        root1= -1*a[1]/(2*a[0]);
        printf("%lf",root1);
    }
    
    
}