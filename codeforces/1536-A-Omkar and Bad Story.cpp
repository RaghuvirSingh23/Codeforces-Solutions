#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    REP(j,0,t){
        int k; cin >> k;
        int flag =1;
        REP(i,0,k){
            int a; cin >> a;
            if(a < 0){
                flag = 0;
            }
        }
        if(flag){
            cout << "YES" << endl;
            cout << 101 << endl;
            REP(i,0,101){
                cout << i << " ";
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}