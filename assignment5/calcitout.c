#include <stdio.h>
const int mod= 1e9+7;

long long int binexp(int n, int x, int m){
    if (x==0)
    {
        return 1;
    }
    long long temp = binexp(n,x/2,m);
    if (x&1==1)
    {
        return (n*((temp *temp)%m)%m);
    }
    else{
        return (temp* temp)%m;
    }
}

int main()
{
    
    int n,m;
    
    scanf("%d %d",&n,&m);
    int a[n][m];
    long long int prod[n][m], binarr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    prod[0][0]=a[0][0];
    binarr[0][0]=binexp(prod[0][0],mod-2,mod);
    for (int i = 1; i < n; i++)
    {
        prod[i][0]=(prod[i-1][0] *a[i][0])%mod;
        binarr[i][0]=binexp(prod[i][0],mod-2,mod); 
    }
    for (int i = 1; i < m; i++)
    {
        prod[0][i]=(prod[0][i-1] * a[0][i])%mod;
        binarr[0][i]=binexp(prod[0][i],mod-2,mod);
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            prod[i][j]=(((((a[i][j]*prod[i][j-1])%mod)*prod[i-1][j])%mod)*binexp(prod[i-1][j-1],mod-2,mod))%mod;
            binarr[i][j]=binexp(prod[i][j],mod-2,mod);
        }   
    }
    
    int t;scanf("%d",&t);
    while(t--)
    {
        long long int product=1;
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        if (x1*y1 >0)
        {
            product =(((((prod[x2][y2] *prod[x1 -1][y1- 1])%mod)*binarr[x1-1][y2])%mod)*binarr[x2][y1-1])%mod;
        }
        else if (x1==0 &&y1!=0)
        {
            product= ((prod[x2][y2]* binarr[x2][y1-1])%mod);
        }
        else if (x1!=0 && y1==0)
        {
            product= ((prod[x2][y2]* binarr[x1-1][y2])%mod);
        }
        else
        {
            product=prod[x2][y2];
        }
        printf("%lld\n",product);
    }
    
}