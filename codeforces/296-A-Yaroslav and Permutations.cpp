#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> v;
    set <int> vi;
    int t; cin >> t;
    REP(i, 0, t){
        int a; cin >> a;
        v.push_back(a);
        vi.insert(a);
    }
    int flag = 1;
    for(auto x:vi){
        if(count(v.begin(), v.end(), x) > (t+1)/2){
            cout << "NO" << endl;
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
}