#include <iostream>
using namespace std;
#define int long long int
int32_t main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            int d = arr[i-1]-arr[i];
            arr[i]+=d; cnt+=d;
        }
    }
    cout<<cnt;
}

