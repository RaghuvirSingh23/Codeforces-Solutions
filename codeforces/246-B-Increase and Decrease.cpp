#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    long sum = 0;
    REP(i,0,t){
        int a; cin >> a;
        sum += a;
    }
    if(sum % t == 0){
        cout << t << endl;
    }
    else{
        cout << t-1 << endl;
    }
}