#include <iostream>

using namespace std;

int main()
{
  int n,a;
  cin >> n >> a;
  int final;
  for(int i = n+1;; i++){
    int x = i/2;
    int y = 0;
    for(int j = 2; j <= x; j++){
      if(i%j == 0){
        y++;
      }
    }
    if(y == 0){
      final = i;
      break;
    }
  }
  if(final == a){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
}
