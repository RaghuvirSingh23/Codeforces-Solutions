#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int y; cin>>y;
    int w;
    int arr[3];
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    for(int i = 0; i < y; i++){
        int x; cin >> x;
        if(x == 1){
            arr1.push_back(i);
        }
        else if(x == 2){
            arr2.push_back(i);
        }
        else if(x == 3){
            arr3.push_back(i);
        }}
    arr[0] = arr1.size();
    arr[1] = arr2.size();
    arr[2] = arr3.size();
    w = *min_element(arr, arr + 3);
    cout << w << endl;
    for(int j = 0; j < w; j++){
        cout << arr1[j] + 1 << " " << arr2[j] + 1 << " " << arr3[j] + 1 << endl;
    }
}