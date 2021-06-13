#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s1;
    string s2;
    string s3;
    string s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int flag = 1;
    for(int i = 0; i < 3; i++){
        int white = 0;
        int black = 0;
        if(s1[i] == '#'){
            black++;
        }
        if(s2[i] == '#'){
            black++;
        }
        if(s1[i+1] == '#'){
            black++;
        }
        if(s2[i+1] == '#'){
            black++;
        }
        if(s1[i] == '.'){
            white++;
        }
        if(s2[i] == '.'){
            white++;
        }
        if(s1[i+1] == '.'){
            white++;
        }
        if(s2[i+1] == '.'){
            white++;
        }
        if(white >= 3 || black >=3){
            flag = 2;
            break;
        }
    }
    if(flag == 2){
        cout << "YES";
    }
    else if(flag == 1){
        for(int j = 0; j < 3; j++){
        int white = 0;
        int black = 0;
        if(s2[j] == '#'){
            white++;
        }
        if(s3[j] == '#'){
            white++;
        }
        if(s2[j+1] == '#'){
            white++;
        }
        if(s3[j+1] == '#'){
            white++;
        }
        if(s2[j] == '.'){
            black++;
        }
        if(s3[j] == '.'){
            black++;
        }
        if(s2[j+1] == '.'){
            black++;
        }
        if(s3[j+1] == '.'){
            black++;
        }
        if(white >= 3 || black >=3){
            flag = 3;
            break;
        }
    }
    if(flag == 1){
        for(int l = 0; l < 3; l++){
        int white = 0;
        int black = 0;
        if(s3[l] == '#'){
            white++;
        }
        if(s4[l] == '#'){
            white++;
        }
        if(s3[l+1] == '#'){
            white++;
        }
        if(s4[l+1] == '#'){
            white++;
        }
        if(s3[l] == '.'){
            black++;
        }
        if(s4[l] == '.'){
            black++;
        }
        if(s3[l+1] == '.'){
            black++;
        }
        if(s4[l+1] == '.'){
            black++;
        }
        if(white >= 3 || black >=3){
            flag = 3;
            break;
        }
    }
    }
    if(flag == 3){
        cout << "YES";
    }
    else if(flag == 1){
        cout << "NO";
    }
    }

}
