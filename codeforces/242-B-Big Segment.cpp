#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> vm;
    vector <int> vn;
    int t; cin >> t;
    REP(i, 0, t){
        int a, b; cin >> a >> b;
        vm.push_back(a);
        vn.push_back(b);
    }
    vector <int> mindex;
    vector <int> maxdex;
    int vmin = *min_element(vm.begin(), vm.end());
    int vmax = *max_element(vn.begin(), vn.end());
    for(int i = 0; i < t; i++){
        if(vm[i] == vmin){
            mindex.push_back(i);
        }
        if(vn[i] == vmax){
            maxdex.push_back(i);
        }
    }
    int flag = 1;
    for(int i = 0; i < mindex.size(); i++){
        for(int j = 0; j < maxdex.size(); j++){
            if(mindex[i] == maxdex[j]){
                cout << mindex[i] + 1 << endl;
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(flag){
        cout << -1 << endl;
    }
}