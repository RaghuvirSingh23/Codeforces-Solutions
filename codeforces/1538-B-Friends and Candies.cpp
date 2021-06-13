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
        int c; cin >> c;
        int arr[c];
        int sum;
        if(c == 1){
            int a; cin >> a;
            cout << 0 << endl;
        }
        else{
            REP(j,0,c){
                cin >> arr[j];
            }
            sum = accumulate(arr, arr + c, 0);
            int avg = sum/c;
            if(avg*c == sum){
                int final = 0;
                REP(k,0,c){
                    if(arr[k] > avg){
                        final++;
                    }
                }
                cout << final << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        
    }
    
}