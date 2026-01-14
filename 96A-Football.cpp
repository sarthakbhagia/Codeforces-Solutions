#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin >> str;
    int count = 1; 
    bool dangerous = false; 
    for(int i = 1; i < str.length(); i++){
        
      if(str[i] == str[i-1]){
            count += 1;
        }
        else{
            count = 1;
        }
        if(count >= 7){
            dangerous = true;
            break;
        }
    }
  
    if(dangerous){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
