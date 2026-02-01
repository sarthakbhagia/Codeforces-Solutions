#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int moves = min(n, m);

    if (moves % 2 == 0) {
        cout << "Malvika" << endl;
    } 
    else {
        cout << "Akshat" << endl;
    }

    return 0;
}
