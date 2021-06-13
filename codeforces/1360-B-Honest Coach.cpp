#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int final[n];
  for(int i = 0; i < n; i++){
    int t;
    cin >> t;
    int strength[t];
    for(int j = 0; j < t; j++){
      cin >> strength[j];
    } 
    sort(strength,strength + t);
    int min = strength[1] - strength[0];
    for(int g = 0; g< t-1; g++){
      if(strength[g+1]-strength[g]<min){
        min = strength[g+1]-strength[g];
      }
    }
    final[i] = min;
  }
  for(int k = 0; k < n; k++){
    cout << final[k]<<endl;
  }
}
