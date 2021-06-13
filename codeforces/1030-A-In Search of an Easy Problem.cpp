#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(count(arr, arr + n, 1) > 0){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
}