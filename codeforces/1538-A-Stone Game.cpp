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
        REP(j,0,c){
            cin >> arr[j];
        }
        int fmin = distance(arr, min_element(arr, arr + c));
        int fmax = distance(arr, max_element(arr, arr + c));
        if(fmin >= c/2 && fmax >= c/2){
            cout << c - min({fmin, fmax})  <<  endl;
        }
        else if(fmin <= c/2 && fmax <= c/2){
            cout << max({fmin, fmax}) + 1 << endl;
        }
        else if ( fmin >= c/2 && fmax <= c/2){
            cout << min({(c-fmin) + fmax +1 , fmin + 1, c - fmax}) << endl; 
        }
        else if ( fmax >= c/2 && fmin <= c/2){
            cout << min({(c-fmax) + fmin +1, fmax + 1, c - fmin}) << endl; 
        }
    }
    
}