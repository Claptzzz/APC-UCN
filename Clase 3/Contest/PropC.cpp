#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://codeforces.com/problemset/problem/978/C
// rating: 1000

int main() {

    int n,m; cin >> n >> m;
    vector<ll> sum_prefix(n+1, 0);

    for(int i=1; i<=n; i++) {
        ll a; cin >> a;
        sum_prefix[i] = sum_prefix[i-1] + a;
    }

    vector<ll> b(m);
    for(int i=0; i<m; i++) cin >> b[i];

    for(int i=0; i<m; i++) {
        auto it = lower_bound(sum_prefix.begin(), sum_prefix.end(), b[i]);  
        it--;
        cout <<  distance(sum_prefix.begin(), it) + 1 << " " << b[i] - *it <<endl;
    }

    return 0;
}