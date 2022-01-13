#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t,n,k; cin>>t;
    while(t--){
        cin>>n >> k ;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int total=0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]>= arr[k-1]){
                total++;
            }
        cout<<total;
        }

        
    }
}