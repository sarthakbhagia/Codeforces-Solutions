#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        s2[i]=tolower(s2[i]);
    }
    int x;
    x=s1.compare(s2);
    if(x==0){
        cout<<0<<endl;
    }
    else if(x>0){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
