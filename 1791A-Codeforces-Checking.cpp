#include<iostream>
using namespace std;
int main(){
    int t,count=0;
    char c;
    cin>>t;
    string s="codeforces";
    while(t--){
        cin>>c;
        if(s.contains(c)){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
    }
    }
    
}
