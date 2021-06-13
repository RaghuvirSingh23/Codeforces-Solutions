#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int num = stoi(s);
  for(int i = num + 1;;i++){
    int a = i/1000;
    int b = (i/100)%10; 
    int c = (i/10)%10;
    int d = (i/1)%10;
    if(a != b && b != c && c != d && d != a && b != d && a != c){

      cout << a << b << c << d;
      break;
    }
    }
  }