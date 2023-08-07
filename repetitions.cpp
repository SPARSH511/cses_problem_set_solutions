#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string dna;
    cin>>dna;
    char key = dna[0];
    int cnt = 1,max_ans = 1,l = dna.length();
    for(int i=1;i<l;i++){
        if(dna[i] == key){
            cnt++;
            max_ans = max(cnt,max_ans);
        }
        else{
            key = dna[i];
            cnt = 1;
        }
    }
    cout<<max_ans;
}
