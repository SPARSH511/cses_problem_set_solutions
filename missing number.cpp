#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; cin>>n; int num[n-1];
    for(int i=0;i<n-1;i++) cin>>num[i];
    sort(num,num+n-1);
    for(int i=1;i<n+1;i++){
        if(binary_search(num,num+n-1,i) == false){
            cout<<i; break;
        }
    }
}
