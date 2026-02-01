#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    string n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n[0]+n[1]+n[2]==n[3]+n[4]+n[5]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
         
         
    }   
}
