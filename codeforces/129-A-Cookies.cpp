#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    char arr[n];
    for(int i; i < n ; i++){
        int k; cin >> k;
        if(k%2 == 0){
            arr[i] = 'E';
        }
        else{
            arr[i] = 'O';
        }
    }
    if(count(arr,arr+n,'O')%2==0){
        cout<< n - count(arr,arr+n,'O');
    }
    else{
        cout<< count(arr,arr+n,'O');
    }
}