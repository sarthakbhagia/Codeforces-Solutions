#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        int val;
        for (int i = 0; i < n; i++) {
            cin >> val;
            sum += val;
        }
        if (s >= sum && (s - sum) % x == 0) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
