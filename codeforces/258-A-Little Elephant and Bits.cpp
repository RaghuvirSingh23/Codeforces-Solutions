#include <bits/stdc++.h>
#include <algorithm>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define PB push_back
using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            count = i;
            break;
        }
    }
    for(int i = 0; i < count; i++){
        cout << s[i];
    }
    for(int i = count +1; i < s.length(); i++){
        cout << s[i];
    }
}