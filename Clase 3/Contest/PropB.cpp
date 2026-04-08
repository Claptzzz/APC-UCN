#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://codeforces.com/problemset/problem/2008/C
// rating: 800

bool solve(ll b, ll l, ll r) {
    ll i = l + (b*(b+1))/2;
    return i <= r;
}

int main() {
    int t; cin >> t;

    while(t--) {
        ll l, r;
        cin >> l >> r;

        ll x = -1;
        for(ll b = (1e9)/2; b>=1; b /=2) {
            while(solve(b + x, l, r)) x += b;
        }

        cout << x + 1 << endl;
    }

    return 0;
}