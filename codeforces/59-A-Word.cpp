#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s; cin >> s;
  int len = 0 ;
  for(int i = 0; i < s.length(); i++){
    if(isupper(s[i])){
      len++;
    }
    else{
      len--;
    }
  }
  if(len>0){
    for(int j = 0; j < s.length(); j++){
      putchar(toupper(s[j]));
    }
  }
  else if(len == 0){
    for(int j = 0; j < s.length(); j++){
      putchar(tolower(s[j]));
    }
  }
  else{
    for(int j = 0; j < s.length(); j++){
      putchar(tolower(s[j]));
    }
  }

}