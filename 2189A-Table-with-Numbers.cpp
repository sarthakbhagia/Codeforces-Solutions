#include<iostream>
using namespace std;
int main(){
    int t,n,h,l;
    cin>>t;
    while(t--){
        cin>>n>>h>>l;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int small = (h < l) ? h : l;
        int big = (h > l) ? h : l;
        int u = 0; 
        int s = 0; 
        
        for(int i=0; i<n; i++){
            if(a[i] <= small){
                u++;
            }
            else if(a[i] <= big){
                s++;
            }
        }
      
        int ans = (u < s) ? u : s;
        u = u - ans;
        ans = ans + (u / 2);
        
        cout << ans << endl;
    }
}
