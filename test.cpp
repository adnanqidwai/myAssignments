#include <iostream>
using namespace std; 

int main(){
    int n,k;
    cout<<"enter the number n"<<endl;cin>>n;
    cout<<"enter the number k"<<endl;cin>>k;
    while (k>0){
        if (n%10==0){
            n=n/10;
            
        }
        else{
            n--;
        }
    }
    cout<<"your final number is: "<<n;
    
    return 0;
}