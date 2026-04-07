#include <bits/stdc++.h>
using namespace std;
#define int long long


// https://codeforces.com/problemset/problem/551/C
// rating: 2200



bool f(int m, vector<int> a, int t) {
    int i = a.size() - 1;
    for(int j=0; j<m;j++) {
        while(i >= 0 && a[i] == 0) i--;
        int mt = t - (i + 1);
        if(mt <= 0) break;
        while(i >= 0 && a[i] <= mt) {
            mt -= a[i];
            i--;
        }
        if(i >= 0) a[i] -= mt;
    }
    return i < 0;
}



signed main() {

    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int z = 100000000000000;
    int x = -1;
    for(int b=z; b>=1; b/=2) {
        while(!f(m, a, b + x)) x += b;
    }
    int k = x + 1;
    
    cout << k  << endl;
    return 0;
}