#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int x; cin >> x;
        int oddstr = 0;
        int badeve = 0;
        int goodeve = 0;
        while(x--){
            string s; cin >> s;
            int ones = 0;
            int zeros = 0;
            if(s.length()%2 == 1){
                oddstr++;
            }
            else{
                for(int i = 0; i < s.length(); i++){
                    if(s[i] == '1'){
                        ones++;
                    }
                    else{
                        zeros++;
                    }
                }
                if(ones%2 == 0 && zeros%2 == 0){
                    goodeve++;
                }
                else{
                    badeve++;
                }
            }
        }
        int final = 0;
        final += goodeve;
        if(badeve%2 == 1){
            final += badeve -1;
        }
        else{
            final += badeve;
        }
        if(oddstr > 0 && badeve%2 ==1){
            final +=1;
        }
        final+= oddstr;
        cout << final << endl;
    }
    
}