#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2188/B
// rating: 1000

int main() {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans = 0;
        int curr = 0;


        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                curr -= (i > 0 && s[i-1] == '0' ? 1 : 0);
                ans += ceil(curr/3.0);
                ans++;
                curr = 0;
            } else {
                curr += (i > 0 && s[i-1] == '1' ? 0 : 1);
            }
        }
        ans += ceil(curr/3.0);
        cout << ans << endl; 

        
    }

    return 0;
}