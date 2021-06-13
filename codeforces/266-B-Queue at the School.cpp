#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  int t;
  cin>> n; cin >> t;
  string s;
  cin>> s;
  for( int k = 0; k < t; k++){
  int f = 0;
  for(int i = 0; i < n-1; i++ ){
    if((s[i] == 'B' && s[i+1] == 'G') && f == 0){
      char temp = s[i];
      s[i] = s[i+1];
      s[i+1] = temp;
      f = 1;
    }
    else{
      f = 0;
    }
      
    }}
    cout << s;
  }
