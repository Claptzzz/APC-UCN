#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://codeforces.com/problemset/problem/1915/C
// rating: 800

bool is_square(ll n) {
    ll x = 0;
    for(ll b=(1e9)/2; b >= 1; b /= 2) {
        while((b+x)*(b+x) <= n) x += b;
    }
    return x*x == n;
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        ll sum = 0;

        for(int i=0; i<n; i++) {
            ll a;
            cin >> a;
            sum += a;
        }
        cout << (is_square(sum) ? "YES" : "NO") << endl;
    }
    return 0;
}