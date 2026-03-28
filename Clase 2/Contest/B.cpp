#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/609/A
// rating: 800

int main() {

    int n; cin >> n;
    int m; cin >> m;

    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int res = 0;

    for(int i=0; i<n; i++) {
        if(m <= 0) break;
        m -= a[i];
        res++;
    }

    cout << res << endl;

    return 0;
}