#include <bits/stdc++.h>
using namespace std;
#define int long long


// https://codeforces.com/problemset/problem/1985/F
// rating 1500


bool f(int h, vector<int> a, vector<int> c, int n, int t) {
    for(int i=0; i<n; i++) {
        h -= a[i]*( 1 + t/c[i]);
        
        
        if(h <= 0) return true;
    }
    return h <= 0;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t; cin >> t;
    
    while(t--) {
        int h, n; cin >> h >> n;
        
        vector<int> a(n);
        vector<int> c(n);
        
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> c[i];
        
        

        int x = -1;
        for (int b = 1000000000; b >= 1; b /= 2) {
            while (!f(h, a, c, n, x+b)) x += b;
        }
        int k = x + 1;
    
        
        cout << k + 1 << endl;
    }
        
        
    
    return 0;
}