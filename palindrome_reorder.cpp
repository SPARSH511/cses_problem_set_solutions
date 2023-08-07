#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;
int main()
{
  string s; cin>>s;
  int n = s.length();
  map <char,int> ref;
  int cnt = 0,flag = 0;
  char odd;
  for(int i=0;i<n;i++){
    if(ref.find(s[i]) == ref.end()) ref[s[i]] = 1;
    else ref[s[i]]++;
  }
  for(auto x: ref){
    if(x.second%2) {flag = 1; odd = x.first; cnt++;}
    if(cnt > 1) {cout<<"NO SOLUTION"; exit(0);}
  }
  string first_half = "",second_half = "";
  for(auto x: ref){
    string med = "";
    for(int i=0;i<(x.second)/2;i++) med+=x.first;
    first_half = first_half+med;
    second_half = med+second_half;
  }
  if(flag == 1) cout<<first_half+odd+second_half;
  else cout<<first_half+second_half;
}
