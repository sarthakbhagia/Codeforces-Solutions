#include<iostream>
using namespace std;

int main(){
    int t;
    int a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if (a + (c % 2) > b) {
            cout << "First" << endl;
        } 
        else {
            cout << "Second" << endl;
        }
    }
    return 0;
}
