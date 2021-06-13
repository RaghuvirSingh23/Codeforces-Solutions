#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
using namespace std;

int main(){
	int n; cin >> n;
    string s; cin >> s;
    if(n ==1){
        cout<< s << endl;
    }
    else{
        vector <char> v;
        REP(i,0,s.length()){
            v.push_back(s[i]);
        }
        sort( v.begin(), v.end() );
        v.erase(unique( v.begin(), v.end() ), v.end());
        vector <int> vc;
        REP(k,0,v.size()){
            vc.push_back(count(s.begin(),s.end(), v[k]));
        }
        int flag = 1;
        REP(h,0,v.size()){
            if(vc[h]%n != 0){
                cout << -1 << endl;
                flag = 0;
                break;
            }
        }
        vector <char> vf;
        if(flag){
            REP(k,0,v.size()){
                REP(g,0,vc[k]/n){
                    vf.push_back(v[k]);
                }
            }
        }
        REP(e,0,n){
            REP(t,0,vf.size()){
                cout << vf[t];
            }
        }
    }
}