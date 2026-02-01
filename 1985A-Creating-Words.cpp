#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    string a;
    char temp1;
    char temp2;
    string b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        string temp;
        temp1=a[0];
        temp2=b[0];
        b.erase(0,1);
        b.insert(0, 1,temp1);
        a.erase(0,1);
        a.insert(0, 1,temp2);
        cout<<a<<" "<<b<<endl;
        
        
    }
}
