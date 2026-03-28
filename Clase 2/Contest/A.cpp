#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2153/A
// rating: 800

int main() {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> b(n);

        for(int& bi : b) cin >> bi;

        sort(b.begin(), b.end());

        int cnt = 1;
        int prev = b[0];

        for(int i=1; i<n; i++) {
            if(prev != b[i]) {
                cnt++;
                prev = b[i];
            }
        }

        cout << cnt << endl;
    }


    return 0;
}