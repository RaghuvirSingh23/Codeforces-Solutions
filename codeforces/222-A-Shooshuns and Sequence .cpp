#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n; cin >> t >> n;
    vector <int> v;
    REP(i,0,t){
        int input; cin >> input;
        v.push_back(input);
    }
    int flag = 1;
    for(int k = n; k < t; k++){
        if(v[k] != v[n-1]){
            flag = 0;
            break;
        }
    }
    if(flag){
        int count = 0;
        for(int j = 0; j < t; j++){
            if(v[t - j -1] == v[t-1]){
                count++;
            }
            else{
                break;
            }
        }
        cout << t-count << endl;
        }
    else{
        cout << -1 << endl;
    }
}