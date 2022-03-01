#include <stdio.h>
#include <stdlib.h>
//RTE in OJ, fix case where the first element is itself lesser than Mth
int LDS(int a[], int n)
{
    int LDS[n];
    int max = 0;
    for (int i = 0; i < n; i++)
        LDS[i] = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] < a[j] && LDS[i] < LDS[j] + 1)
                LDS[i] = LDS[j] + 1;

    for (int i = 0; i < n; i++)
        if (max < LDS[i])
            max = LDS[i];
    return max;
}

int max(int x, int y) {
    return x < y ? y : x;
}
//checks the LDS ending at m-1th index
int beforeM(int a[],int dp[],int n)//n=m-1
{
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    
    int maxim=1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]> a[n])
        {
            maxim= max(maxim,beforeM(a,dp,i) +1);            
        }
    }
    return dp[n]=maxim;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],dp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        dp[i]=-1;
    }
    if (m>=n)
    {
        printf("%d",LDS(a,n));
        exit(0);
    }
    
    int ans= max(LDS(a,n),beforeM(a,dp,m-1) +LDS(&a[m],n-m));
    printf("%d",ans);
}