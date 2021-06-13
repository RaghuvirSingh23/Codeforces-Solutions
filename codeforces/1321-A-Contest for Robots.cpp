#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v1;
    vector<int> v2;
    int sum1 = 0;
    int sum2 = 0;
    for(int k = 0; k < n; k++){
        int x; cin >> x;
        v1.push_back(x);
    }
    for(int k = 0; k < n; k++){
        int x; cin >> x;
        v2.push_back(x);
    }
    for(int i = 0; i < n; i++){
        if(v1[i] == 1 && v2[i] == 0){
            sum1+=1;
        }
        else if(v1[i] == 0 && v2[i] == 1){
            sum2+=1;
        }
        else{
            continue;
        }
    }
    if(sum1 == 0 && sum2 == 0){
        cout << -1 << endl;
    }
    else if(sum1 == 0 && sum2 > 0){
        cout << -1 << endl;
    }
    else{
        cout << (sum2/sum1) + 1 << endl; 
    }
    
}