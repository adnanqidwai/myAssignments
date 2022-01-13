#include <bits/stdc++.h>
using namespace std; 
class binary{
    string s;
    public:
        void read (void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};
void binary :: read(void){
    cout<<"enter a binary number: ";
    cin>>s;
}

void binary:: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary num";
            exit(0);        
        }
    }
}
void binary :: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        s.at(i)= (1-(s.at(i)));
    }
    
}
void binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    return 0;
    int l, b;
    cin >> l >> b; 
    cout<< l*b*1ll;
    
}  
 