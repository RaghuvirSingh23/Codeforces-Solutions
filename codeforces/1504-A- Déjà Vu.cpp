#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
        while(t--){
            int n; string s;
            int k =0;
            cin >> s;
            n = s.length();
            int arr[26] = {0};
            REP(i,0,n){
                arr[s[i]-'a']++;
            }
            int co = 0;
            REP(i,1,26){
                co += arr[i];
            }
            if(co >= 1){
                cout << "YES\n";
                int j = 0;
                REP(i,0,n/2){
                    if(s[n-j-1] != 'a'){
                        k = j;
                        break;
                    }
                    j++;
                }
                REP(i,0,n){
                    if(i!=j){
                        cout << s[i];
                    }
                    else{
                        cout << 'a' << s[i];
                    }
                    
                }
                cout << "\n";
            }
            else{
                cout << "NO\n";
            }
        } 
}

