#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2057/B
// rating: 1000

int main() {

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map<int, int> m;

        for(int i=0; i<n; i++) {
            int a; cin >> a;
            m[a]++;
        }

        vector<int> frecs;
        for(auto& [a, frec] : m) {
            frecs.push_back(frec);
        }

        sort(frecs.begin(), frecs.end());

        int ans = 0;
        for(int i=0; i<frecs.size(); i++) {
            if(frecs[i] <= k) {
                k -= frecs[i];
            } else {
                ans++;
            }
        }
        cout << max(1, ans) << endl;
    }


    return 0;
}