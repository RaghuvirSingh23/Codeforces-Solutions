#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;

int solve(){
    int n; cin >> n;
    int arr[n];
    int count = 0;
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]<=0){
            count++;
        }
        else{
            mini = min(mini,arr[i]);
        }
    }
    sort(arr,arr+n);
    int mindiff = INT_MAX-1;
    for(int i = 0; i < n; i++){
        if(i+1<n && arr[i+1] <= 0){
            mindiff = min(mindiff,arr[i+1]-arr[i]);
        }
    }
    int ans = count;
    if(mindiff >= mini){
        ans++;
    }
    cout << ans<< endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

