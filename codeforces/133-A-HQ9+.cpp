#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    string s; cin >> s;
    if(strstr(s.c_str(),"H") || strstr(s.c_str(),"Q") || strstr(s.c_str(),"9")){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}