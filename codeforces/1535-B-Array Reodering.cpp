#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    REP(i,0,t){
        int n; cin >> n;
        int final1 = 0;
        vector <int> eve;
        vector <int> odd;
        vector <int> final;
        REP(j,0,n){
            int a;
            cin >> a;
            if(a%2 == 0){
                eve.push_back(a);
            }
            else{
                odd.push_back(a);
            }
        }
        sort(eve.rbegin(), eve.rend());
        sort(odd.rbegin(), odd.rend());
        final = eve;
        copy(odd.begin(), odd.end(), back_inserter(final));
        for(int k = 0; k < final.size(); k++){
            for(int h = k +1; h < final.size(); h++){
                if(__gcd(final[k], 2*final[h]) > 1){
                    final1++;
                }
            }
        }
        cout << final1 << endl;
    }
}

