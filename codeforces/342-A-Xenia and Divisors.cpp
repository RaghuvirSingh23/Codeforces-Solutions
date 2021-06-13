#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    int a4 = 0;
    int a6 = 0;
    int flag = 1;
    REP(i,0,t){
        int a; cin >> a;
        if(a == 1){
            a1++;
        }
        else if(a == 2){
            a2++;
        }
        else if(a == 3){
            a3++;
        }
        else if(a == 4){
            a4++;
        }
        else if(a == 6){
            a6++;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(flag){
        if((a1 != t/3) || (a2 < a4) || (a6 < a3) || ((a2 + a3) != (a4 + a6))){
            cout << -1 << endl;
        }
        else{
            REP(i, 0, a4){
                cout << "1 2 4" << endl;
            }
            REP(i, 0, a2 - a4){
                cout << "1 2 6" << endl;
            }
            REP(i, 0, a3){
                cout << "1 3 6" << endl;
            }
        }
    }
    else{
        cout << -1 << endl;
    }
}