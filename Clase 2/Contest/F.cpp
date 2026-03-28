#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/2187/A
// rating: 1300

bool is_sorted_asc(vector<int>& a, int n) {
    for(int i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n);

        for(int &ai : a) cin >> ai;

        if(is_sorted_asc(a, n)) {
            cout << -1 << endl;
            continue;
        }

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        int a_min = sorted_a[0];
        int a_max = sorted_a[n-1];

        int ans = INT_MAX;

        for(int i=0; i<n; i++) {
            if(a[i] == sorted_a[i]) continue;
            ans = min(ans, max(a[i] - a_min, a_max - a[i]));
        }

        cout << ans << endl;
    }



    return 0;
}