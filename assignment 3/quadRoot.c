#include <stdio.h>
#include <math.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long int a[3]; double b[3], root1,root2;
        for (int i = 0; i < 3; i++)
        {
            a[i]=0;
            b[i]=0.0;
        }
        for (int i = 0; i < 3; i++)
        {
            scanf("%ld",&a[i]);
        }
        
        long int D = (a[1]*a[1])-4*a[0]*a[2];
        if (D>=0)
        {
            double d= sqrt(D);
            root1= ((-1.0*a[1]) + d)/(2*a[0]); 
            root2= ((-1.0*a[1]) - d)/(2*a[0]);
            printf("%.8lf 0.00000000\n%.8lf 0.00000000\n",root1,root2);
        }
        
        else
        {
            double d= sqrt((-1)*D);
            double c = d/(2.0*a[0]);
            float b = -1.0*a[1]/(2.0*a[0]);
            printf("%.8lf %.8lf\n",b,c);
            printf("%.8lf %.8lf\n",b,(-1)*c);
        }
    }        
}