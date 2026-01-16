#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p,nl,np,limes,salt,drink;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    limes=c*d;
    salt=p/np;
    drink=(k*l)/nl;
    cout<<min({drink,salt,limes})/n<<endl;
}
