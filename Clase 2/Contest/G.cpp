#include <bits/stdc++.h>
using namespace std;


// https://codeforces.com/group/8JufKtWW7p/contest/565415/problem/K
// ICPC

int main() {


    int k; cin >> k;
    string s; cin >> s;
    int n = s.size();

    if(k == 2) {
        char digit = '0';
        int mov1 = 0;
        string res1;
        for(int i=0; i<n; i++) {
            res1.push_back(digit);
            if(digit != s[i]) mov1++;
            digit = (digit == '0' ? '1' : '0'); 
        }

        digit = '1';
        int mov2 = 0;
        string res2;
        for(int i=0; i<n; i++) {
            res2.push_back(digit);
            if(digit != s[i]) mov2++;
            digit = (digit == '0' ? '1' : '0');
        }

        if(mov1 < mov2) {
            cout << mov1 << " " << res1;
        } else {
            cout << mov2 << " " << res2;
        }
        return 0;
    }

    char curr = s[0];
    int cnt = 1;
    int mov = 0;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) cnt++;
        else {
            cnt = 1;
        }
        
        if(cnt == k) {
            if((i+1) < n && s[i] == s[i+1]) {
                s[i] = (s[i] == '0' ? '1' : '0');
            } else {
                s[i-1] = (s[i] == '0' ? '1' : '0');
            }
            mov++;
            cnt = 0;
        }
    }

    cout << mov << " " << s << endl;
    return 0;
}