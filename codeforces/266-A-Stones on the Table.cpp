#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int k; cin >> k;
  string s; cin >> s;
  int skip = 0;
  int count = 0;
  for(int i  = 0; i < s.length(); i++){
    if(skip == 0){
      for(int j = i+1;; j++){
        if(s[j]==s[i]){
          count++;
          skip++;
        }
        else{
          break;
        }
      }
    }
    else{
      skip--;
  }}
  cout << count;
  return 0;
}

