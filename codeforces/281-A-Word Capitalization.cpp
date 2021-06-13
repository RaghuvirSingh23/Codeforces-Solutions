#include <iostream>
#include <string>
using namespace std;
 
int main() {
  string s; cin >> s;
  if(isupper(s[0])){
    cout<< s;
  }
  else{
    putchar(toupper(s[0]));
    for(int i = 1; i < s.length(); i++){
      cout << s[i];
    }
  }
 
}