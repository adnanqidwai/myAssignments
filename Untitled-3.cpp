#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for (int i =0 ; i <n; i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j <n; j++)
    {
        b[j] = a [n-j-1];
    }
    for (int i =0 ; i <n; i++)
    {
        cin>>b[i];
    }
    
}