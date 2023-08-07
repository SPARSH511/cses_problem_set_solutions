#include <iostream>
using namespace std;
#define int long long int
int32_t main(){
    int n; cin>>n;
    while(n >= 1){
        if(n == 1){
            cout<<n; break;
        }
        if(n%2){
            cout<<n<<" "; n*=3; n++;
        }
        else{
            cout<<n<<" "; n/=2;
        }
    }
}
