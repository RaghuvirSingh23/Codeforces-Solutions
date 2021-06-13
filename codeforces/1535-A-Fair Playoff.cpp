#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    REP(i,0,t){
        int arr[4];
        REP(j,0,4){
            cin >> arr[j];
        }
        int a = max(arr[0], arr[1]);
        int b = max(arr[2], arr[3]);
        sort(arr, arr +4);
        if(arr[2] == min (a,b) && arr[3] == max(a,b)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

