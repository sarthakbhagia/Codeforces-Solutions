#include<iostream>
using namespace std;
int main(){
    char word[1000];
    cin>>word;
    if(isupper(word[0])){
        cout<<word<<endl;
    }
    
    else{
        word[0]=toupper(word[0]);
        cout<<word<<endl;
    }
    return 0;
}
