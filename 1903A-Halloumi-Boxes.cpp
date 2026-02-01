#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, n, k;
    cin >> t;
    int arr[10000];

    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool isSorted = true;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i+1]) {
                isSorted = false;
                break;
            }
        }

       
        if(k >= 2 || isSorted){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
